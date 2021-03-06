#############################################################################
# Makefile for building: OpenGL
# Generated by qmake (3.0) (Qt 5.3.1)
# Project:  Opengl.pro
# Template: app
# Command: /opt/Qt/5.3/gcc_64/bin/qmake -spec linux-clang CONFIG+=debug -o Makefile Opengl.pro
#############################################################################

MAKEFILE      = Makefile

####### Compiler, tools and options

CC            = clang
CXX           = clang++
DEFINES       = -DQT_GUI_LIB -DQT_CORE_LIB
CFLAGS        = -pipe -g -Wall -W -D_REENTRANT -fPIE $(DEFINES)
CXXFLAGS      = -pipe -I/usr/local/include/SDL2 -D_REENTRANT -g -Wall -W -D_REENTRANT -fPIE $(DEFINES)
INCPATH       = -I/opt/Qt/5.3/gcc_64/mkspecs/linux-clang -I. -I/opt/Qt/5.3/gcc_64/include -I/opt/Qt/5.3/gcc_64/include/QtGui -I/opt/Qt/5.3/gcc_64/include/QtCore -I.
LINK          = clang++
LFLAGS        = -ccc-gcc-name g++ -Wl,-rpath,/opt/Qt/5.3/gcc_64 -Wl,-rpath,/opt/Qt/5.3/gcc_64/lib
LIBS          = $(SUBLIBS) -L/usr/local/lib -Wl,-rpath,/usr/local/lib -lSDL2 -lGLU -lglut -lngl -L/opt/Qt/5.3/gcc_64/lib -lQt5Gui -lQt5Core -lGL -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /opt/Qt/5.3/gcc_64/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = cp -f
COPY_DIR      = cp -f -R
STRIP         = strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = src/Emitter.cpp \
		src/main.cpp \
		src/main2.cpp \
		src/NGLScene.cpp \
		src/OpenGLWindow.cpp \
		src/particle.cpp moc_OpenGLWindow.cpp
OBJECTS       = Emitter.o \
		main.o \
		main2.o \
		NGLScene.o \
		OpenGLWindow.o \
		particle.o \
		moc_OpenGLWindow.o
DIST          = ../.qmake.cache \
		Opengl.pro src/Emitter.cpp \
		src/main.cpp \
		src/main2.cpp \
		src/NGLScene.cpp \
		src/OpenGLWindow.cpp \
		src/particle.cpp
QMAKE_TARGET  = OpenGL
DESTDIR       = #avoid trailing-slash linebreak
TARGET        = OpenGL


