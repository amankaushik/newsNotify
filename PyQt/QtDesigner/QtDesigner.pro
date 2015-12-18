TEMPLATE = lib
CONFIG += warn_on plugin
QT += designer
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtDesigner.pyd
    target.files = QtDesigner.pyd
    LIBS += -L -lpython3.4m
} else {
    PY_MODULE = QtDesigner.so
    target.files = QtDesigner.so
}

target.CONFIG = no_check_exist
target.path = /home/amankaushik/pyProjects/newsnotify/env/lib/python3.4/site-packages/PyQt5
INSTALLS += target
sip.path = /home/amankaushik/pyProjects/newsnotify/env/share/sip/PyQt5/QtDesigner
sip.files = ../sip/QtDesigner/abstractformwindow.sip ../sip/QtDesigner/abstractformwindowcursor.sip ../sip/QtDesigner/customwidget.sip ../sip/QtDesigner/abstractformeditor.sip ../sip/QtDesigner/abstractformwindowmanager.sip ../sip/QtDesigner/qpydesignercontainerextension.sip ../sip/QtDesigner/QtDesignermod.sip ../sip/QtDesigner/propertysheet.sip ../sip/QtDesigner/formbuilder.sip ../sip/QtDesigner/taskmenu.sip ../sip/QtDesigner/qpydesignermembersheetextension.sip ../sip/QtDesigner/container.sip ../sip/QtDesigner/abstractobjectinspector.sip ../sip/QtDesigner/extension.sip ../sip/QtDesigner/qpydesignercustomwidgetcollectionplugin.sip ../sip/QtDesigner/membersheet.sip ../sip/QtDesigner/abstractpropertyeditor.sip ../sip/QtDesigner/abstractwidgetbox.sip ../sip/QtDesigner/default_extensionfactory.sip ../sip/QtDesigner/qpydesignertaskmenuextension.sip ../sip/QtDesigner/abstractactioneditor.sip ../sip/QtDesigner/qextensionmanager.sip ../sip/QtDesigner/abstractformbuilder.sip ../sip/QtDesigner/qpydesignerpropertysheetextension.sip ../sip/QtDesigner/qpydesignercustomwidgetplugin.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtDesigner.exp
DEFINES += SIP_PROTECTED_IS_PUBLIC protected=public
INCLUDEPATH += .
INCLUDEPATH += /home/amankaushik/pyProjects/newsnotify/sip/siplib
INCLUDEPATH += /usr/include/python3.4m
INCLUDEPATH += ../qpy/QtDesigner

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

TARGET = QtDesigner
HEADERS = sipAPIQtDesigner.h ../qpy/QtDesigner/qpydesignercontainerextension.h ../qpy/QtDesigner/qpydesignercustomwidgetplugin.h ../qpy/QtDesigner/qpydesignercustomwidgetcollectionplugin.h ../qpy/QtDesigner/qpydesignerpropertysheetextension.h ../qpy/QtDesigner/qpydesignermembersheetextension.h ../qpy/QtDesigner/qpydesignertaskmenuextension.h
SOURCES = sipQtDesignerQDesignerContainerExtension.cpp sipQtDesignerQDesignerCustomWidgetInterface.cpp sipQtDesignerQAbstractFormBuilder.cpp sipQtDesignerQDesignerPropertySheetExtension.cpp sipQtDesignerQDesignerFormWindowManagerInterface.cpp sipQtDesignerQDesignerFormWindowInterfaceFeature.cpp sipQtDesignerQDesignerTaskMenuExtension.cpp sipQtDesignerQPyDesignerMemberSheetExtension.cpp sipQtDesignerQExtensionFactory.cpp sipQtDesignerQAbstractExtensionManager.cpp sipQtDesignercmodule.cpp sipQtDesignerQPyDesignerCustomWidgetPlugin.cpp sipQtDesignerQDesignerWidgetBoxInterface.cpp sipQtDesignerQDesignerFormWindowCursorInterface.cpp sipQtDesignerQExtensionManager.cpp sipQtDesignerQDesignerFormEditorInterface.cpp sipQtDesignerQDesignerFormWindowInterface.cpp sipQtDesignerQAbstractExtensionFactory.cpp sipQtDesignerQDesignerMemberSheetExtension.cpp sipQtDesignerQDesignerObjectInspectorInterface.cpp sipQtDesignerQDesignerCustomWidgetCollectionInterface.cpp sipQtDesignerQFormBuilder.cpp sipQtDesignerQList0101QDesignerCustomWidgetInterface.cpp sipQtDesignerQPyDesignerPropertySheetExtension.cpp sipQtDesignerQDesignerActionEditorInterface.cpp sipQtDesignerQDesignerPropertyEditorInterface.cpp sipQtDesignerQPyDesignerTaskMenuExtension.cpp sipQtDesignerQPyDesignerContainerExtension.cpp sipQtDesignerQPyDesignerCustomWidgetCollectionPlugin.cpp
