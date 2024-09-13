#ifndef REPOMSSQL_H
#define REPOMSSQL_H

#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>

#include <models/claim.h>
#include <models/plates.h>
#include <models/remontstepstatus.h>
#include <models/status.h>

// #include "models/entity.h"

// template <class T>
// class Singleton
// {
// public:
//     static T& instance() {
//         static T instance;
//         return instance;
//     }
// private:
//     Singleton();
//     ~Singleton();
//     Singleton(const Singleton&);
//     Singleton operator =(const Singleton&);
// };

class Modul;
class Product;
class SetterOut;
class RemontM;
class Shipment;
class RemontStep;
class Entity;
// class BaseModel;

class RepoMSSQL
{
    // friend class Singleton<RepoMSSQL>;

private:
    static inline QSqlDatabase db;
public:
    RepoMSSQL();
    ~RepoMSSQL();
    bool ConnectDb();

    void FindModul(const QString &serialNumber, QList<Modul> &listModul);
    Modul GetModul(const int id);
    void FindModulsStatus(QList<Modul> &listModul, QString serialNumber, int typeStatus);
    void LoadModulsStatus(QList<Modul> &listModul, int typeStatus);
    void LoadModuleType(QMap<int, QString> &listTypeModule);
    bool AddModul(Modul &modul);
    bool DeleteModul(int id);

    SetterOut GetSetterOut(int id);
    void LoadChildSetter(SetterOut &setter);

    Shipment GetShipment(int id);

    void FindProduct(const QString &serialNumber, QList<Product> &listProduct);
    Product GetProduct(const int id);
    Product GetProduct(const QString number);
    void LoadProducts(QList<Product> &listProduct, int idStatus);
    void LoadChildProduct(Product &prod);
    void LoadProductType(QMap<int, QString> &listTypeProduct);
    bool AddProduct(Product &prod);
    bool DeleteProduct(int id);

    bool AddRemontM(RemontM& rem);
    bool AddRemontMStep(RemontStep &remStep);
    void LoadRemontReason(QMap<int, QString> &listReason);
    void LoadRemontM(QList<RemontM> &list, int idModul);
    void LoadRemontMStep(RemontM &rem);
    void LoadRemontStatus(QList<RemontStepStatus> &listStatus, RemontStepStatus::TypeStatus type);

    bool AddRemontP(RemontM& rem);
    bool AddRemontPStep(RemontStep &remStep);
    void LoadRemontP(QList<RemontM> &list, int id);
    void LoadRemontPStep(RemontM &rem);

    void LoadClaim(QList<Claim> &listClaim);
    bool InsertClaim(Claim *claim);
    bool UpdateClaim(Claim *claim);
    bool DeleteClaim(int id);
    void LoadClaimType(QMap<int, QString> &listTypeClaim);

    void LoadStatus(Modul &mod);
    void LoadStatus(Product &prod);

    bool InsertPlate(Plate &plate);
    bool DeletePlate(int id);
    // Plate FindPlate(QString &number);
    void FindPlate(QString &number, QList<Plate> &listPlate);
    void LinkPlate( int idPlate, int idModul);
};


// #define REPO Singleton<RepoMSSQL>::instance();


#endif // REPOMSSQL_H
