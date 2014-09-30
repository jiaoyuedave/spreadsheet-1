#-------------------------------------------------
#
# Project created by QtCreator 2014-09-30T09:46:28
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = spreadsheet
TEMPLATE = app

HEADERS += \
    gotocell.h \
    mainwindow.h \
    sortdialog.h \
    ui_gotocell.h \
    ui_mainwindow.h \
    ui_sortdialog.h \
    finddialog.h \
    spreadsheet.h \
    cell.h

SOURCES += \
    gotocell.cpp \
    main.cpp \
    mainwindow.cpp \
    sortdialog.cpp \
    finddialog.cpp \
    spreadsheet.cpp \
    cell.cpp

FORMS += \
    gotocell.ui \
    mainwindow.ui \
    sortdialog.ui

RESOURCES += \
    spreadsheet.qrc

