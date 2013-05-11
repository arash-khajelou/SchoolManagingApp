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
    student.cpp \
    stclass.cpp \
    dbmanager.cpp \
    rootmenu.cpp \
    managermenu.cpp \
    teachermenu.cpp \
    adduserwindow.cpp \
    addstudentwindow.cpp \
    showresultwindow.cpp \
    adddelaywindow.cpp \
    manageclasswindow.cpp \
    setdisiplinewindow.cpp \
    listofstudentswindow.cpp \
    setstudentgradewindow.cpp

HEADERS  += \
    enterform.h \
    schoolmanaging.h \
    student.h \
    stclass.h \
    dbmanager.h \
    rootmenu.h \
    managermenu.h \
    teachermenu.h \
    adduserwindow.h \
    addstudentwindow.h \
    showresultwindow.h \
    adddelaywindow.h \
    manageclasswindow.h \
    setdisiplinewindow.h \
    listofstudentswindow.h \
    setstudentgradewindow.h

FORMS    +=

OTHER_FILES += \
    README.md
