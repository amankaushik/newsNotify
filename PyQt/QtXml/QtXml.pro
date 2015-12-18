TEMPLATE = lib
CONFIG += warn_on plugin
QT -= gui
QT += xml
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtXml.pyd
    target.files = QtXml.pyd
    LIBS += -L -lpython3.4m
} else {
    PY_MODULE = QtXml.so
    target.files = QtXml.so
}

target.CONFIG = no_check_exist
target.path = /home/amankaushik/pyProjects/newsnotify/env/lib/python3.4/site-packages/PyQt5
INSTALLS += target
sip.path = /home/amankaushik/pyProjects/newsnotify/env/share/sip/PyQt5/QtXml
sip.files = ../sip/QtXml/QtXmlmod.sip ../sip/QtXml/qdom.sip ../sip/QtXml/qxml.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtXml.exp
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

TARGET = QtXml
HEADERS = sipAPIQtXml.h
SOURCES = sipQtXmlQXmlEntityResolver.cpp sipQtXmlQXmlLexicalHandler.cpp sipQtXmlQDomCharacterData.cpp sipQtXmlQXmlSimpleReader.cpp sipQtXmlQDomDocument.cpp sipQtXmlQXmlAttributes.cpp sipQtXmlQXmlInputSource.cpp sipQtXmlQDomElement.cpp sipQtXmlQDomProcessingInstruction.cpp sipQtXmlQDomDocumentFragment.cpp sipQtXmlQXmlErrorHandler.cpp sipQtXmlQXmlNamespaceSupport.cpp sipQtXmlQXmlParseException.cpp sipQtXmlQXmlContentHandler.cpp sipQtXmlQDomNamedNodeMap.cpp sipQtXmlQDomImplementation.cpp sipQtXmlQDomEntity.cpp sipQtXmlQDomNotation.cpp sipQtXmlQXmlDeclHandler.cpp sipQtXmlQDomComment.cpp sipQtXmlQXmlDefaultHandler.cpp sipQtXmlQDomDocumentType.cpp sipQtXmlQDomEntityReference.cpp sipQtXmlQXmlReader.cpp sipQtXmlQXmlLocator.cpp sipQtXmlcmodule.cpp sipQtXmlQDomCDATASection.cpp sipQtXmlQDomAttr.cpp sipQtXmlQDomNodeList.cpp sipQtXmlQDomNode.cpp sipQtXmlQXmlDTDHandler.cpp sipQtXmlQDomText.cpp
