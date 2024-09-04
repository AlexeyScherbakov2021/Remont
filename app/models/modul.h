#ifndef MODUL_H
#define MODUL_H

#include "basemodel.h"
#include "remontm.h"
#include "status.h"
#include <QString>


class Modul
{
public:
    int id;
    int idShipment;
    int idProduct;
    int modTypeId;
    QString name;
    QString number;
    QString numberFW;
    bool isZip;

    QList<RemontM> listRemont;
    QList<Status> listStatus;

    Modul() : id{0} {}
};

//============================================================================================


#endif // MODUL_H
