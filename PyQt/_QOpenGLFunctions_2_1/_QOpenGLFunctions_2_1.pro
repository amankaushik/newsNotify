TEMPLATE = lib
CONFIG += warn_on plugin
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = _QOpenGLFunctions_2_1.pyd
    target.files = _QOpenGLFunctions_2_1.pyd
    LIBS += -L -lpython3.4m
} else {
    PY_MODULE = _QOpenGLFunctions_2_1.so
    target.files = _QOpenGLFunctions_2_1.so
}

target.CONFIG = no_check_exist
target.path = /home/amankaushik/pyProjects/newsnotify/env/lib/python3.4/site-packages/PyQt5
INSTALLS += target
sip.path = /home/amankaushik/pyProjects/newsnotify/env/share/sip/PyQt5/_QOpenGLFunctions_2_1
sip.files = ../sip/_QOpenGLFunctions_2_1/qopenglfunctions_2_1.sip ../sip/_QOpenGLFunctions_2_1/_QOpenGLFunctions_2_1mod.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=_QOpenGLFunctions_2_1.exp
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

TARGET = _QOpenGLFunctions_2_1
HEADERS = sipAPI_QOpenGLFunctions_2_1.h
SOURCES = sip_QOpenGLFunctions_2_1cmodule.cpp sip_QOpenGLFunctions_2_1QOpenGLFunctions_2_1.cpp
