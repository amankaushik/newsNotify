#############################################################################
# Makefile for building: cfgtest_QtDesigner
# Generated by qmake (3.0) (Qt 5.3.0)
# Project:  cfgtest_QtDesigner.pro
# Template: app
# Command: /home/amankaushik/Qt5.3.0/5.3/gcc_64/bin/qmake -o cfgtest_QtDesigner.mk cfgtest_QtDesigner.pro
#############################################################################

MAKEFILE      = cfgtest_QtDesigner.mk

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_NO_DEBUG -DQT_DESIGNER_LIB -DQT_WIDGETS_LIB -DQT_XML_LIB -DQT_GUI_LIB -DQT_CORE_LIB
CFLAGS        = -pipe -O2 -Wall -W -D_REENTRANT -fPIE $(DEFINES)
CXXFLAGS      = -pipe -O2 -Wall -W -D_REENTRANT -fPIE $(DEFINES)
INCPATH       = -I../../../Qt5.3.0/5.3/gcc_64/mkspecs/linux-g++ -I. -I../../../Qt5.3.0/5.3/gcc_64/include -I../../../Qt5.3.0/5.3/gcc_64/include/QtDesigner -I../../../Qt5.3.0/5.3/gcc_64/include/QtWidgets -I../../../Qt5.3.0/5.3/gcc_64/include/QtXml -I../../../Qt5.3.0/5.3/gcc_64/include/QtGui -I../../../Qt5.3.0/5.3/gcc_64/include/QtCore -I.
LINK          = g++
LFLAGS        = -Wl,-O1 -Wl,-rpath,/home/amankaushik/Qt5.3.0/5.3/gcc_64 -Wl,-rpath,/home/amankaushik/Qt5.3.0/5.3/gcc_64/lib
LIBS          = $(SUBLIBS) -L/home/amankaushik/Qt5.3.0/5.3/gcc_64/lib -lQt5Designer -lQt5Widgets -lQt5Xml -lQt5Gui -lQt5Core -lGL -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /home/amankaushik/Qt5.3.0/5.3/gcc_64/bin/qmake
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

SOURCES       = cfgtest_QtDesigner.cpp 
OBJECTS       = cfgtest_QtDesigner.o
DIST          = ../../../Qt5.3.0/5.3/gcc_64/mkspecs/features/spec_pre.prf \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/common/shell-unix.conf \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/common/unix.conf \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/common/linux.conf \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/common/gcc-base.conf \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/common/gcc-base-unix.conf \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/common/g++-base.conf \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/common/g++-unix.conf \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/qconfig.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_bluetooth.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_bluetooth_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_bootstrap_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_clucene_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_concurrent.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_concurrent_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_core.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_core_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_dbus.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_dbus_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_declarative.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_declarative_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_designer.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_designer_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_designercomponents_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_enginio.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_enginio_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_gui.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_gui_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_help.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_help_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_multimedia.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_multimedia_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_multimediawidgets.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_multimediawidgets_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_network.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_network_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_nfc.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_nfc_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_opengl.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_opengl_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_openglextensions.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_openglextensions_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_platformsupport_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_positioning.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_positioning_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_printsupport.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_printsupport_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_qml.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_qml_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_qmldevtools_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_qmltest.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_qmltest_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_quick.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_quick_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_quickparticles_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_quickwidgets.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_quickwidgets_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_script.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_script_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_scripttools.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_scripttools_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_sensors.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_sensors_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_serialport.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_serialport_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_sql.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_sql_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_svg.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_svg_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_testlib.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_testlib_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_uitools.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_uitools_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_webkit.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_webkit_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_webkitwidgets.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_webkitwidgets_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_websockets.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_websockets_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_widgets.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_widgets_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_x11extras.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_x11extras_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_xml.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_xml_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_xmlpatterns.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_xmlpatterns_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/features/qt_functions.prf \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/features/qt_config.prf \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/linux-g++/qmake.conf \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/features/spec_post.prf \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/features/exclusive_builds.prf \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/features/default_pre.prf \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/features/resolve_config.prf \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/features/default_post.prf \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/features/warn_on.prf \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/features/qt.prf \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/features/resources.prf \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/features/moc.prf \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/features/unix/opengl.prf \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/features/uic.prf \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/features/designer_defines.prf \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/features/unix/thread.prf \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/features/testcase_targets.prf \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/features/exceptions.prf \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/features/yacc.prf \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/features/lex.prf \
		cfgtest_QtDesigner.pro cfgtest_QtDesigner.cpp
