#-------------------------------------------------
#
# Project created by QtCreator 2016-11-07T08:51:32
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = appliProf
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    eleve.cpp \
    Section.cpp \
    Note.cpp \
    Matiere.cpp \
    Evaluation.cpp \
    addmat.cpp

HEADERS  += mainwindow.h \
    Section.h \
    Note.h \
    Matiere.h \
    Evaluation.h \
    eleve.h \
    addmat.h

FORMS    += mainwindow.ui \
    addmat.ui
