TARGET = pyrcc4
OFILES = main.o rcc.o
HFILES = rcc.h

CC = /opt/necessitas/android-ndk-r6b/toolchains/arm-linux-androideabi-4.4.3/prebuilt/linux-x86/bin/arm-linux-androideabi-gcc
CXX = /opt/necessitas/android-ndk-r6b/toolchains/arm-linux-androideabi-4.4.3/prebuilt/linux-x86/bin/arm-linux-androideabi-g++
LINK = /opt/necessitas/android-ndk-r6b/toolchains/arm-linux-androideabi-4.4.3/prebuilt/linux-x86/bin/arm-linux-androideabi-g++
CPPFLAGS = -DNDEBUG -DQT_NO_DEBUG -DQT_CORE_LIB -DQT_XML_LIB -I. -I/opt/necessitas/android-ndk-r6b/sources/cxx-stl-4.4.3/gnu-libstdc++/include -I/opt/necessitas/android-ndk-r6b/sources/cxx-stl-4.4.3/gnu-libstdc++/libs/armeabi/include -I/opt/necessitas/Android/Qt/480/qt-src/src/3rdparty/phonon -I/opt/necessitas/mkspecs/linux-g++ -I/opt/necessitas/Android/Qt/480/armeabi/include/QtCore -I/opt/necessitas/Android/Qt/480/armeabi/include/QtXml -I/opt/necessitas/Android/Qt/480/armeabi/include
CFLAGS = -pipe -g -mthumb -Os -fomit-frame-pointer -fno-strict-aliasing -finline-limit=64 -Wall -Wno-psabi -W -D_REENTRANT
CXXFLAGS = -pipe -DQT_NO_QWS_TRANSFORMED -DQ_WS_QWS -Dprotected=public -DSIP_PROTECTED_IS_PUBLIC --sysroot=/opt/necessitas/android-ndk-r6b/platforms/android-9/arch-arm/ -pipe -DQT_NO_QWS_TRANSFORMED -DQ_WS_QWS -Dprotected=public -DSIP_PROTECTED_IS_PUBLIC --sysroot=/opt/necessitas/android-ndk-r6b/platforms/android-9/arch-arm/ -fpic -g -msoft-float -mthumb -mthumb-interwork -mtune=xscale -march=armv5te -mfloat-abi=softfp -mfpu=vfp -mthumb -Os -fomit-frame-pointer -fno-strict-aliasing -finline-limit=64 -g -msoft-float -mthumb -mthumb-interwork  -mtune=xscale -march=armv5te -mfloat-abi=softfp -mfpu=vfp -mthumb -Os -fomit-frame-pointer -fno-strict-aliasing -finline-limit=64 -Wall -Wno-psabi -W -Os -pipe -msoft-float -fpic -mthumb-interwork -ffunction-sections -funwind-tables -fstack-protector -fno-short-enums -funwind-tables -DANDROID  -D__ARM_ARCH_5__ -D__ARM_ARCH_5T__ -D__ARM_ARCH_5TE__ -D__STDC_INT64__ -DQT_NO_QWS_TRANSFORMED -g -mthumb -Os -fomit-frame-pointer -fno-strict-aliasing -finline-limit=64 -g -mthumb -Os -fomit-frame-pointer -fno-strict-aliasing -finline-limit=64 -Wall -Wno-psabi -W -D_REENTRANT
LFLAGS = --sysroot=/opt/necessitas/android-ndk-r6b/platforms/android-9/arch-arm/ -L/opt/necessitas/android-ndk-r6b/toolchains/arm-linux-androideabi-4.4.3/prebuilt/linux-x86/bin/../lib/gcc/arm-linux-androideabi/4.4.3/ -Wl,-rpath-link= -Wl,-rpath=/opt/necessitas/Android/Qt/480/qt-src/src/3rdparty/android/precompiled/android-9/arch-arm/lib -Wl,-z,noexecstack -Wl,-O1  -Wl,-z,noexecstack -shared -Wl,-shared,-Bsymbolic -Wl,--no-whole-archive -Wl,-rpath=/opt/necessitas/Android/Qt/480/armeabi/lib
LIBS = -L/opt/necessitas/android-ndk-r6b/sources/cxx-stl-4.4.3/gnu-libstdc++/libs/armeabi/ -L/opt/necessitas/Android/Qt/480/armeabi/lib -lstdc++ -lsupc++ -llog -lz -lm -ldl -lc -lgcc -L/home/tsheasha/GUC/Bachelors/android-python27/python-build/output/python/lib/ -lpython2.7 -lQtCore -L/tmp/necessitas/unstable/Android/Qt/480/build-armeabi/install/lib -L/tmp/necessitas/android-ndk-r6b/sources/cxx-stl/gnu-libstdc++/libs/armeabi -L/tmp/necessitas/android-ndk-r6b/platforms/android-9/arch-arm//usr/lib -lstdc++ -lsupc++ -llog -lz -lm -ldl -lc -lgcc -lQtXml -L/tmp/necessitas/unstable/Android/Qt/480/build-armeabi/install/lib -L/tmp/necessitas/android-ndk-r6b/sources/cxx-stl/gnu-libstdc++/libs/armeabi -L/tmp/necessitas/android-ndk-r6b/platforms/android-9/arch-arm//usr/lib -lQtCore -L/tmp/necessitas/unstable/Android/Qt/480/build-armeabi/install/lib -L/tmp/necessitas/android-ndk-r6b/sources/cxx-stl/gnu-libstdc++/libs/armeabi -L/tmp/necessitas/android-ndk-r6b/platforms/android-9/arch-arm//usr/lib -lstdc++ -lsupc++ -llog -lz -lm -ldl -lc -lgcc
MOC = /opt/necessitas/Android/Qt/480/armeabi/bin/moc
.SUFFIXES: .c .o .cpp .cc .cxx .C


