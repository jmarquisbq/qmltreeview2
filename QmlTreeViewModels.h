#pragma once

#include <QQmlEngine>
#include <QtQml>

#include "treemodeladaptor.h"
#include "DisplayFileSystemModel.h"

namespace QmlModelTypes {

static void registerQmlTreeViewModels ()
{
    const char * uri = "qmltreeview2"; // @uri QtQmlTricks.SmartDataModels
    const int    maj = 1;
    const int    min = 0;
    const char * msg = "!!!";

    qmlRegisterUncreatableType<DisplayFileSystemModel>(uri, maj, min, "FileSystemModel", msg);
    //ADDED
    qmlRegisterType<TreeModelAdaptor>(uri, maj, min, "TreeModelAdaptor");
}

Q_COREAPP_STARTUP_FUNCTION(registerQmlTreeViewModels)

}
