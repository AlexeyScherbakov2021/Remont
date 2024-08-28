#include <QtTest>
#include <QDebug>


#include <models/product.h>
#include <models/remontm.h>
#include <models/setterout.h>
#include <models/shipment.h>
#include "models/modul.h"
#include <repomssql.h>

// add necessary includes here

class TestRemont : public QObject
{
    Q_OBJECT

public:
    TestRemont();
    ~TestRemont();

private slots:
    void test_SelectModulId();
    void test_SelectProductId();
    void test_LoadModules();
    void test_GetShipment();

};

TestRemont::TestRemont() {}

TestRemont::~TestRemont() {}

//-------------------------------------------------------------------------------------
void TestRemont::test_SelectModulId()
{
    int id = 166;
    RepoMSSQL repo;
    Modul res = repo.GetModul(id);
    QVERIFY(res.id == id);

}


//-------------------------------------------------------------------------------------
void TestRemont::test_SelectProductId()
{
    int id = 870;
    RepoMSSQL repo;
    Product res = repo.GetProduct(id);
    QVERIFY(res.id == id);

}

//-------------------------------------------------------------------------------------
void TestRemont::test_LoadModules()
{
    int id = 870;
    RepoMSSQL repo;
    Product prod = repo.GetProduct(id);
    repo.LoadChildProduct(prod);
    QVERIFY(prod.listModules.size() > 0);

}

//-------------------------------------------------------------------------------------
void TestRemont::test_GetShipment()
{
    int id = 35;
    RepoMSSQL repo;
    Shipment res = repo.GetShipment(id);
    QVERIFY(res.id == id);

}

//-------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------

QTEST_APPLESS_MAIN(TestRemont)

#include "tst_testremont.moc"
