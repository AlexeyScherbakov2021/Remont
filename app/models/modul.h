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
    QList<Plate> listPlate;

    Modul() : id{0}, idShipment{0}, idProduct{0} {}

    bool operator==(const Modul &other) const { return this->id == other.id; }

    QString numAndComment()
    {
        QString res = number;
        Status status = listStatus.last();
        if(listStatus.size() > 0 && !status.Comment.isEmpty())
        {
            res = number + " (" + status.Comment + ")";
        }
        return res;
    }

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
