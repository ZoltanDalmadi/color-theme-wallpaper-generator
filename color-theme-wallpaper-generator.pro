#-------------------------------------------------
#
# Project created by QtCreator 2014-08-05T12:45:18
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = color-theme-wallpaper-generator
TEMPLATE = app

INCLUDEPATH += include

SOURCES += src/main.cpp \
           src/window.cpp \
           src/imageviewer.cpp \
           src/imagegenerator.cpp \
           src/themeparser.cpp

HEADERS  += include/window.h \
            include/imageviewer.h \
            include/imagegenerator.h \
            include/themeparser.h
