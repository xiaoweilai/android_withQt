#-------------------------------------------------
#
# Project created by QtCreator 2015-07-05T18:14:00
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ffmpegplayandroid
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

INCLUDEPATH += D:\git\android_withQt\ffmpegplayandroid\jni_depend\include
INCLUDEPATH += D:\git\android_withQt\ffmpegplayandroid\jni_depend\SDL\include

LIBS += -LD:\git\android_withQt\ffmpegplayandroid\jni_depend\lib -lswscale
LIBS += -LD:\git\android_withQt\ffmpegplayandroid\jni_depend\SDL\lib -lSDL2
#LIBS += ./jni/lib/libavcore.a
#LIBS += ./jni/lib/libavdevice.a
#LIBS += ./jni/lib/avfilter.lib
#LIBS += ./jni/lib/avutil.lib
#LIBS += ./jni/lib/postproc.lib
#LIBS += ./jni/lib/swresample.lib
#LIBS += ./jni/lib/swscale.lib

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

CONFIG += mobility
MOBILITY = 

INCLUDEPATH += ./jni
