TEMPLATE = lib
CONFIG += warn_on plugin
QT += qml
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtQml.pyd
    target.files = QtQml.pyd
    LIBS += -L -lpython3.4m
} else {
    PY_MODULE = QtQml.so
    target.files = QtQml.so
}

target.CONFIG = no_check_exist
target.path = /home/amankaushik/pyProjects/newsnotify/env/lib/python3.4/site-packages/PyQt5
INSTALLS += target
sip.path = /home/amankaushik/pyProjects/newsnotify/env/share/sip/PyQt5/QtQml
sip.files = ../sip/QtQml/qqmlengine.sip ../sip/QtQml/qmlattachedpropertiesobject.sip ../sip/QtQml/qqmlexpression.sip ../sip/QtQml/qqmlcontext.sip ../sip/QtQml/qmlregistertype.sip ../sip/QtQml/qqmlnetworkaccessmanagerfactory.sip ../sip/QtQml/qqmlfileselector.sip ../sip/QtQml/qqmlincubator.sip ../sip/QtQml/qqmlerror.sip ../sip/QtQml/qqmlpropertyvaluesource.sip ../sip/QtQml/qqmlapplicationengine.sip ../sip/QtQml/qpyqmllistproperty.sip ../sip/QtQml/qqmlpropertymap.sip ../sip/QtQml/QtQmlmod.sip ../sip/QtQml/qqmlextensionplugin.sip ../sip/QtQml/qjsvalue.sip ../sip/QtQml/qqmlabstracturlinterceptor.sip ../sip/QtQml/qqmlscriptstring.sip ../sip/QtQml/qqmlproperty.sip ../sip/QtQml/qqmlcomponent.sip ../sip/QtQml/qqmlparserstatus.sip ../sip/QtQml/qjsengine.sip ../sip/QtQml/qjsvalueiterator.sip ../sip/QtQml/qqmllist.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtQml.exp
DEFINES += SIP_PROTECTED_IS_PUBLIC protected=public
INCLUDEPATH += .
INCLUDEPATH += /home/amankaushik/pyProjects/newsnotify/sip/siplib
INCLUDEPATH += /usr/include/python3.4m
INCLUDEPATH += ../qpy/QtQml

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

TARGET = QtQml
HEADERS = sipAPIQtQml.h ../qpy/QtQml/qpyqmllistpropertywrapper.h ../qpy/QtQml/qpyqml_listdata.h ../qpy/QtQml/qpyqml_api.h ../qpy/QtQml/qpyqmlsingletonobject.h ../qpy/QtQml/qpyqmllistproperty.h ../qpy/QtQml/qpyqmlobject.h
SOURCES = sipQtQmlQQmlEngine.cpp sipQtQmlQQmlComponent.cpp sipQtQmlQQmlScriptString.cpp sipQtQmlQQmlPropertyMap.cpp sipQtQmlQQmlContext.cpp sipQtQmlQQmlAbstractUrlInterceptor.cpp sipQtQmlQQmlListProperty0100QObject.cpp sipQtQmlQList0100QQmlError.cpp sipQtQmlQList0100QQmlProperty.cpp sipQtQmlQQmlImageProviderBaseFlags.cpp sipQtQmlQJSValueIterator.cpp sipQtQmlQQmlNetworkAccessManagerFactory.cpp sipQtQmlQQmlIncubator.cpp sipQtQmlQQmlImageProviderBase.cpp sipQtQmlQQmlListReference.cpp sipQtQmlQQmlApplicationEngine.cpp sipQtQmlQQmlIncubationController.cpp sipQtQmlQQmlExtensionPlugin.cpp sipQtQmlcmodule.cpp sipQtQmlQQmlExpression.cpp sipQtQmlQJSValue.cpp sipQtQmlQList0100QJSValue.cpp sipQtQmlQJSEngine.cpp sipQtQmlQQmlProperty.cpp sipQtQmlQQmlFileSelector.cpp sipQtQmlQQmlParserStatus.cpp sipQtQmlQQmlError.cpp sipQtQmlQQmlPropertyValueSource.cpp ../qpy/QtQml/qpyqml_qjsvalue.cpp ../qpy/QtQml/qpyqml_post_init.cpp ../qpy/QtQml/qpyqmlsingletonobject.cpp ../qpy/QtQml/qpyqmlobject.cpp ../qpy/QtQml/qpyqml_register_type.cpp ../qpy/QtQml/qpyqmllistproperty.cpp ../qpy/QtQml/qpyqmllistpropertywrapper.cpp ../qpy/QtQml/qpyqml_register_singleton_type.cpp ../qpy/QtQml/qpyqml_listdata.cpp
