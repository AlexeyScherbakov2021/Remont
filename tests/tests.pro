QT += testlib sql
QT -= gui

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

SOURCES +=  tst_testremont.cpp

INCLUDEPATH += ../app/
include(../app/app.pri)
