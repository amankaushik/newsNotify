TEMPLATE = lib
CONFIG += warn_on plugin
QT -= gui
QT += xmlpatterns network
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtXmlPatterns.pyd
    target.files = QtXmlPatterns.pyd
    LIBS += -L -lpython3.4m
} else {
    PY_MODULE = QtXmlPatterns.so
    target.files = QtXmlPatterns.so
}

target.CONFIG = no_check_exist
target.path = /home/amankaushik/pyProjects/newsnotify/env/lib/python3.4/site-packages/PyQt5
INSTALLS += target
sip.path = /home/amankaushik/pyProjects/newsnotify/env/share/sip/PyQt5/QtXmlPatterns
sip.files = ../sip/QtXmlPatterns/qsourcelocation.sip ../sip/QtXmlPatterns/qxmlresultitems.sip ../sip/QtXmlPatterns/qabstracturiresolver.sip ../sip/QtXmlPatterns/qxmlserializer.sip ../sip/QtXmlPatterns/qxmlformatter.sip ../sip/QtXmlPatterns/qxmlname.sip ../sip/QtXmlPatterns/qxmlschemavalidator.sip ../sip/QtXmlPatterns/qxmlnamepool.sip ../sip/QtXmlPatterns/qabstractxmlnodemodel.sip ../sip/QtXmlPatterns/qabstractmessagehandler.sip ../sip/QtXmlPatterns/qsimplexmlnodemodel.sip ../sip/QtXmlPatterns/qxmlschema.sip ../sip/QtXmlPatterns/qxmlquery.sip ../sip/QtXmlPatterns/qabstractxmlreceiver.sip ../sip/QtXmlPatterns/QtXmlPatternsmod.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtXmlPatterns.exp
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

TARGET = QtXmlPatterns
HEADERS = sipAPIQtXmlPatterns.h
SOURCES = sipQtXmlPatternsQXmlName.cpp sipQtXmlPatternsQXmlItem.cpp sipQtXmlPatternsQXmlResultItems.cpp sipQtXmlPatternsQAbstractUriResolver.cpp sipQtXmlPatternsQXmlNamePool.cpp sipQtXmlPatternsQAbstractXmlNodeModel.cpp sipQtXmlPatternscmodule.cpp sipQtXmlPatternsQSourceLocation.cpp sipQtXmlPatternsQSimpleXmlNodeModel.cpp sipQtXmlPatternsQAbstractXmlReceiver.cpp sipQtXmlPatternsQXmlQuery.cpp sipQtXmlPatternsQXmlFormatter.cpp sipQtXmlPatternsQXmlNodeModelIndex.cpp sipQtXmlPatternsQAbstractMessageHandler.cpp sipQtXmlPatternsQXmlSchemaValidator.cpp sipQtXmlPatternsQXmlSchema.cpp sipQtXmlPatternsQVector0100QXmlName.cpp sipQtXmlPatternsQVector0100QXmlNodeModelIndex.cpp sipQtXmlPatternsQXmlSerializer.cpp
