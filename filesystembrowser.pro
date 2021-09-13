TEMPLATE = app
TARGET = filesystembrowser
QT += qml quick widgets

SOURCES += main.cpp \
    treemodeladaptor.cpp \
    DisplayFileSystemModel.cpp

RESOURCES += qmltreeview2.qrc

target.path = $$[QT_INSTALL_EXAMPLES]/quickcontrols/controls/filesystembrowser
INSTALLS += target

HEADERS += \
    treemodeladaptor.h \
    DisplayFileSystemModel.h
