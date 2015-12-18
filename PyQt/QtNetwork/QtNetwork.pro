TEMPLATE = lib
CONFIG += warn_on plugin
QT -= gui
QT += network
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtNetwork.pyd
    target.files = QtNetwork.pyd
    LIBS += -L -lpython3.4m
} else {
    PY_MODULE = QtNetwork.so
    target.files = QtNetwork.so
}

target.CONFIG = no_check_exist
target.path = /home/amankaushik/pyProjects/newsnotify/env/lib/python3.4/site-packages/PyQt5
INSTALLS += target
sip.path = /home/amankaushik/pyProjects/newsnotify/env/share/sip/PyQt5/QtNetwork
sip.files = ../sip/QtNetwork/qssl.sip ../sip/QtNetwork/qtcpsocket.sip ../sip/QtNetwork/qhostinfo.sip ../sip/QtNetwork/qnetworkproxy.sip ../sip/QtNetwork/qsslcertificateextension.sip ../sip/QtNetwork/qpynetwork_qhash.sip ../sip/QtNetwork/qnetworkrequest.sip ../sip/QtNetwork/qabstractsocket.sip ../sip/QtNetwork/qnetworksession.sip ../sip/QtNetwork/qnetworkcookiejar.sip ../sip/QtNetwork/qsslerror.sip ../sip/QtNetwork/qsslcipher.sip ../sip/QtNetwork/qnetworkaccessmanager.sip ../sip/QtNetwork/qnetworkdiskcache.sip ../sip/QtNetwork/qdnslookup.sip ../sip/QtNetwork/qsslpresharedkeyauthenticator.sip ../sip/QtNetwork/qlocalsocket.sip ../sip/QtNetwork/qnetworkcookie.sip ../sip/QtNetwork/qsslsocket.sip ../sip/QtNetwork/QtNetworkmod.sip ../sip/QtNetwork/qudpsocket.sip ../sip/QtNetwork/qsslkey.sip ../sip/QtNetwork/qnetworkconfiguration.sip ../sip/QtNetwork/qhostaddress.sip ../sip/QtNetwork/qsslconfiguration.sip ../sip/QtNetwork/qtcpserver.sip ../sip/QtNetwork/qnetworkreply.sip ../sip/QtNetwork/qsslcertificate.sip ../sip/QtNetwork/qauthenticator.sip ../sip/QtNetwork/qnetworkinterface.sip ../sip/QtNetwork/qsslellipticcurve.sip ../sip/QtNetwork/qabstractnetworkcache.sip ../sip/QtNetwork/qlocalserver.sip ../sip/QtNetwork/qnetworkconfigmanager.sip ../sip/QtNetwork/qhttpmultipart.sip ../sip/QtNetwork/qpynetwork_qmap.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtNetwork.exp
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

TARGET = QtNetwork
HEADERS = sipAPIQtNetwork.h
SOURCES = sipQtNetworkQSslSocket.cpp sipQtNetworkQNetworkDiskCache.cpp sipQtNetworkQAbstractSocketPauseModes.cpp sipQtNetworkQList0100QDnsServiceRecord.cpp sipQtNetworkQList0100QSslCipher.cpp sipQtNetworkcmodule.cpp sipQtNetworkQList0100QNetworkProxy.cpp sipQtNetworkQNetworkProxyCapabilities.cpp sipQtNetworkQNetworkReply.cpp sipQtNetworkQUdpSocket.cpp sipQtNetworkQList0100QNetworkAddressEntry.cpp sipQtNetworkQNetworkRequest.cpp sipQtNetworkQSslCertificateExtension.cpp sipQtNetworkQNetworkCookie.cpp sipQtNetworkQList0100QDnsTextRecord.cpp sipQtNetworkQSslKey.cpp sipQtNetworkQList0100QDnsMailExchangeRecord.cpp sipQtNetworkQNetworkConfigurationStateFlags.cpp sipQtNetworkQAuthenticator.cpp sipQtNetworkQHostAddress.cpp sipQtNetworkQSslConfiguration.cpp sipQtNetworkQPair0100QHostAddress1800.cpp sipQtNetworkQList0100QHostAddress.cpp sipQtNetworkQDnsHostAddressRecord.cpp sipQtNetworkQList0100QNetworkInterface.cpp sipQtNetworkQList0100QSslCertificate.cpp sipQtNetworkQSslSslOptions.cpp sipQtNetworkQTcpServer.cpp sipQtNetworkQAbstractSocketBindMode.cpp sipQtNetworkQList0100QNetworkConfiguration.cpp sipQtNetworkQNetworkAddressEntry.cpp sipQtNetworkQHttpMultiPart.cpp sipQtNetworkQSsl.cpp sipQtNetworkQSslCertificate.cpp sipQtNetworkQNetworkConfigurationManager.cpp sipQtNetworkQNetworkInterface.cpp sipQtNetworkQLocalServerSocketOptions.cpp sipQtNetworkQSslCipher.cpp sipQtNetworkQList0100QNetworkCookie.cpp sipQtNetworkQNetworkInterfaceInterfaceFlags.cpp sipQtNetworkQDnsMailExchangeRecord.cpp sipQtNetworkQList0100QSslError.cpp sipQtNetworkQNetworkConfigurationManagerCapabilities.cpp sipQtNetworkQNetworkProxyQuery.cpp sipQtNetworkQTcpSocket.cpp sipQtNetworkQAbstractNetworkCache.cpp sipQtNetworkQNetworkAccessManager.cpp sipQtNetworkQNetworkSessionUsagePolicies.cpp sipQtNetworkQList0100QDnsDomainNameRecord.cpp sipQtNetworkQDnsServiceRecord.cpp sipQtNetworkQDnsTextRecord.cpp sipQtNetworkQHostInfo.cpp sipQtNetworkQNetworkProxy.cpp sipQtNetworkQMultiMap0100QSslAlternativeNameEntryType0100QString.cpp sipQtNetworkQ_IPV6ADDR.cpp sipQtNetworkQNetworkSession.cpp sipQtNetworkQNetworkCookieJar.cpp sipQtNetworkQDnsDomainNameRecord.cpp sipQtNetworkQList0100QSslCertificateExtension.cpp sipQtNetworkQAbstractSocket.cpp sipQtNetworkQNetworkConfiguration.cpp sipQtNetworkQDnsLookup.cpp sipQtNetworkQLocalSocket.cpp sipQtNetworkQLocalServer.cpp sipQtNetworkQList0100QDnsHostAddressRecord.cpp sipQtNetworkQHash0100QNetworkRequestAttribute0100QVariant.cpp sipQtNetworkQNetworkProxyFactory.cpp sipQtNetworkQSslError.cpp sipQtNetworkQNetworkCacheMetaData.cpp sipQtNetworkQList0600QPair0100QByteArray0100QByteArray.cpp sipQtNetworkQHttpPart.cpp