.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) -o $@ $<

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) -o $@ $<

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) -o $@ $<

.C.o:
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) -o $@ $<

.c.o:
	$(CC) -c $(CFLAGS) $(CPPFLAGS) -o $@ $<

all: $(TARGET)

$(OFILES): $(HFILES)

$(TARGET): $(OFILES)
	$(LINK) $(LFLAGS) -o $(TARGET) $(OFILES) $(LIBS)
	/opt/necessitas/Android/Qt/480/armeabi/bin/rcc -o ../examples/widgets/tooltips/tooltips_rc.py ../examples/widgets/tooltips/tooltips.qrc
	/opt/necessitas/Android/Qt/480/armeabi/bin/rcc -o ../examples/itemviews/puzzle/puzzle_rc.py ../examples/itemviews/puzzle/puzzle.qrc
	/opt/necessitas/Android/Qt/480/armeabi/bin/rcc -o ../examples/itemviews/pixelator/pixelator_rc.py ../examples/itemviews/pixelator/pixelator.qrc
	/opt/necessitas/Android/Qt/480/armeabi/bin/rcc -o ../examples/itemviews/chart/chart_rc.py ../examples/itemviews/chart/chart.qrc
	/opt/necessitas/Android/Qt/480/armeabi/bin/rcc -o ../examples/itemviews/editabletreemodel/editabletreemodel_rc.py ../examples/itemviews/editabletreemodel/editabletreemodel.qrc
	/opt/necessitas/Android/Qt/480/armeabi/bin/rcc -o ../examples/itemviews/simpletreemodel/simpletreemodel_rc.py ../examples/itemviews/simpletreemodel/simpletreemodel.qrc
	/opt/necessitas/Android/Qt/480/armeabi/bin/rcc -o ../examples/tools/i18n/i18n_rc.py ../examples/tools/i18n/i18n.qrc
	/opt/necessitas/Android/Qt/480/armeabi/bin/rcc -o ../examples/animation/stickman/stickman_rc.py ../examples/animation/stickman/stickman.qrc
	/opt/necessitas/Android/Qt/480/armeabi/bin/rcc -o ../examples/animation/easing/easing_rc.py ../examples/animation/easing/easing.qrc
	/opt/necessitas/Android/Qt/480/armeabi/bin/rcc -o ../examples/animation/states/states_rc.py ../examples/animation/states/states.qrc
	/opt/necessitas/Android/Qt/480/armeabi/bin/rcc -o ../examples/animation/appchooser/appchooser_rc.py ../examples/animation/appchooser/appchooser.qrc
	/opt/necessitas/Android/Qt/480/armeabi/bin/rcc -o ../examples/animation/animatedtiles/animatedtiles_rc.py ../examples/animation/animatedtiles/animatedtiles.qrc
	/opt/necessitas/Android/Qt/480/armeabi/bin/rcc -o ../examples/xmlpatterns/schema/schema_rc.py ../examples/xmlpatterns/schema/schema.qrc
	/opt/necessitas/Android/Qt/480/armeabi/bin/rcc -o ../examples/declarative/modelviews/objectlistmodel/objectlistmodel_rc.py ../examples/declarative/modelviews/objectlistmodel/objectlistmodel.qrc
	/opt/necessitas/Android/Qt/480/armeabi/bin/rcc -o ../examples/draganddrop/puzzle/puzzle_rc.py ../examples/draganddrop/puzzle/puzzle.qrc
	/opt/necessitas/Android/Qt/480/armeabi/bin/rcc -o ../examples/draganddrop/draggableicons/draggableicons_rc.py ../examples/draganddrop/draggableicons/draggableicons.qrc
	/opt/necessitas/Android/Qt/480/armeabi/bin/rcc -o ../examples/draganddrop/fridgemagnets/fridgemagnets_rc.py ../examples/draganddrop/fridgemagnets/fridgemagnets.qrc
	/opt/necessitas/Android/Qt/480/armeabi/bin/rcc -o ../examples/draganddrop/delayedencoding/delayedencoding_rc.py ../examples/draganddrop/delayedencoding/delayedencoding.qrc
	/opt/necessitas/Android/Qt/480/armeabi/bin/rcc -o ../examples/draganddrop/draggabletext/draggabletext_rc.py ../examples/draganddrop/draggabletext/draggabletext.qrc
	/opt/necessitas/Android/Qt/480/armeabi/bin/rcc -o ../examples/demos/embeddeddialogs/embeddeddialogs_rc.py ../examples/demos/embeddeddialogs/embeddeddialogs.qrc
	/opt/necessitas/Android/Qt/480/armeabi/bin/rcc -o ../examples/demos/qtdemo/qtdemo_rc.py ../examples/demos/qtdemo/qtdemo.qrc
	/opt/necessitas/Android/Qt/480/armeabi/bin/rcc -o ../examples/activeqt/webbrowser/mainwindow_rc.py ../examples/activeqt/webbrowser/mainwindow.qrc
	/opt/necessitas/Android/Qt/480/armeabi/bin/rcc -o ../examples/dialogs/classwizard/classwizard_rc.py ../examples/dialogs/classwizard/classwizard.qrc
	/opt/necessitas/Android/Qt/480/armeabi/bin/rcc -o ../examples/dialogs/configdialog/configdialog_rc.py ../examples/dialogs/configdialog/configdialog.qrc
	/opt/necessitas/Android/Qt/480/armeabi/bin/rcc -o ../examples/graphicsview/padnavigator/padnavigator_rc.py ../examples/graphicsview/padnavigator/padnavigator.qrc
	/opt/necessitas/Android/Qt/480/armeabi/bin/rcc -o ../examples/graphicsview/collidingmice/mice_rc.py ../examples/graphicsview/collidingmice/mice.qrc
	/opt/necessitas/Android/Qt/480/armeabi/bin/rcc -o ../examples/graphicsview/dragdroprobot/dragdroprobot_rc.py ../examples/graphicsview/dragdroprobot/dragdroprobot.qrc
	/opt/necessitas/Android/Qt/480/armeabi/bin/rcc -o ../examples/graphicsview/diagramscene/diagramscene_rc.py ../examples/graphicsview/diagramscene/diagramscene.qrc
	/opt/necessitas/Android/Qt/480/armeabi/bin/rcc -o ../examples/opengl/textures/textures_rc.py ../examples/opengl/textures/textures.qrc
	/opt/necessitas/Android/Qt/480/armeabi/bin/rcc -o ../examples/network/ftp/ftp_rc.py ../examples/network/ftp/ftp.qrc
	/opt/necessitas/Android/Qt/480/armeabi/bin/rcc -o ../examples/painting/basicdrawing/basicdrawing_rc.py ../examples/painting/basicdrawing/basicdrawing.qrc
	/opt/necessitas/Android/Qt/480/armeabi/bin/rcc -o ../examples/painting/svgviewer/svgviewer_rc.py ../examples/painting/svgviewer/svgviewer.qrc
	/opt/necessitas/Android/Qt/480/armeabi/bin/rcc -o ../examples/mainwindows/sdi/sdi_rc.py ../examples/mainwindows/sdi/sdi.qrc
	/opt/necessitas/Android/Qt/480/armeabi/bin/rcc -o ../examples/mainwindows/mdi/mdi_rc.py ../examples/mainwindows/mdi/mdi.qrc
	/opt/necessitas/Android/Qt/480/armeabi/bin/rcc -o ../examples/mainwindows/dockwidgets/dockwidgets_rc.py ../examples/mainwindows/dockwidgets/dockwidgets.qrc
	/opt/necessitas/Android/Qt/480/armeabi/bin/rcc -o ../examples/mainwindows/application/application_rc.py ../examples/mainwindows/application/application.qrc
	/opt/necessitas/Android/Qt/480/armeabi/bin/rcc -o ../examples/desktop/systray/systray_rc.py ../examples/desktop/systray/systray.qrc

install: $(TARGET)
	@test -d $(DESTDIR)/home/tsheasha/GUC/Bachelors/android-python27/python-build/output/python/bin || mkdir $(DESTDIR)/home/tsheasha/GUC/Bachelors/android-python27/python-build/output/python/bin
	cp -f $(TARGET) $(DESTDIR)/home/tsheasha/GUC/Bachelors/android-python27/python-build/output/python/bin/$(TARGET)

clean:
	-del /q 2> NUL $(TARGET)
	-del /q 2> NUL main.o
	-del /q 2> NUL rcc.o
