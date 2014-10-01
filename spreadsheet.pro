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
    mainwindow.h \
    sortdialog.h \   
    finddialog.h \
    gotocelldialog.h \
    spreadsheet.h \
    cell.h

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    sortdialog.cpp \
    finddialog.cpp \
    gotocelldialog.cpp \
    spreadsheet.cpp \
    cell.cpp

FORMS += \
    mainwindow.ui \
    sortdialog.ui \
    gotocelldialog.ui

RESOURCES += \
    spreadsheet.qrc

