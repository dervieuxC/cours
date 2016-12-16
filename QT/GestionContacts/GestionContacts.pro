#-------------------------------------------------
#
# Project created by QtCreator 2016-11-17T10:50:54
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GestionContacts
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    contact.cpp \
    dialog.cpp \
    modif.cpp \
    modiftel.cpp

HEADERS  += mainwindow.h \
    contact.h \
    dialog.h \
    modif.h \
    modiftel.h

FORMS    += mainwindow.ui \
    dialog.ui \
    modif.ui \
    modiftel.ui
