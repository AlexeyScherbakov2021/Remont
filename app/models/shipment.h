#ifndef SHIPMENT_H
#define SHIPMENT_H

#include "product.h"
#include "setterout.h"

#include <QDateTime>
#include <QString>


class Shipment
{
public:
    int id;
    QString number;
    QString objectInstall;
    QDateTime dateOut;
    QString customer;
    QString questList;
    QString schet;
    QString cardOrder;
    QString numberUPD;
    QString buyer;
    QDateTime dateUPD;

    QList<Product> listProduct;
    QList<SetterOut> listSetterOut;
    QList<Modul> listModules;

    Shipment() : id{0} {}

};

#endif // SHIPMENT_H
