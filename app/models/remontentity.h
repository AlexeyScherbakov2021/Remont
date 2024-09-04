#ifndef REMONTENTITY_H
#define REMONTENTITY_H

#include "modul.h"
#include "product.h"
#include "remontm.h"

#include <QString>
#include <QDebug>


// template<typename T>
class RemontEntity
{
public:
    int id;
    int idShipment;
    QString name;
    QString number;
    QList<RemontM> *listRemont = nullptr;

    virtual void LoadListRemont(RepoMSSQL *repo) = 0;
    virtual bool AddRemont(RemontM& rem, RepoMSSQL *repo) = 0;
    virtual bool AddRemontStep(RemontStep &step, RepoMSSQL *repo) = 0;
};





class RemontModul : public RemontEntity
{
private:
    Modul modul;
public:
    RemontModul(Modul &mod) : modul(mod)
    {
        id = modul.id;
        idShipment = modul.idShipment;
        name = modul.name;
        number = modul.number;
        listRemont = &modul.listRemont;

        // qDebug() << &mod << &modul;
        // qDebug() << &mod.listRemont << listRemont << &modul.listRemont;

    }

    void LoadListRemont(RepoMSSQL *repo) override
    {
        repo->LoadRemontM(modul.listRemont, id);
    }

    bool AddRemont(RemontM &rem, RepoMSSQL *repo) override
    {
        return repo->AddRemontM(rem);
    }

    bool AddRemontStep(RemontStep &step, RepoMSSQL *repo)
    {
        return repo->AddRemontMStep(step);
    }

};





class RemontProduct : public RemontEntity
{
private:
    Product product;
public:

    RemontProduct(Product &prod) : product(prod)
    {
        id = prod.id;
        idShipment = prod.idShipment;
        name = prod.name;
        number = prod.number;
        listRemont = &product.listRemont;
        // qDebug() << &prod << &product;
        // qDebug() << &prod.listRemont << listRemont << &product.listRemont;
    }

    void LoadListRemont(RepoMSSQL *repo) override
    {
        repo->LoadRemontP(product.listRemont, id);
    }

    bool AddRemont(RemontM &rem, RepoMSSQL *repo) override
    {
        return repo->AddRemontP(rem);
    }

    bool AddRemontStep(RemontStep &step, RepoMSSQL *repo)
    {
        return repo->AddRemontPStep(step);
    }

};


#endif // REMONTENTITY_H