QMAKE_TARGET  = cfgtest_QtDesigner
DESTDIR       = #avoid trailing-slash linebreak
TARGET        = cfgtest_QtDesigner


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

all: cfgtest_QtDesigner.mk $(TARGET)

$(TARGET):  $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

cfgtest_QtDesigner.mk: cfgtest_QtDesigner.pro ../../../Qt5.3.0/5.3/gcc_64/mkspecs/linux-g++/qmake.conf ../../../Qt5.3.0/5.3/gcc_64/mkspecs/features/spec_pre.prf \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/common/shell-unix.conf \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/common/unix.conf \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/common/linux.conf \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/common/gcc-base.conf \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/common/gcc-base-unix.conf \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/common/g++-base.conf \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/common/g++-unix.conf \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/qconfig.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_bluetooth.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_bluetooth_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_bootstrap_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_clucene_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_concurrent.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_concurrent_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_core.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_core_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_dbus.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_dbus_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_declarative.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_declarative_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_designer.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_designer_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_designercomponents_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_enginio.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_enginio_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_gui.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_gui_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_help.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_help_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_multimedia.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_multimedia_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_multimediawidgets.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_multimediawidgets_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_network.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_network_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_nfc.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_nfc_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_opengl.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_opengl_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_openglextensions.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_openglextensions_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_platformsupport_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_positioning.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_positioning_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_printsupport.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_printsupport_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_qml.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_qml_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_qmldevtools_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_qmltest.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_qmltest_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_quick.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_quick_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_quickparticles_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_quickwidgets.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_quickwidgets_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_script.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_script_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_scripttools.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_scripttools_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_sensors.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_sensors_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_serialport.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_serialport_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_sql.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_sql_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_svg.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_svg_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_testlib.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_testlib_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_uitools.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_uitools_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_webkit.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_webkit_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_webkitwidgets.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_webkitwidgets_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_websockets.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_websockets_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_widgets.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_widgets_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_x11extras.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_x11extras_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_xml.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_xml_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_xmlpatterns.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_xmlpatterns_private.pri \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/features/qt_functions.prf \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/features/qt_config.prf \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/linux-g++/qmake.conf \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/features/spec_post.prf \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/features/exclusive_builds.prf \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/features/default_pre.prf \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/features/resolve_config.prf \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/features/default_post.prf \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/features/warn_on.prf \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/features/qt.prf \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/features/resources.prf \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/features/moc.prf \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/features/unix/opengl.prf \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/features/uic.prf \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/features/designer_defines.prf \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/features/unix/thread.prf \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/features/testcase_targets.prf \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/features/exceptions.prf \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/features/yacc.prf \
		../../../Qt5.3.0/5.3/gcc_64/mkspecs/features/lex.prf \
		cfgtest_QtDesigner.pro \
		/home/amankaushik/Qt5.3.0/5.3/gcc_64/lib/libQt5Designer.prl \
		/home/amankaushik/Qt5.3.0/5.3/gcc_64/lib/libQt5Widgets.prl \
		/home/amankaushik/Qt5.3.0/5.3/gcc_64/lib/libQt5Gui.prl \
		/home/amankaushik/Qt5.3.0/5.3/gcc_64/lib/libQt5Core.prl \
		/home/amankaushik/Qt5.3.0/5.3/gcc_64/lib/libQt5Xml.prl
	$(QMAKE) -o cfgtest_QtDesigner.mk cfgtest_QtDesigner.pro