first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET):  $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: Opengl.pro ../.qmake.cache /opt/Qt/5.3/gcc_64/mkspecs/linux-clang/qmake.conf /opt/Qt/5.3/gcc_64/mkspecs/features/spec_pre.prf \
		/opt/Qt/5.3/gcc_64/mkspecs/common/shell-unix.conf \
		/opt/Qt/5.3/gcc_64/mkspecs/common/unix.conf \
		/opt/Qt/5.3/gcc_64/mkspecs/common/linux.conf \
		/opt/Qt/5.3/gcc_64/mkspecs/common/gcc-base.conf \
		/opt/Qt/5.3/gcc_64/mkspecs/common/gcc-base-unix.conf \
		/opt/Qt/5.3/gcc_64/mkspecs/common/clang.conf \
		/opt/Qt/5.3/gcc_64/mkspecs/qconfig.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_bluetooth.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_bluetooth_private.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_bootstrap_private.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_clucene_private.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_concurrent.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_concurrent_private.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_core.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_core_private.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_dbus.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_dbus_private.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_declarative.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_declarative_private.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_designer.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_designer_private.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_designercomponents_private.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_enginio.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_enginio_private.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_gui.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_gui_private.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_help.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_help_private.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_multimedia.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_multimedia_private.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_multimediawidgets.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_multimediawidgets_private.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_network.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_network_private.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_nfc.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_nfc_private.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_opengl.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_opengl_private.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_openglextensions.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_openglextensions_private.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_platformsupport_private.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_positioning.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_positioning_private.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_printsupport.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_printsupport_private.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_qml.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_qml_private.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_qmldevtools_private.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_qmltest.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_qmltest_private.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_quick.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_quick_private.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_quickparticles_private.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_quickwidgets.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_quickwidgets_private.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_script.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_script_private.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_scripttools.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_scripttools_private.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_sensors.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_sensors_private.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_serialport.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_serialport_private.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_sql.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_sql_private.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_svg.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_svg_private.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_testlib.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_testlib_private.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_uitools.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_uitools_private.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_webkit.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_webkit_private.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_webkitwidgets.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_webkitwidgets_private.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_websockets.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_websockets_private.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_widgets.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_widgets_private.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_x11extras.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_x11extras_private.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_xml.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_xml_private.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_xmlpatterns.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_xmlpatterns_private.pri \
		/opt/Qt/5.3/gcc_64/mkspecs/features/qt_functions.prf \
		/opt/Qt/5.3/gcc_64/mkspecs/features/qt_config.prf \
		/opt/Qt/5.3/gcc_64/mkspecs/linux-clang/qmake.conf \
		/opt/Qt/5.3/gcc_64/mkspecs/features/spec_post.prf \
		../.qmake.cache \
		/opt/Qt/5.3/gcc_64/mkspecs/features/exclusive_builds.prf \
		/opt/Qt/5.3/gcc_64/mkspecs/features/default_pre.prf \
		/opt/Qt/5.3/gcc_64/mkspecs/features/resolve_config.prf \
		/opt/Qt/5.3/gcc_64/mkspecs/features/default_post.prf \
		/opt/Qt/5.3/gcc_64/mkspecs/features/warn_on.prf \
		/opt/Qt/5.3/gcc_64/mkspecs/features/qt.prf \
		/opt/Qt/5.3/gcc_64/mkspecs/features/resources.prf \
		/opt/Qt/5.3/gcc_64/mkspecs/features/moc.prf \
		/opt/Qt/5.3/gcc_64/mkspecs/features/unix/opengl.prf \
		/opt/Qt/5.3/gcc_64/mkspecs/features/unix/thread.prf \
		/opt/Qt/5.3/gcc_64/mkspecs/features/testcase_targets.prf \
		/opt/Qt/5.3/gcc_64/mkspecs/features/exceptions.prf \
		/opt/Qt/5.3/gcc_64/mkspecs/features/yacc.prf \
		/opt/Qt/5.3/gcc_64/mkspecs/features/lex.prf \
		Opengl.pro \
		/opt/Qt/5.3/gcc_64/lib/libQt5Gui.prl \
		/opt/Qt/5.3/gcc_64/lib/libQt5Core.prl
	$(QMAKE) -spec linux-clang CONFIG+=debug -o Makefile Opengl.pro
