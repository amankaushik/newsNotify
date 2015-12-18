TEMPLATE = lib
CONFIG += warn_on plugin
QT += opengl
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtOpenGL.pyd
    target.files = QtOpenGL.pyd
    LIBS += -L -lpython3.4m
} else {
    PY_MODULE = QtOpenGL.so
    target.files = QtOpenGL.so
}

target.CONFIG = no_check_exist
target.path = /home/amankaushik/pyProjects/newsnotify/env/lib/python3.4/site-packages/PyQt5
INSTALLS += target
sip.path = /home/amankaushik/pyProjects/newsnotify/env/share/sip/PyQt5/QtOpenGL
sip.files = ../sip/QtOpenGL/QtOpenGLmod.sip ../sip/QtOpenGL/qgl.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtOpenGL.exp
DEFINES += SIP_PROTECTED_IS_PUBLIC protected=public
INCLUDEPATH += .
INCLUDEPATH += /home/amankaushik/pyProjects/newsnotify/sip/siplib
INCLUDEPATH += /usr/include/python3.4m

win32 {
    QMAKE_POST_LINK = $(COPY_FILE) $(DESTDIR_TARGET) $$PY_MODULE
} else {
    QMAKE_POST_LINK = $(COPY_FILE) $(TARGET) $$PY_MODULE
}
macx {
    QMAKE_LFLAGS += "-undefined dynamic_lookup"
    QMAKE_LFLAGS += "-install_name $$absolute_path($$PY_MODULE, $$target.path)"

    greaterThan(QT_MINOR_VERSION, 4) {
        QMAKE_RPATHDIR += $$[QT_INSTALL_LIBS]
    }
}

TARGET = QtOpenGL
HEADERS = sipAPIQtOpenGL.h
SOURCES = sipQtOpenGLQGLWidget.cpp sipQtOpenGLcmodule.cpp sipQtOpenGLQGLFormatOptions.cpp sipQtOpenGLQGLFormatOpenGLVersionFlags.cpp sipQtOpenGLQGL.cpp sipQtOpenGLQGLContextBindOptions.cpp sipQtOpenGLQGLFormat.cpp sipQtOpenGLQGLContext.cpp