../../../Qt5.3.0/5.3/gcc_64/mkspecs/features/spec_pre.prf:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/common/shell-unix.conf:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/common/unix.conf:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/common/linux.conf:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/common/gcc-base.conf:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/common/gcc-base-unix.conf:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/common/g++-base.conf:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/common/g++-unix.conf:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/qconfig.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_bluetooth.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_bluetooth_private.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_bootstrap_private.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_clucene_private.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_concurrent.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_concurrent_private.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_core.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_core_private.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_dbus.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_dbus_private.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_declarative.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_declarative_private.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_designer.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_designer_private.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_designercomponents_private.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_enginio.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_enginio_private.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_gui.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_gui_private.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_help.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_help_private.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_multimedia.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_multimedia_private.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_multimediawidgets.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_multimediawidgets_private.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_network.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_network_private.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_nfc.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_nfc_private.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_opengl.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_opengl_private.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_openglextensions.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_openglextensions_private.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_platformsupport_private.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_positioning.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_positioning_private.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_printsupport.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_printsupport_private.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_qml.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_qml_private.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_qmldevtools_private.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_qmltest.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_qmltest_private.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_quick.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_quick_private.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_quickparticles_private.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_quickwidgets.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_quickwidgets_private.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_script.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_script_private.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_scripttools.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_scripttools_private.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_sensors.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_sensors_private.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_serialport.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_serialport_private.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_sql.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_sql_private.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_svg.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_svg_private.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_testlib.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_testlib_private.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_uitools.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_uitools_private.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_webkit.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_webkit_private.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_webkitwidgets.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_webkitwidgets_private.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_websockets.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_websockets_private.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_widgets.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_widgets_private.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_x11extras.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_x11extras_private.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_xml.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_xml_private.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_xmlpatterns.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/modules/qt_lib_xmlpatterns_private.pri:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/features/qt_functions.prf:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/features/qt_config.prf:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/linux-g++/qmake.conf:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/features/spec_post.prf:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/features/exclusive_builds.prf:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/features/default_pre.prf:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/features/resolve_config.prf:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/features/default_post.prf:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/features/warn_on.prf:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/features/qt.prf:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/features/resources.prf:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/features/moc.prf:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/features/unix/opengl.prf:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/features/uic.prf:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/features/designer_defines.prf:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/features/unix/thread.prf:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/features/testcase_targets.prf:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/features/exceptions.prf:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/features/yacc.prf:
../../../Qt5.3.0/5.3/gcc_64/mkspecs/features/lex.prf:
cfgtest_QtDesigner.pro:
/home/amankaushik/Qt5.3.0/5.3/gcc_64/lib/libQt5Designer.prl:
/home/amankaushik/Qt5.3.0/5.3/gcc_64/lib/libQt5Widgets.prl:
/home/amankaushik/Qt5.3.0/5.3/gcc_64/lib/libQt5Gui.prl:
/home/amankaushik/Qt5.3.0/5.3/gcc_64/lib/libQt5Core.prl:
/home/amankaushik/Qt5.3.0/5.3/gcc_64/lib/libQt5Xml.prl:
qmake: FORCE
	@$(QMAKE) -o cfgtest_QtDesigner.mk cfgtest_QtDesigner.pro

qmake_all: FORCE

dist: 
	@test -d .tmp/cfgtest_QtDesigner1.0.0 || mkdir -p .tmp/cfgtest_QtDesigner1.0.0
	$(COPY_FILE) --parents $(DIST) .tmp/cfgtest_QtDesigner1.0.0/ && $(COPY_FILE) --parents cfgtest_QtDesigner.cpp .tmp/cfgtest_QtDesigner1.0.0/ && (cd `dirname .tmp/cfgtest_QtDesigner1.0.0` && $(TAR) cfgtest_QtDesigner1.0.0.tar cfgtest_QtDesigner1.0.0 && $(COMPRESS) cfgtest_QtDesigner1.0.0.tar) && $(MOVE) `dirname .tmp/cfgtest_QtDesigner1.0.0`/cfgtest_QtDesigner1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/cfgtest_QtDesigner1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