/opt/Qt/5.3/gcc_64/mkspecs/features/spec_pre.prf:
/opt/Qt/5.3/gcc_64/mkspecs/common/shell-unix.conf:
/opt/Qt/5.3/gcc_64/mkspecs/common/unix.conf:
/opt/Qt/5.3/gcc_64/mkspecs/common/linux.conf:
/opt/Qt/5.3/gcc_64/mkspecs/common/gcc-base.conf:
/opt/Qt/5.3/gcc_64/mkspecs/common/gcc-base-unix.conf:
/opt/Qt/5.3/gcc_64/mkspecs/common/clang.conf:
/opt/Qt/5.3/gcc_64/mkspecs/qconfig.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_bluetooth.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_bluetooth_private.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_bootstrap_private.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_clucene_private.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_concurrent.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_concurrent_private.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_core.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_core_private.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_dbus.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_dbus_private.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_declarative.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_declarative_private.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_designer.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_designer_private.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_designercomponents_private.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_enginio.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_enginio_private.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_gui.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_gui_private.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_help.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_help_private.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_multimedia.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_multimedia_private.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_multimediawidgets.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_multimediawidgets_private.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_network.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_network_private.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_nfc.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_nfc_private.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_opengl.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_opengl_private.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_openglextensions.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_openglextensions_private.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_platformsupport_private.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_positioning.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_positioning_private.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_printsupport.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_printsupport_private.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_qml.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_qml_private.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_qmldevtools_private.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_qmltest.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_qmltest_private.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_quick.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_quick_private.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_quickparticles_private.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_quickwidgets.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_quickwidgets_private.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_script.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_script_private.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_scripttools.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_scripttools_private.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_sensors.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_sensors_private.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_serialport.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_serialport_private.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_sql.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_sql_private.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_svg.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_svg_private.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_testlib.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_testlib_private.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_uitools.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_uitools_private.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_webkit.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_webkit_private.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_webkitwidgets.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_webkitwidgets_private.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_websockets.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_websockets_private.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_widgets.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_widgets_private.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_x11extras.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_x11extras_private.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_xml.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_xml_private.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_xmlpatterns.pri:
/opt/Qt/5.3/gcc_64/mkspecs/modules/qt_lib_xmlpatterns_private.pri:
/opt/Qt/5.3/gcc_64/mkspecs/features/qt_functions.prf:
/opt/Qt/5.3/gcc_64/mkspecs/features/qt_config.prf:
/opt/Qt/5.3/gcc_64/mkspecs/linux-clang/qmake.conf:
/opt/Qt/5.3/gcc_64/mkspecs/features/spec_post.prf:
../.qmake.cache:
/opt/Qt/5.3/gcc_64/mkspecs/features/exclusive_builds.prf:
/opt/Qt/5.3/gcc_64/mkspecs/features/default_pre.prf:
/opt/Qt/5.3/gcc_64/mkspecs/features/resolve_config.prf:
/opt/Qt/5.3/gcc_64/mkspecs/features/default_post.prf:
/opt/Qt/5.3/gcc_64/mkspecs/features/warn_on.prf:
/opt/Qt/5.3/gcc_64/mkspecs/features/qt.prf:
/opt/Qt/5.3/gcc_64/mkspecs/features/resources.prf:
/opt/Qt/5.3/gcc_64/mkspecs/features/moc.prf:
/opt/Qt/5.3/gcc_64/mkspecs/features/unix/opengl.prf:
/opt/Qt/5.3/gcc_64/mkspecs/features/unix/thread.prf:
/opt/Qt/5.3/gcc_64/mkspecs/features/testcase_targets.prf:
/opt/Qt/5.3/gcc_64/mkspecs/features/exceptions.prf:
/opt/Qt/5.3/gcc_64/mkspecs/features/yacc.prf:
/opt/Qt/5.3/gcc_64/mkspecs/features/lex.prf:
Opengl.pro:
/opt/Qt/5.3/gcc_64/lib/libQt5Gui.prl:
/opt/Qt/5.3/gcc_64/lib/libQt5Core.prl:
qmake: FORCE
	@$(QMAKE) -spec linux-clang CONFIG+=debug -o Makefile Opengl.pro

qmake_all: FORCE

dist: 
	@test -d .tmp/OpenGL1.0.0 || mkdir -p .tmp/OpenGL1.0.0
	$(COPY_FILE) --parents $(DIST) .tmp/OpenGL1.0.0/ && $(COPY_FILE) --parents src/Emitter.h src/NGLScene.h src/OpenGLWindow.h src/particle.h .tmp/OpenGL1.0.0/ && $(COPY_FILE) --parents src/Emitter.cpp src/main.cpp src/main2.cpp src/NGLScene.cpp src/OpenGLWindow.cpp src/particle.cpp .tmp/OpenGL1.0.0/ && (cd `dirname .tmp/OpenGL1.0.0` && $(TAR) OpenGL1.0.0.tar OpenGL1.0.0 && $(COMPRESS) OpenGL1.0.0.tar) && $(MOVE) `dirname .tmp/OpenGL1.0.0`/OpenGL1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/OpenGL1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


