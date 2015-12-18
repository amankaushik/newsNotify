TEMPLATE = lib
CONFIG += warn_on plugin
QT += webkitwidgets printsupport
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtWebKitWidgets.pyd
    target.files = QtWebKitWidgets.pyd
    LIBS += -L -lpython3.4m
} else {
    PY_MODULE = QtWebKitWidgets.so
    target.files = QtWebKitWidgets.so
}

target.CONFIG = no_check_exist
target.path = /home/amankaushik/pyProjects/newsnotify/env/lib/python3.4/site-packages/PyQt5
INSTALLS += target
sip.path = /home/amankaushik/pyProjects/newsnotify/env/share/sip/PyQt5/QtWebKitWidgets
sip.files = ../sip/QtWebKitWidgets/QtWebKitWidgetsmod.sip ../sip/QtWebKitWidgets/qgraphicswebview.sip ../sip/QtWebKitWidgets/qwebinspector.sip ../sip/QtWebKitWidgets/qwebframe.sip ../sip/QtWebKitWidgets/qwebpage.sip ../sip/QtWebKitWidgets/qwebview.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtWebKitWidgets.exp
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

TARGET = QtWebKitWidgets
HEADERS = sipAPIQtWebKitWidgets.h
SOURCES = sipQtWebKitWidgetsQGraphicsWebView.cpp sipQtWebKitWidgetsQList0101QWebFrame.cpp sipQtWebKitWidgetsQWebFrame.cpp sipQtWebKitWidgetsQWebHitTestResult.cpp sipQtWebKitWidgetsQWebView.cpp sipQtWebKitWidgetsQWebPageErrorPageExtensionOption.cpp sipQtWebKitWidgetscmodule.cpp sipQtWebKitWidgetsQWebInspector.cpp sipQtWebKitWidgetsQWebPageFindFlags.cpp sipQtWebKitWidgetsQWebPageViewportAttributes.cpp sipQtWebKitWidgetsQWebPageExtensionReturn.cpp sipQtWebKitWidgetsQWebPageChooseMultipleFilesExtensionReturn.cpp sipQtWebKitWidgetsQWebPage.cpp sipQtWebKitWidgetsQWebPageErrorPageExtensionReturn.cpp sipQtWebKitWidgetsQWebFrameRenderLayers.cpp sipQtWebKitWidgetsQMultiMap0100QString0100QString.cpp sipQtWebKitWidgetsQWebPageChooseMultipleFilesExtensionOption.cpp sipQtWebKitWidgetsQWebPageExtensionOption.cpp
