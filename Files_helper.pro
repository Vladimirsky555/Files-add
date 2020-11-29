#---------------------------------------------------------------------
# Project created by QtCreator 2020-10-27T11:55:23
#---------------------------------------------------------------------

QT       += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
win32: RC_ICONS = $$PWD/bin/images/photo-frame.ico
TARGET = Files_helper
TEMPLATE = app
SOURCES += main.cpp\
        mainwindow.cpp
HEADERS  += mainwindow.h
FORMS    += mainwindow.ui
RESOURCES += \
    bin/img.qrc
