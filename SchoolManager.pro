#-------------------------------------------------
#
# Project created by QtCreator 2013-05-04T16:26:50
#
#-------------------------------------------------

QT       += core gui
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SchoolManager
TEMPLATE = app


SOURCES += main.cpp\
    enterform.cpp \
    schoolmanaging.cpp \
    dbmanager.cpp \
    human.cpp \
    student.cpp \
    stclass.cpp

HEADERS  += \
    enterform.h \
    schoolmanaging.h \
    dbmanager.h \
    human.h \
    student.h \
    stclass.h

FORMS    +=

OTHER_FILES += \
    README.md
