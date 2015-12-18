TEMPLATE = lib
CONFIG += warn_on plugin
QT += testlib widgets
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtTest.pyd
    target.files = QtTest.pyd
    LIBS += -L -lpython3.4m
} else {
    PY_MODULE = QtTest.so
    target.files = QtTest.so
}

target.CONFIG = no_check_exist
target.path = /home/amankaushik/pyProjects/newsnotify/env/lib/python3.4/site-packages/PyQt5
INSTALLS += target
sip.path = /home/amankaushik/pyProjects/newsnotify/env/share/sip/PyQt5/QtTest
sip.files = ../sip/QtTest/qsignalspy.sip ../sip/QtTest/qtestsystem.sip ../sip/QtTest/qtestkeyboard.sip ../sip/QtTest/qtestcase.sip ../sip/QtTest/qtesttouch.sip ../sip/QtTest/qtestmouse.sip ../sip/QtTest/QtTestmod.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtTest.exp
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

TARGET = QtTest
HEADERS = sipAPIQtTest.h
SOURCES = sipQtTestQTest.cpp sipQtTestQSignalSpy.cpp sipQtTestcmodule.cpp sipQtTestQTestQTouchEventSequence.cpp
