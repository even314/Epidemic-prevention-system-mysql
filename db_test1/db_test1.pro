#-------------------------------------------------
#
# Project created by QtCreator 2022-06-20T21:32:59
#
#-------------------------------------------------

QT       += core gui sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = db_test1
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    manager.cpp \
    edit2.cpp \
    textdialog.cpp \
    vaccine_appointment.cpp \
    citizens.cpp \
    test_appointment.cpp \
    showdialog.cpp \
    statics.cpp

HEADERS += \
        mainwindow.h \
    manager.h \
    connection.h \
    datavar.h \
    edit2.h \
    textdialog.h \
    vaccine_appointment.h \
    citizens.h \
    test_appointment.h \
    showdialog.h \
    statics.h

FORMS += \
        mainwindow.ui \
    manager.ui \
    edit2.ui \
    textdialog.ui \
    vaccine_appointment.ui \
    citizens.ui \
    test_appointment.ui \
    showdialog.ui \
    statics.ui
