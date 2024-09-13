#ifndef PRODUCT_H
#define PRODUCT_H

#include "modul.h"

#include <QDateTime>
#include <QString>


class Product
{
public:
    int id;
    int idShipment;
    int idSetterOut;
    int prodTypeId;
    QString name;
    QString number;
    QString numberBox;
    QDateTime dateRegister;
    QString redaction1;
    QString redaction2;
    QString redactionPS;
    QString questList;
    bool isAvr;
    bool isAkb;
    bool isCooler;
    bool isSkm;
    bool isZip;
    QString numberBI;
    QString numberUSIKP;
    QString shunt;

    QList<Modul> listModules;
    QList<RemontM> listRemont;
    QList<Status> listStatus;

    Product() : id{0},isAvr{false},isAkb{false},isCooler{false},isSkm{false},isZip{false} { }

};


#endif // PRODUCT_H
