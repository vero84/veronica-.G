#!/usr/bin/env sh

export ROOTDIR=$(dirname $(readlink -f $0))
export HOSTPYTHON=$ROOTDIR/hostpython
export HOSTPGEN=$ROOTDIR/hostpgen

export PYVERSION="2.7.2"

export ARCH="armeabi"
#export ARCH="armeabi-v7a"

# to override the default optimization, set OFLAG
#export OFLAG="-Os"
#export OFLAG="-O2"

export CFLAGS="-mandroid $OFLAG -fomit-frame-pointer --sysroot $NDKPLATFORM -DNO_MALLINFO=1"
if [ $ARCH == "armeabi-v7a" ]; then
    CFLAGS+=" -march=armv7-a -mfloat-abi=softfp -mfpu=vfp -mthumb"
fi
export CXXFLAGS="$CFLAGS"

export CC="arm-linux-androideabi-gcc $CFLAGS"
export CXX="arm-linux-androideabi-g++ $CXXFLAGS"
export AR="arm-linux-androideabi-ar"
export RANLIB="arm-linux-androideabi-ranlib"
export STRIP="arm-linux-androideabi-strip --strip-unneeded"
export BLDSHARED="arm-linux-androideabi-gcc -shared $CFLAGS"
export MAKE="make -j4"

build_jni() {
    cd $ROOTDIR
    ndk-build V=1
}

build_openssl() {
    cd $ROOTDIR/openssl
    ndk-build V=1
    cp -r $ROOTDIR/openssl/obj $ROOTDIR/obj
}

build_python() {
    cd $ROOTDIR/Python
    make distclean
    ./configure --host=arm-eabi --build=i386-linux-gnu --enable-shared
    cat pyconfig.h \
    | sed -e '/HAVE_FDATASYNC/ c#undef HAVE_FDATASYNC' \
    | sed -e '/HAVE_KILLPG/ c#undef HAVE_KILLPG' \
    | sed -e '/HAVE_GETHOSTBYNAME_R/ c#undef HAVE_GETHOSTBYNAME_R' \
    | sed -e '/HAVE_DECL_ISFINITE/ c#undef HAVE_DECL_ISFINITE' \
    > temp
    mv temp pyconfig.h

    $MAKE HOSTPYTHON=$HOSTPYTHON HOSTPGEN=$HOSTPGEN BLDSHARED="$BLDSHARED" CROSS_COMPILE=arm-eabi- CROSS_COMPILE_TARGET=yes \
    HOSTARCH=arm-linux BUILDARCH=i386-linux-gnu INSTSONAME=libpython2.7.so $MODULE

    if [ -z "$MODULE" ]; then
        $MAKE install HOSTPYTHON=$HOSTPYTHON BLDSHARED="$BLDSHARED" CROSS_COMPILE=arm-eabi- CROSS_COMPILE_TARGET=yes \
        prefix="$ROOTDIR/build" INSTSONAME=libpython2.7.so $MODULE
    fi
}

build_jni
build_openssl

export CC="$CC -I$ROOTDIR/jni/sqlite3"

export MODULE="libpython2.7.so"

build_python
mv $ROOTDIR/Python/libpython2.7.so $ROOTDIR


export MODULE=""
export BLDSHARED="arm-linux-androideabi-gcc -shared $CFLAGS -L$ROOTDIR -lpython2.7 -Wl,--no-undefined"

build_python
yes | mv $ROOTDIR/libpython2.7.so $ROOTDIR/build/lib/libpython2.7.so
