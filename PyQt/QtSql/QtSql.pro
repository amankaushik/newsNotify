TEMPLATE = lib
CONFIG += warn_on plugin
QT += sql widgets
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtSql.pyd
    target.files = QtSql.pyd
    LIBS += -L -lpython3.4m
} else {
    PY_MODULE = QtSql.so
    target.files = QtSql.so
}

target.CONFIG = no_check_exist
target.path = /home/amankaushik/pyProjects/newsnotify/env/lib/python3.4/site-packages/PyQt5
INSTALLS += target
sip.path = /home/amankaushik/pyProjects/newsnotify/env/share/sip/PyQt5/QtSql
sip.files = ../sip/QtSql/qsqldatabase.sip ../sip/QtSql/qsqlrelationaldelegate.sip ../sip/QtSql/qsqlfield.sip ../sip/QtSql/QtSqlmod.sip ../sip/QtSql/qsqlrecord.sip ../sip/QtSql/qsqldriver.sip ../sip/QtSql/qsql.sip ../sip/QtSql/qsqlrelationaltablemodel.sip ../sip/QtSql/qsqlquery.sip ../sip/QtSql/qsqlerror.sip ../sip/QtSql/qsqltablemodel.sip ../sip/QtSql/qsqlquerymodel.sip ../sip/QtSql/qsqlindex.sip ../sip/QtSql/qsqlresult.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtSql.exp
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

TARGET = QtSql
HEADERS = sipAPIQtSql.h
SOURCES = sipQtSqlQSqlParamType.cpp sipQtSqlQSqlRelationalDelegate.cpp sipQtSqlQSqlResult.cpp sipQtSqlQSqlTableModel.cpp sipQtSqlQSqlDatabase.cpp sipQtSqlcmodule.cpp sipQtSqlQSqlQueryModel.cpp sipQtSqlQSqlRelation.cpp sipQtSqlQSqlRecord.cpp sipQtSqlQSql.cpp sipQtSqlQSqlDriver.cpp sipQtSqlQSqlError.cpp sipQtSqlQVector0100QVariant.cpp sipQtSqlQSqlField.cpp sipQtSqlQSqlIndex.cpp sipQtSqlQSqlRelationalTableModel.cpp sipQtSqlQSqlDriverCreatorBase.cpp sipQtSqlQSqlQuery.cpp
