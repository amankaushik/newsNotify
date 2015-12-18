TEMPLATE = lib
CONFIG += warn_on plugin
QT += quick
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtQuick.pyd
    target.files = QtQuick.pyd
    LIBS += -L -lpython3.4m
} else {
    PY_MODULE = QtQuick.so
    target.files = QtQuick.so
}

target.CONFIG = no_check_exist
target.path = /home/amankaushik/pyProjects/newsnotify/env/lib/python3.4/site-packages/PyQt5
INSTALLS += target
sip.path = /home/amankaushik/pyProjects/newsnotify/env/share/sip/PyQt5/QtQuick
sip.files = ../sip/QtQuick/qsgsimplerectnode.sip ../sip/QtQuick/qsgtexture.sip ../sip/QtQuick/QtQuickmod.sip ../sip/QtQuick/qquickitem.sip ../sip/QtQuick/qsgengine.sip ../sip/QtQuick/qsgtextureprovider.sip ../sip/QtQuick/qsggeometry.sip ../sip/QtQuick/qquickrendercontrol.sip ../sip/QtQuick/qquickimageprovider.sip ../sip/QtQuick/qsgnode.sip ../sip/QtQuick/qquicktextdocument.sip ../sip/QtQuick/qquickpainteditem.sip ../sip/QtQuick/qquickframebufferobject.sip ../sip/QtQuick/qsgmaterial.sip ../sip/QtQuick/qquickview.sip ../sip/QtQuick/qsgabstractrenderer.sip ../sip/QtQuick/qquickitemgrabresult.sip ../sip/QtQuick/qquickwindow.sip ../sip/QtQuick/qsgflatcolormaterial.sip ../sip/QtQuick/qsgtexturematerial.sip ../sip/QtQuick/qsgvertexcolormaterial.sip ../sip/QtQuick/qsgsimpletexturenode.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtQuick.exp
DEFINES += SIP_PROTECTED_IS_PUBLIC protected=public
INCLUDEPATH += .
INCLUDEPATH += /home/amankaushik/pyProjects/newsnotify/sip/siplib
INCLUDEPATH += /usr/include/python3.4m
INCLUDEPATH += ../qpy/QtQuick

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

TARGET = QtQuick
HEADERS = sipAPIQtQuick.h ../qpy/QtQuick/qpyquick_api.h ../qpy/QtQuick/qpyquickframebufferobject.h ../qpy/QtQuick/qpyquick_register_type.h ../qpy/QtQuick/qpyquickpainteditem.h ../qpy/QtQuick/qpyquickitem.h ../qpy/QtQuick/qpyquick_chimera_helpers.h
SOURCES = sipQtQuickQSGGeometryAttribute.cpp sipQtQuickQSGTextureMaterial.cpp sipQtQuickQQuickFramebufferObject.cpp sipQtQuickQQuickItem.cpp sipQtQuickQQuickTextureFactory.cpp sipQtQuickQSGTransformNode.cpp sipQtQuickQList0101QQuickItem.cpp sipQtQuickQSGMaterial.cpp sipQtQuickQQuickItemItemChangeData.cpp sipQtQuickQSGClipNode.cpp sipQtQuickQSGGeometryNode.cpp sipQtQuickQSGGeometry.cpp sipQtQuickQSGMaterialShaderRenderState.cpp sipQtQuickQSGNodeFlags.cpp sipQtQuickQQuickItemFlags.cpp sipQtQuickQSGVertexColorMaterial.cpp sipQtQuickQSGOpaqueTextureMaterial.cpp sipQtQuickcmodule.cpp sipQtQuickQSGSimpleTextureNodeTextureCoordinatesTransformMode.cpp sipQtQuickQQuickPaintedItem.cpp sipQtQuickQSGBasicGeometryNode.cpp sipQtQuickQSGSimpleRectNode.cpp sipQtQuickQSGNodeDirtyState.cpp sipQtQuickQQuickWindow.cpp sipQtQuickQSGGeometryAttributeSet.cpp sipQtQuickQSGMaterialShaderRenderStateDirtyStates.cpp sipQtQuickQSGGeometryColoredPoint2D.cpp sipQtQuickQSGFlatColorMaterial.cpp sipQtQuickQQuickView.cpp sipQtQuickQSGMaterialType.cpp sipQtQuickQSGTextureProvider.cpp sipQtQuickQSGNode.cpp sipQtQuickQQuickItemUpdatePaintNodeData.cpp sipQtQuickQQuickFramebufferObjectRenderer.cpp sipQtQuickQQuickTextDocument.cpp sipQtQuickQQuickImageProvider.cpp sipQtQuickQSGMaterialShader.cpp sipQtQuickQSGGeometryPoint2D.cpp sipQtQuickQSGOpacityNode.cpp sipQtQuickQSGSimpleTextureNode.cpp sipQtQuickQSGGeometryTexturedPoint2D.cpp sipQtQuickQSGMaterialFlags.cpp sipQtQuickQQuickWindowCreateTextureOptions.cpp sipQtQuickQSGDynamicTexture.cpp sipQtQuickQSGTexture.cpp sipQtQuickQQuickPaintedItemPerformanceHints.cpp ../qpy/QtQuick/qpyquickframebufferobject.cpp ../qpy/QtQuick/qpyquickpainteditem.cpp ../qpy/QtQuick/qpyquick_chimera_helpers.cpp ../qpy/QtQuick/qpyquick_post_init.cpp ../qpy/QtQuick/qpyquickitem.cpp ../qpy/QtQuick/qpyquick_register_type.cpp