distclean: clean 
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) cfgtest_QtDesigner.mk


####### Sub-libraries

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

check: first

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_moc_header_make_all:
compiler_moc_header_clean:
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all:
compiler_uic_clean:
compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: 

####### Compile

cfgtest_QtDesigner.o: cfgtest_QtDesigner.cpp ../../../Qt5.3.0/5.3/gcc_64/include/QtDesigner/QExtensionFactory \
		../../../Qt5.3.0/5.3/gcc_64/include/QtDesigner/default_extensionfactory.h \
		../../../Qt5.3.0/5.3/gcc_64/include/QtDesigner/extension_global.h \
		../../../Qt5.3.0/5.3/gcc_64/include/QtCore/qglobal.h \
		../../../Qt5.3.0/5.3/gcc_64/include/QtCore/qconfig.h \
		../../../Qt5.3.0/5.3/gcc_64/include/QtCore/qfeatures.h \
		../../../Qt5.3.0/5.3/gcc_64/include/QtCore/qsystemdetection.h \
		../../../Qt5.3.0/5.3/gcc_64/include/QtCore/qprocessordetection.h \
		../../../Qt5.3.0/5.3/gcc_64/include/QtCore/qcompilerdetection.h \
		../../../Qt5.3.0/5.3/gcc_64/include/QtCore/qtypeinfo.h \
		../../../Qt5.3.0/5.3/gcc_64/include/QtCore/qtypetraits.h \
		../../../Qt5.3.0/5.3/gcc_64/include/QtCore/qsysinfo.h \
		../../../Qt5.3.0/5.3/gcc_64/include/QtCore/qlogging.h \
		../../../Qt5.3.0/5.3/gcc_64/include/QtCore/qflags.h \
		../../../Qt5.3.0/5.3/gcc_64/include/QtCore/qatomic.h \
		../../../Qt5.3.0/5.3/gcc_64/include/QtCore/qbasicatomic.h \
		../../../Qt5.3.0/5.3/gcc_64/include/QtCore/qatomic_bootstrap.h \
		../../../Qt5.3.0/5.3/gcc_64/include/QtCore/qgenericatomic.h \
		../../../Qt5.3.0/5.3/gcc_64/include/QtCore/qatomic_msvc.h \
		../../../Qt5.3.0/5.3/gcc_64/include/QtCore/qatomic_armv7.h \
		../../../Qt5.3.0/5.3/gcc_64/include/QtCore/qatomic_armv6.h \
		../../../Qt5.3.0/5.3/gcc_64/include/QtCore/qatomic_armv5.h \
		../../../Qt5.3.0/5.3/gcc_64/include/QtCore/qatomic_ia64.h \
		../../../Qt5.3.0/5.3/gcc_64/include/QtCore/qatomic_mips.h \
		../../../Qt5.3.0/5.3/gcc_64/include/QtCore/qatomic_x86.h \
		../../../Qt5.3.0/5.3/gcc_64/include/QtCore/qatomic_cxx11.h \
		../../../Qt5.3.0/5.3/gcc_64/include/QtCore/qatomic_gcc.h \
		../../../Qt5.3.0/5.3/gcc_64/include/QtCore/qatomic_unix.h \
		../../../Qt5.3.0/5.3/gcc_64/include/QtCore/qglobalstatic.h \
		../../../Qt5.3.0/5.3/gcc_64/include/QtCore/qmutex.h \
		../../../Qt5.3.0/5.3/gcc_64/include/QtCore/qnumeric.h \
		../../../Qt5.3.0/5.3/gcc_64/include/QtDesigner/extension.h \
		../../../Qt5.3.0/5.3/gcc_64/include/QtCore/QString \
		../../../Qt5.3.0/5.3/gcc_64/include/QtCore/qstring.h \
		../../../Qt5.3.0/5.3/gcc_64/include/QtCore/qchar.h \
		../../../Qt5.3.0/5.3/gcc_64/include/QtCore/qbytearray.h \
		../../../Qt5.3.0/5.3/gcc_64/include/QtCore/qrefcount.h \
		../../../Qt5.3.0/5.3/gcc_64/include/QtCore/qnamespace.h \
		../../../Qt5.3.0/5.3/gcc_64/include/QtCore/qarraydata.h \
		../../../Qt5.3.0/5.3/gcc_64/include/QtCore/qstringbuilder.h \
		../../../Qt5.3.0/5.3/gcc_64/include/QtCore/QObject \
		../../../Qt5.3.0/5.3/gcc_64/include/QtCore/qobject.h \
		../../../Qt5.3.0/5.3/gcc_64/include/QtCore/qobjectdefs.h \
		../../../Qt5.3.0/5.3/gcc_64/include/QtCore/qobjectdefs_impl.h \
		../../../Qt5.3.0/5.3/gcc_64/include/QtCore/qlist.h \
		../../../Qt5.3.0/5.3/gcc_64/include/QtCore/qalgorithms.h \
		../../../Qt5.3.0/5.3/gcc_64/include/QtCore/qiterator.h \
		../../../Qt5.3.0/5.3/gcc_64/include/QtCore/qcoreevent.h \
		../../../Qt5.3.0/5.3/gcc_64/include/QtCore/qscopedpointer.h \
		../../../Qt5.3.0/5.3/gcc_64/include/QtCore/qmetatype.h \
		../../../Qt5.3.0/5.3/gcc_64/include/QtCore/qvarlengtharray.h \
		../../../Qt5.3.0/5.3/gcc_64/include/QtCore/qcontainerfwd.h \
		../../../Qt5.3.0/5.3/gcc_64/include/QtCore/qisenum.h \
		../../../Qt5.3.0/5.3/gcc_64/include/QtCore/qobject_impl.h \
		../../../Qt5.3.0/5.3/gcc_64/include/QtCore/QMap \
		../../../Qt5.3.0/5.3/gcc_64/include/QtCore/qmap.h \
		../../../Qt5.3.0/5.3/gcc_64/include/QtCore/qpair.h \
		../../../Qt5.3.0/5.3/gcc_64/include/QtCore/qdebug.h \
		../../../Qt5.3.0/5.3/gcc_64/include/QtCore/qhash.h \
		../../../Qt5.3.0/5.3/gcc_64/include/QtCore/qtextstream.h \
		../../../Qt5.3.0/5.3/gcc_64/include/QtCore/qiodevice.h \
		../../../Qt5.3.0/5.3/gcc_64/include/QtCore/qlocale.h \
		../../../Qt5.3.0/5.3/gcc_64/include/QtCore/qvariant.h \
		../../../Qt5.3.0/5.3/gcc_64/include/QtCore/qstringlist.h \
		../../../Qt5.3.0/5.3/gcc_64/include/QtCore/qdatastream.h \
		../../../Qt5.3.0/5.3/gcc_64/include/QtCore/qregexp.h \
		../../../Qt5.3.0/5.3/gcc_64/include/QtCore/qstringmatcher.h \
		../../../Qt5.3.0/5.3/gcc_64/include/QtCore/qshareddata.h \
		../../../Qt5.3.0/5.3/gcc_64/include/QtCore/qvector.h \
		../../../Qt5.3.0/5.3/gcc_64/include/QtCore/qpoint.h \
		../../../Qt5.3.0/5.3/gcc_64/include/QtCore/qset.h \
		../../../Qt5.3.0/5.3/gcc_64/include/QtCore/qcontiguouscache.h \
		../../../Qt5.3.0/5.3/gcc_64/include/QtCore/QHash \
		../../../Qt5.3.0/5.3/gcc_64/include/QtCore/QPair
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o cfgtest_QtDesigner.o cfgtest_QtDesigner.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