distclean: clean 
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


####### Sub-libraries

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

check: first

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_moc_header_make_all: moc_OpenGLWindow.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_OpenGLWindow.cpp
moc_OpenGLWindow.cpp: /opt/Qt/5.3/gcc_64/include/QtGui/QWindow \
		/opt/Qt/5.3/gcc_64/include/QtGui/qwindow.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/QObject \
		/opt/Qt/5.3/gcc_64/include/QtCore/qobject.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qobjectdefs.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qnamespace.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qglobal.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qconfig.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qfeatures.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qsystemdetection.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qprocessordetection.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qcompilerdetection.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qtypeinfo.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qtypetraits.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qsysinfo.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qlogging.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qflags.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qatomic.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qbasicatomic.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qatomic_bootstrap.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qgenericatomic.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qatomic_msvc.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qatomic_armv7.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qatomic_armv6.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qatomic_armv5.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qatomic_ia64.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qatomic_mips.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qatomic_x86.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qatomic_cxx11.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qatomic_gcc.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qatomic_unix.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qglobalstatic.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qmutex.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qnumeric.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qobjectdefs_impl.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qstring.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qchar.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qbytearray.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qrefcount.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qarraydata.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qstringbuilder.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qlist.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qalgorithms.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qiterator.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qcoreevent.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qscopedpointer.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qmetatype.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qvarlengtharray.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qcontainerfwd.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qisenum.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qobject_impl.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/QEvent \
		/opt/Qt/5.3/gcc_64/include/QtCore/QMargins \
		/opt/Qt/5.3/gcc_64/include/QtCore/qmargins.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/QRect \
		/opt/Qt/5.3/gcc_64/include/QtCore/qrect.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qsize.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qpoint.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qsurface.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qsurfaceformat.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qpair.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qwindowdefs.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qwindowdefs_win.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qicon.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qpixmap.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qpaintdevice.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qcolor.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qrgb.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qstringlist.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qdatastream.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qiodevice.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qregexp.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qstringmatcher.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qsharedpointer.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qshareddata.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qsharedpointer_impl.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qhash.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qimage.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qtransform.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qmatrix.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qpolygon.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qvector.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qregion.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qline.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qpainterpath.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qcursor.h \
		src/OpenGLWindow.h
	/opt/Qt/5.3/gcc_64/bin/moc $(DEFINES) -I/opt/Qt/5.3/gcc_64/mkspecs/linux-clang -I/home/i7621581/OpenGL/particleSystem -I/opt/Qt/5.3/gcc_64/include -I/opt/Qt/5.3/gcc_64/include/QtGui -I/opt/Qt/5.3/gcc_64/include/QtCore src/OpenGLWindow.h -o moc_OpenGLWindow.cpp

compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean 

####### Compile

Emitter.o: src/Emitter.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Emitter.o src/Emitter.cpp

main.o: src/main.cpp src/particle.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o src/main.cpp

