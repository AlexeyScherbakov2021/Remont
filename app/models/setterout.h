#ifndef SETTEROUT_H
#define SETTEROUT_H

#include "product.h"
#include <QString>


class SetterOut
{
public:
    int id;
    int idShipment;
    QString name;
    QString orderNumber;

    QList<Product> listProduct;

    SetterOut() : id{0} {}

};

#endif // SETTEROUT_H
