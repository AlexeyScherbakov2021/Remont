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
    QDateTime dateCreate;

    QList<RemontM> listRemont;
    QList<Status> listStatus;

    Modul() : id{0} {}

    bool operator==(const Modul &other) const { return this->id == other.id; }



};

inline size_t qHash(const Modul &key/*, uint seed*/){
    return qHash(key.id);
}

//============================================================================================

// template<typename T>
// class Device
// {
// public:
//     QList<T> listDevice;

// };



#endif // MODUL_H