main2.o: src/main2.cpp /opt/Qt/5.3/gcc_64/include/QtGui/QGuiApplication \
		/opt/Qt/5.3/gcc_64/include/QtGui/qguiapplication.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qcoreapplication.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qglobal.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qconfig.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qfeatures.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qsystemdetection.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qprocessordetection.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qcompilerdetection.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qtypeinfo.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qtypetraits.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qsysinfo.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qlogging.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qflags.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qatomic.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qbasicatomic.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qatomic_bootstrap.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qgenericatomic.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qatomic_msvc.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qatomic_armv7.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qatomic_armv6.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qatomic_armv5.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qatomic_ia64.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qatomic_mips.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qatomic_x86.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qatomic_cxx11.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qatomic_gcc.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qatomic_unix.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qglobalstatic.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qmutex.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qnumeric.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qstring.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qchar.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qbytearray.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qrefcount.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qnamespace.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qarraydata.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qstringbuilder.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qobject.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qobjectdefs.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qobjectdefs_impl.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qlist.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qalgorithms.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qiterator.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qcoreevent.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qscopedpointer.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qmetatype.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qvarlengtharray.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qcontainerfwd.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qisenum.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qobject_impl.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qeventloop.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qwindowdefs.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qwindowdefs_win.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qinputmethod.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qlocale.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qvariant.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qmap.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qpair.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qdebug.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qhash.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qtextstream.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qiodevice.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qvector.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qpoint.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qset.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qcontiguouscache.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qstringlist.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qdatastream.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qregexp.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qstringmatcher.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qshareddata.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qsize.h \
		src/NGLScene.h \
		src/OpenGLWindow.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/QWindow \
		/opt/Qt/5.3/gcc_64/include/QtGui/qwindow.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/QObject \
		/opt/Qt/5.3/gcc_64/include/QtCore/QEvent \
		/opt/Qt/5.3/gcc_64/include/QtCore/QMargins \
		/opt/Qt/5.3/gcc_64/include/QtCore/qmargins.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/QRect \
		/opt/Qt/5.3/gcc_64/include/QtCore/qrect.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qsurface.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qsurfaceformat.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qicon.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qpixmap.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qpaintdevice.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qcolor.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qrgb.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qsharedpointer.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qsharedpointer_impl.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qimage.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qtransform.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qmatrix.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qpolygon.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qregion.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qline.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qpainterpath.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qcursor.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main2.o src/main2.cpp

NGLScene.o: src/NGLScene.cpp /opt/Qt/5.3/gcc_64/include/QtGui/QMouseEvent \
		/opt/Qt/5.3/gcc_64/include/QtGui/qevent.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qwindowdefs.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qglobal.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qconfig.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qfeatures.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qsystemdetection.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qprocessordetection.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qcompilerdetection.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qtypeinfo.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qtypetraits.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qsysinfo.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qlogging.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qflags.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qatomic.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qbasicatomic.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qatomic_bootstrap.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qgenericatomic.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qatomic_msvc.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qatomic_armv7.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qatomic_armv6.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qatomic_armv5.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qatomic_ia64.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qatomic_mips.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qatomic_x86.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qatomic_cxx11.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qatomic_gcc.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qatomic_unix.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qglobalstatic.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qmutex.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qnumeric.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qobjectdefs.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qnamespace.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qobjectdefs_impl.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qwindowdefs_win.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qobject.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qstring.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qchar.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qbytearray.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qrefcount.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qarraydata.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qstringbuilder.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qlist.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qalgorithms.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qiterator.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qcoreevent.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qscopedpointer.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qmetatype.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qvarlengtharray.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qcontainerfwd.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qisenum.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qobject_impl.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qregion.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qrect.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qmargins.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qsize.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qpoint.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qdatastream.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qiodevice.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qpair.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qkeysequence.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qvariant.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qmap.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qdebug.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qhash.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qtextstream.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qlocale.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qshareddata.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qvector.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qset.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qcontiguouscache.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qstringlist.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qregexp.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qstringmatcher.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qurl.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qurlquery.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qfile.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qfiledevice.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qvector2d.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qtouchdevice.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/QGuiApplication \
		/opt/Qt/5.3/gcc_64/include/QtGui/qguiapplication.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qcoreapplication.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qeventloop.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qinputmethod.h \
		src/NGLScene.h \
		src/OpenGLWindow.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/QWindow \
		/opt/Qt/5.3/gcc_64/include/QtGui/qwindow.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/QObject \
		/opt/Qt/5.3/gcc_64/include/QtCore/QEvent \
		/opt/Qt/5.3/gcc_64/include/QtCore/QMargins \
		/opt/Qt/5.3/gcc_64/include/QtCore/QRect \
		/opt/Qt/5.3/gcc_64/include/QtGui/qsurface.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qsurfaceformat.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qicon.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qpixmap.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qpaintdevice.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qcolor.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qrgb.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qsharedpointer.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qsharedpointer_impl.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qimage.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qtransform.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qmatrix.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qpolygon.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qline.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qpainterpath.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qcursor.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o NGLScene.o src/NGLScene.cpp

