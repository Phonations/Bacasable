#-------------------------------------------------
#
# Project created by QtCreator 2013-08-26T16:30:58
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = FormTest
TEMPLATE = app


SOURCES += main.cpp\
        MainWindow.cpp \
    CustomWidget.cpp

HEADERS  += MainWindow.h \
    CustomWidget.h

FORMS    += MainWindow.ui \
    CustomWidget.ui
