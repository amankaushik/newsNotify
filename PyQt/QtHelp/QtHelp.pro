TEMPLATE = lib
CONFIG += warn_on plugin
QT += help
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtHelp.pyd
    target.files = QtHelp.pyd
    LIBS += -L -lpython3.4m
} else {
    PY_MODULE = QtHelp.so
    target.files = QtHelp.so
}

target.CONFIG = no_check_exist
target.path = /home/amankaushik/pyProjects/newsnotify/env/lib/python3.4/site-packages/PyQt5
INSTALLS += target
sip.path = /home/amankaushik/pyProjects/newsnotify/env/share/sip/PyQt5/QtHelp
sip.files = ../sip/QtHelp/qhelpsearchengine.sip ../sip/QtHelp/qhelpcontentwidget.sip ../sip/QtHelp/qhelpindexwidget.sip ../sip/QtHelp/qhelpsearchquerywidget.sip ../sip/QtHelp/qhelpenginecore.sip ../sip/QtHelp/QtHelpmod.sip ../sip/QtHelp/qhelpengine.sip ../sip/QtHelp/qhelpsearchresultwidget.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtHelp.exp
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

TARGET = QtHelp
HEADERS = sipAPIQtHelp.h
SOURCES = sipQtHelpQHelpEngineCore.cpp sipQtHelpQHelpIndexWidget.cpp sipQtHelpQHelpSearchEngine.cpp sipQtHelpQHelpSearchResultWidget.cpp sipQtHelpQHelpSearchQueryWidget.cpp sipQtHelpQHelpContentWidget.cpp sipQtHelpQHelpEngine.cpp sipQtHelpQHelpSearchQuery.cpp sipQtHelpQHelpContentModel.cpp sipQtHelpQList0100QHelpSearchQuery.cpp sipQtHelpcmodule.cpp sipQtHelpQMap0100QString0100QUrl.cpp sipQtHelpQHelpContentItem.cpp sipQtHelpQList0100QStringList.cpp sipQtHelpQHelpIndexModel.cpp
