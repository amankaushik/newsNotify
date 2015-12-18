TEMPLATE = lib
CONFIG += warn_on plugin
QT += webkit network
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtWebKit.pyd
    target.files = QtWebKit.pyd
    LIBS += -L -lpython3.4m
} else {
    PY_MODULE = QtWebKit.so
    target.files = QtWebKit.so
}

target.CONFIG = no_check_exist
target.path = /home/amankaushik/pyProjects/newsnotify/env/lib/python3.4/site-packages/PyQt5
INSTALLS += target
sip.path = /home/amankaushik/pyProjects/newsnotify/env/share/sip/PyQt5/QtWebKit
sip.files = ../sip/QtWebKit/qwebhistory.sip ../sip/QtWebKit/qwebelement.sip ../sip/QtWebKit/qwebsecurityorigin.sip ../sip/QtWebKit/QtWebKitmod.sip ../sip/QtWebKit/qwebkitglobal.sip ../sip/QtWebKit/qwebsettings.sip ../sip/QtWebKit/qwebhistoryinterface.sip ../sip/QtWebKit/qwebpluginfactory.sip ../sip/QtWebKit/qwebdatabase.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtWebKit.exp
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

TARGET = QtWebKit
HEADERS = sipAPIQtWebKit.h
SOURCES = sipQtWebKitQWebHistoryItem.cpp sipQtWebKitcmodule.cpp sipQtWebKitQWebPluginFactory.cpp sipQtWebKitQWebPluginFactoryExtensionReturn.cpp sipQtWebKitQWebElement.cpp sipQtWebKitQWebPluginFactoryPlugin.cpp sipQtWebKitQList0100QWebDatabase.cpp sipQtWebKitQList0100QWebHistoryItem.cpp sipQtWebKitQWebHistory.cpp sipQtWebKitQWebSettings.cpp sipQtWebKitQList0100QWebElement.cpp sipQtWebKitQWebDatabase.cpp sipQtWebKitQWebPluginFactoryExtensionOption.cpp sipQtWebKitQWebPluginFactoryMimeType.cpp sipQtWebKitQWebElementCollection.cpp sipQtWebKitQWebSecurityOrigin.cpp sipQtWebKitQList0100QWebPluginFactoryMimeType.cpp sipQtWebKitQWebHistoryInterface.cpp sipQtWebKitQList0100QWebSecurityOrigin.cpp sipQtWebKitQList0100QWebPluginFactoryPlugin.cpp
