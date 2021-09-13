#ifndef QTQMLTRICKSPLUGIN_SMARTDATAMODELS_H
#define QTQMLTRICKSPLUGIN_SMARTDATAMODELS_H

#include <QQmlEngine>
#include <QtQml>

#include "treemodeladaptor.h"

namespace QmlModelTypes {

static void registerQmlTreeViewModels ()
{
    qmlRegisterUncreatableType<DisplayFileSystemModel>("com.example", 1, 0,
                                                       "FileSystemModel", "Cannot create a FileSystemModel instance.");
    //ADDED
    qmlRegisterType<TreeModelAdaptor>("com.example", 1, 0, "TreeModelAdaptor");
}

Q_COREAPP_STARTUP_FUNCTION(registerQmlTreeViewModels)

}

#endif // QTQMLTRICKSPLUGIN_SMARTDATAMODELS_H
