QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

VERSION = 1.0.0.0
QMAKE_TARGGET_COMPANY = NeftegazComplex
QMAKE_TARGET_PRODUCT = Remont
QMAKE_TARGET_DESCRIPTION = Description
QMAKE_TARGET_COPYRIGHT = Alex
# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    acceptremontwindow.cpp \
    cardprodwindow.cpp \
    claimdetail.cpp \
    claimwindow.cpp \
    complectproductwindow.cpp \
    createdevicewindow.cpp \
    listshipwindow.cpp \
    main.cpp \
    mainwindow.cpp \
    otkcontrolwindow.cpp \
    platewindow.cpp \
    remontstatuswindow.cpp \
    remontwindow.cpp \
    repomssql.cpp \
    selectdevicewindow.cpp \
    selectplatewindow.cpp \
    shipwindow.cpp

HEADERS += \
    acceptremontwindow.h \
    cardprodwindow.h \
    claimdetail.h \
    claimwindow.h \
    complectproductwindow.h \
    createdevicewindow.h \
    listshipwindow.h \
    mainwindow.h \
    models/claim.h \
    models/modul.h \
    models/plates.h \
    models/product.h \
    models/remontentity.h \
    models/remontm.h \
    models/remontstep.h \
    models/remontstepstatus.h \
    models/setterout.h \
    models/shipment.h \
    models/status.h \
    otkcontrolwindow.h \
    platewindow.h \
    remontstatuswindow.h \
    remontwindow.h \
    repomssql.h \
    selectdevicewindow.h \
    selectplatewindow.h \
    shipwindow.h

FORMS += \
    acceptremontwindow.ui \
    cardprodwindow.ui \
    claimdetail.ui \
    claimwindow.ui \
    complectproductwindow.ui \
    createdevicewindow.ui \
    listshipwindow.ui \
    mainwindow.ui \
    otkcontrolwindow.ui \
    platewindow.ui \
    remontstatuswindow.ui \
    remontwindow.ui \
    selectdevicewindow.ui \
    selectplatewindow.ui \
    shipwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
