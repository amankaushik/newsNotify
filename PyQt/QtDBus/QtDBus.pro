TEMPLATE = lib
CONFIG += warn_on plugin
QT -= gui
QT += dbus
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtDBus.pyd
    target.files = QtDBus.pyd
    LIBS += -L -lpython3.4m
} else {
    PY_MODULE = QtDBus.so
    target.files = QtDBus.so
}

target.CONFIG = no_check_exist
target.path = /home/amankaushik/pyProjects/newsnotify/env/lib/python3.4/site-packages/PyQt5
INSTALLS += target
sip.path = /home/amankaushik/pyProjects/newsnotify/env/share/sip/PyQt5/QtDBus
sip.files = ../sip/QtDBus/QtDBusmod.sip ../sip/QtDBus/qdbusinterface.sip ../sip/QtDBus/qdbusmessage.sip ../sip/QtDBus/qpydbusreply.sip ../sip/QtDBus/qdbusservicewatcher.sip ../sip/QtDBus/qdbuserror.sip ../sip/QtDBus/qdbusargument.sip ../sip/QtDBus/qdbusextratypes.sip ../sip/QtDBus/qdbuspendingcall.sip ../sip/QtDBus/qdbusconnectioninterface.sip ../sip/QtDBus/qdbusabstractinterface.sip ../sip/QtDBus/qdbusconnection.sip ../sip/QtDBus/qdbusabstractadaptor.sip ../sip/QtDBus/qpydbuspendingreply.sip ../sip/QtDBus/qdbusunixfiledescriptor.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtDBus.exp
DEFINES += SIP_PROTECTED_IS_PUBLIC protected=public
INCLUDEPATH += .
INCLUDEPATH += /home/amankaushik/pyProjects/newsnotify/sip/siplib
INCLUDEPATH += /usr/include/python3.4m
INCLUDEPATH += ../qpy/QtDBus

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

TARGET = QtDBus
HEADERS = sipAPIQtDBus.h ../qpy/QtDBus/qpydbus_api.h ../qpy/QtDBus/qpydbuspendingreply.h ../qpy/QtDBus/qpydbusreply.h ../qpy/QtDBus/qpydbus_chimera_helpers.h
SOURCES = sipQtDBusQDBusReply0100QDBusConnectionInterfaceRegisterServiceReply.cpp sipQtDBusQDBusReply1900.cpp sipQtDBusQDBusConnection.cpp sipQtDBuscmodule.cpp sipQtDBusQDBusServiceWatcher.cpp sipQtDBusQDBus.cpp sipQtDBusQDBusInterface.cpp sipQtDBusQDBusArgument.cpp sipQtDBusQDBusMessage.cpp sipQtDBusQDBusReply0400.cpp sipQtDBusQDBusSignature.cpp sipQtDBusQDBusUnixFileDescriptor.cpp sipQtDBusQDBusVariant.cpp sipQtDBusQDBusPendingCallWatcher.cpp sipQtDBusQDBusAbstractInterface.cpp sipQtDBusQDBusReply2600.cpp sipQtDBusQDBusObjectPath.cpp sipQtDBusQPyDBusPendingReply.cpp sipQtDBusQDBusServiceWatcherWatchMode.cpp sipQtDBusQDBusPendingCall.cpp sipQtDBusQDBusConnectionInterface.cpp sipQtDBusQDBusReply0100QString.cpp sipQtDBusQPyDBusReply.cpp sipQtDBusQDBusConnectionConnectionCapabilities.cpp sipQtDBusQDBusConnectionRegisterOptions.cpp sipQtDBusQDBusAbstractAdaptor.cpp sipQtDBusQDBusError.cpp sipQtDBusQDBusReply0100QStringList.cpp ../qpy/QtDBus/qpydbus_post_init.cpp ../qpy/QtDBus/qpydbuspendingreply.cpp ../qpy/QtDBus/qpydbus_chimera_helpers.cpp ../qpy/QtDBus/qpydbusreply.cpp
