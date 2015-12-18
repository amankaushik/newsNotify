TEMPLATE = lib
CONFIG += warn_on plugin
QT += bluetooth
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtBluetooth.pyd
    target.files = QtBluetooth.pyd
    LIBS += -L -lpython3.4m
} else {
    PY_MODULE = QtBluetooth.so
    target.files = QtBluetooth.so
}

target.CONFIG = no_check_exist
target.path = /home/amankaushik/pyProjects/newsnotify/env/lib/python3.4/site-packages/PyQt5
INSTALLS += target
sip.path = /home/amankaushik/pyProjects/newsnotify/env/share/sip/PyQt5/QtBluetooth
sip.files = ../sip/QtBluetooth/qlowenergydescriptor.sip ../sip/QtBluetooth/qbluetoothhostinfo.sip ../sip/QtBluetooth/qlowenergycharacteristic.sip ../sip/QtBluetooth/qbluetoothserviceinfo.sip ../sip/QtBluetooth/qbluetoothservicediscoveryagent.sip ../sip/QtBluetooth/qbluetoothsocket.sip ../sip/QtBluetooth/qbluetoothdeviceinfo.sip ../sip/QtBluetooth/qlowenergyservice.sip ../sip/QtBluetooth/qlowenergycontroller.sip ../sip/QtBluetooth/qbluetoothserver.sip ../sip/QtBluetooth/qbluetoothdevicediscoveryagent.sip ../sip/QtBluetooth/qpybluetooth_qlist.sip ../sip/QtBluetooth/qpybluetooth_quint128.sip ../sip/QtBluetooth/QtBluetoothmod.sip ../sip/QtBluetooth/qbluetoothtransfermanager.sip ../sip/QtBluetooth/qbluetooth.sip ../sip/QtBluetooth/qbluetoothlocaldevice.sip ../sip/QtBluetooth/qbluetoothuuid.sip ../sip/QtBluetooth/qbluetoothtransferreply.sip ../sip/QtBluetooth/qbluetoothtransferrequest.sip ../sip/QtBluetooth/qbluetoothaddress.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtBluetooth.exp
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

TARGET = QtBluetooth
HEADERS = sipAPIQtBluetooth.h
SOURCES = sipQtBluetoothQBluetoothServiceInfoSequence.cpp sipQtBluetoothquint128.cpp sipQtBluetoothQBluetoothDeviceInfo.cpp sipQtBluetoothQList0100QBluetoothServiceInfo.cpp sipQtBluetoothQList0100QBluetoothUuid.cpp sipQtBluetoothQBluetoothUuid.cpp sipQtBluetoothQBluetoothServiceDiscoveryAgent.cpp sipQtBluetoothQBluetoothTransferManager.cpp sipQtBluetoothQList0100QBluetoothHostInfo.cpp sipQtBluetoothQBluetoothDeviceDiscoveryAgent.cpp sipQtBluetoothQBluetoothTransferReply.cpp sipQtBluetoothQBluetooth.cpp sipQtBluetoothcmodule.cpp sipQtBluetoothQList0100QBluetoothAddress.cpp sipQtBluetoothQBluetoothTransferRequest.cpp sipQtBluetoothQBluetoothSecurityFlags.cpp sipQtBluetoothQBluetoothDeviceInfoServiceClasses.cpp sipQtBluetoothQBluetoothHostInfo.cpp sipQtBluetoothQBluetoothAddress.cpp sipQtBluetoothQBluetoothSocket.cpp sipQtBluetoothQList0100QBluetoothDeviceInfo.cpp sipQtBluetoothQBluetoothLocalDevice.cpp sipQtBluetoothQList1600.cpp sipQtBluetoothQBluetoothServer.cpp sipQtBluetoothQBluetoothServiceInfo.cpp