OpenGLWindow.o: src/OpenGLWindow.cpp src/OpenGLWindow.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/QWindow \
		/opt/Qt/5.3/gcc_64/include/QtGui/qwindow.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/QObject \
		/opt/Qt/5.3/gcc_64/include/QtCore/qobject.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qobjectdefs.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qnamespace.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qglobal.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qconfig.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qfeatures.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qsystemdetection.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qprocessordetection.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qcompilerdetection.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qtypeinfo.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qtypetraits.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qsysinfo.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qlogging.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qflags.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qatomic.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qbasicatomic.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qatomic_bootstrap.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qgenericatomic.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qatomic_msvc.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qatomic_armv7.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qatomic_armv6.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qatomic_armv5.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qatomic_ia64.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qatomic_mips.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qatomic_x86.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qatomic_cxx11.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qatomic_gcc.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qatomic_unix.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qglobalstatic.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qmutex.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qnumeric.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qobjectdefs_impl.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qstring.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qchar.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qbytearray.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qrefcount.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qarraydata.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qstringbuilder.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qlist.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qalgorithms.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qiterator.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qcoreevent.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qscopedpointer.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qmetatype.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qvarlengtharray.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qcontainerfwd.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qisenum.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qobject_impl.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/QEvent \
		/opt/Qt/5.3/gcc_64/include/QtCore/QMargins \
		/opt/Qt/5.3/gcc_64/include/QtCore/qmargins.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/QRect \
		/opt/Qt/5.3/gcc_64/include/QtCore/qrect.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qsize.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qpoint.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qsurface.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qsurfaceformat.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qpair.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qwindowdefs.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qwindowdefs_win.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qicon.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qpixmap.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qpaintdevice.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qcolor.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qrgb.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qstringlist.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qdatastream.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qiodevice.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qregexp.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qstringmatcher.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qsharedpointer.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qshareddata.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qsharedpointer_impl.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qhash.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qimage.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qtransform.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qmatrix.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qpolygon.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qvector.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qregion.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qline.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qpainterpath.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qcursor.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/QCoreApplication \
		/opt/Qt/5.3/gcc_64/include/QtCore/qcoreapplication.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qeventloop.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/QOpenGLContext \
		/opt/Qt/5.3/gcc_64/include/QtGui/qopenglcontext.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/QScopedPointer \
		/opt/Qt/5.3/gcc_64/include/QtGui/QSurfaceFormat \
		/opt/Qt/5.3/gcc_64/include/QtGui/qopengl.h \
		/opt/Qt/5.3/gcc_64/include/QtCore/qt_windows.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qopengles2ext.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qopenglext.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qopenglversionfunctions.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/QOpenGLPaintDevice \
		/opt/Qt/5.3/gcc_64/include/QtGui/qopenglpaintdevice.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/QPainter \
		/opt/Qt/5.3/gcc_64/include/QtGui/qpainter.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qtextoption.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qpen.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qbrush.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qfontinfo.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qfont.h \
		/opt/Qt/5.3/gcc_64/include/QtGui/qfontmetrics.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o OpenGLWindow.o src/OpenGLWindow.cpp

particle.o: src/particle.cpp src/Emitter.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o particle.o src/particle.cpp

moc_OpenGLWindow.o: moc_OpenGLWindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_OpenGLWindow.o moc_OpenGLWindow.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

