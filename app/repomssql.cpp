#include <models/product.h>
#include <models/remontm.h>
#include <models/setterout.h>
#include <models/shipment.h>
#include "models/modul.h"
#include "repomssql.h"

RepoMSSQL::RepoMSSQL()
{
    // db = new QSqlDatabase("QODBC");

    // QString s = db.databaseName();
    // QString s1 = db.connectionName();
    if(!db.isValid())
    {
        db = QSqlDatabase::addDatabase("QODBC"/*, "MSSQL"*/);
    }
    ConnectDb();

}

RepoMSSQL::~RepoMSSQL()
{
    db.close();
    // qDebug() << "База данных закрыта.";
}


bool RepoMSSQL::ConnectDb()
{

#ifdef QT_DEBUG
    // qDebug() << "Отладочная версия.";

    // db.setDatabaseName("DRIVER={SQL Server};SERVER=SCHERBAKOV-A\\SQLEXPRESS;DATABASE=FinGoods;Encrypt=yes;Trusted_Connection=yes");
    db.setDatabaseName("DRIVER={SQL Server};SERVER=SCHERBAKOV-A\\SQLEXPRESS;DATABASE=FinGoods;");
    db.setUserName("sa");
    db.setPassword("gonduras");

#else
    qDebug() << "Рабочая версия.";
    db.setDatabaseName("DRIVER={SQL Server};SERVER=SFP\\FPSQLN;DATABASE=FinGoods;");
    db.setUserName("fpLoginName");
    db.setPassword("ctcnhjt,s");

#endif

    if(!db.open())
    {
        // qDebug() << "Ошибка соединения с базой данных." << db.lastError().text();
        return false;
    }
    // qDebug() << "Содединение с базой успешно.";
    return true;
}

//------------------------------------------------------------------------------------------------------
// Поиск модуоей по строке серийного номера
//------------------------------------------------------------------------------------------------------
void RepoMSSQL::FindModul(const QString &serialNumber, QList<Modul> &listModul)
{
    listModul.clear();
    QSqlQuery query;
    query.prepare("select id,idShipment,idProduct,m_modTypeId,m_name,m_number,m_numberFW,m_dateEnd,m_dateCreate,m_zip "
                     "from Modules where m_number like :number order by m_name");

    query.bindValue(":number", QString("%%1%").arg(serialNumber));

    query.exec();
    while(query.next())
    {
        Modul mod;

        mod.id = query.value(0).toInt();
        mod.idShipment = query.value(1).toInt();
        mod.idProduct = query.value(2).toInt();
        mod.modTypeId = query.value(3).toInt();
        mod.name = query.value(4).toString();
        mod.number = query.value(5).toString();
        mod.numberFW = query.value(6).toString();
        mod.dateCreate = query.value(8).toDateTime();
        mod.isZip = query.value(9).toBool();
        LoadStatus(mod);
        listModul.push_back(mod);
    }

    // qDebug() << db.lastError().text();
}

//------------------------------------------------------------------------------------------------------
// Загрузка списка статусов для модуля
//------------------------------------------------------------------------------------------------------
void RepoMSSQL::LoadStatus(Modul &mod)
{
    mod.listStatus.clear();

    QSqlQuery query;
    query.prepare("select ms.id,idModul,idStatus,DateStatus,Comment,sd.nameStatus "
                  "from ModulStatus ms "
                  "join StatusDevice sd on sd.id=ms.idStatus "
                  "where ms.idModul=:id "
                  "order by ms.DateStatus");

    query.bindValue(":id", mod.id);

    query.exec();
    while(query.next())
    {
        Status stat;
        stat.id = query.value(0).toInt();
        stat.idDevice = query.value(1).toInt();
        stat.idStatus = query.value(2).toInt();
        stat.dateStatus = query.value(3).toDateTime();
        stat.Comment = query.value(4).toString();
        stat.nameStatus = query.value(5).toString();
        mod.listStatus.push_back(stat);
    }
}


//------------------------------------------------------------------------------------------------------
// Поиск модуля по id
//------------------------------------------------------------------------------------------------------
Modul RepoMSSQL::GetModul(const int id)
{
    QSqlQuery query;
    Modul mod;

    query.prepare("select idShipment,idProduct,m_modTypeId,m_name,m_number,m_numberFW,m_dateEnd,m_dateCreate,m_zip "
                  "from Modules where id=:id");

    query.bindValue(":id", id);

    query.exec();
    if(query.next())
    {
        mod.id = id;
        mod.idShipment = query.value(0).toInt();
        mod.idProduct = query.value(1).toInt();
        mod.modTypeId = query.value(2).toInt();
        mod.name = query.value(3).toString();
        mod.number = query.value(4).toString();
        mod.numberFW = query.value(5).toString();
        mod.dateCreate = query.value(7).toDateTime();
        mod.isZip = query.value(8).toBool();
        LoadStatus(mod);
    }

    // qDebug() << db.lastError().text();

    return mod;
}

void RepoMSSQL::FindModulsStatus(QList<Modul> &listModul, QString serialNumber, int typeStatus)
{
    listModul.clear();
    QSqlQuery query;
    query.prepare("select id,idShipment,idProduct,m_modTypeId,m_name,m_number,m_numberFW,m_dateEnd,m_dateCreate,m_zip "
                  "from Modules m "
                  "join "
                  "(select idModul, max(DateStatus) dateStatus, max(idStatus) as idStatus "
                  "from ModulStatus group by idModul "
                  "having max(idStatus)=:idStatus "
                  ") ms on ms.idModul=m.id where m_number like :number order by m_name"
                  );


    query.bindValue(":number", QString("%%1%").arg(serialNumber));
    query.bindValue(":idStatus", typeStatus);

    query.exec();
    while(query.next())
    {
        Modul mod;

        mod.id = query.value(0).toInt();
        mod.idShipment = query.value(1).toInt();
        mod.idProduct = query.value(2).toInt();
        mod.modTypeId = query.value(3).toInt();
        mod.name = query.value(4).toString();
        mod.number = query.value(5).toString();
        mod.numberFW = query.value(6).toString();
        mod.dateCreate = query.value(8).toDateTime();
        mod.isZip = query.value(9).toBool();
        LoadStatus(mod);
        listModul.push_back(mod);
    }

}

void RepoMSSQL::LoadModulsStatus(QList<Modul> &listModul, int typeStatus)
{
    listModul.clear();
    QSqlQuery query;
    query.prepare("select id,idShipment,idProduct,m_modTypeId,m_name,m_number,m_numberFW,m_dateEnd,m_dateCreate,m_zip "
                  "from Modules m "
                  "join "
                  "(select idModul, max(DateStatus) dateStatus, max(idStatus) as idStatus "
                  "from ModulStatus group by idModul "
                  "having max(idStatus)=:idStatus "
                  ") ms on ms.idModul=m.id order by m_name"
                  );

    query.bindValue(":idStatus", typeStatus);

    query.exec();
    while(query.next())
    {
        Modul mod;

        mod.id = query.value(0).toInt();
        mod.idShipment = query.value(1).toInt();
        mod.idProduct = query.value(2).toInt();
        mod.modTypeId = query.value(3).toInt();
        mod.name = query.value(4).toString();
        mod.number = query.value(5).toString();
        mod.numberFW = query.value(6).toString();
        mod.dateCreate = query.value(8).toDateTime();
        mod.isZip = query.value(9).toBool();
        LoadStatus(mod);
        listModul.push_back(mod);
    }

}

//------------------------------------------------------------------------------------------------------
// Поиск изделий по строке серийного номера
//------------------------------------------------------------------------------------------------------
void RepoMSSQL::FindProduct(const QString &serialNumber, QList<Product> &listProduct)
{
    listProduct.clear();
    QSqlQuery query;
    query.prepare("select id,idShipment,idSetter,g_ProductTypeId,g_name,g_number,g_numberBox,g_dateRegister,"
                  "g_redaction1,g_redaction2,g_redactionPS,g_questList,g_avr,g_akb,g_cooler,g_skm,g_numberBI,"
                  "g_numberUSIKP,g_shunt,g_zip "
                  "from Product where g_number like :number order by g_name");

    query.bindValue(":number", QString("%%1%").arg(serialNumber));

    query.exec();
    while(query.next())
    {
        Product prod;

        prod.id = query.value(0).toInt();
        prod.idShipment = query.value(1).toInt();
        prod.idSetterOut = query.value(2).toInt();
        prod.prodTypeId = query.value(3).toInt();
        prod.name = query.value(4).toString();
        prod.number = query.value(5).toString();
        prod.numberBox = query.value(6).toString();
        prod.dateRegister = query.value(7).toDateTime();
        prod.redaction1 = query.value(8).toString();
        prod.redaction2 = query.value(9).toString();
        prod.redactionPS = query.value(10).toString();
        prod.questList = query.value(11).toString();
        prod.isAvr = query.value(12).toBool();
        prod.isAkb = query.value(13).toBool();
        prod.isCooler = query.value(14).toBool();
        prod.isSkm = query.value(15).toBool();
        prod.numberBI = query.value(16).toString();
        prod.numberUSIKP = query.value(17).toString();
        prod.shunt = query.value(18).toString();
        prod.isZip = query.value(19).toBool();
        LoadStatus(prod);
        listProduct.push_back(prod);
    }
    // qDebug() << db.lastError().text();

}

//------------------------------------------------------------------------------------------------------
// Поиск изделия по number
//------------------------------------------------------------------------------------------------------
Product RepoMSSQL::GetProduct(int id)
{
    QSqlQuery query;
    Product prod;

    query.prepare("select idShipment,idSetter,g_ProductTypeId,g_name,g_number,g_numberBox,g_dateRegister,"
         "g_redaction1,g_redaction2,g_redactionPS,g_questList,g_avr,g_akb,g_cooler,g_skm,g_numberBI,"
         "g_numberUSIKP,g_shunt,g_zip "
         "from Product where id = :id");

    query.bindValue(":id", id);

    query.exec();
    if(query.next())
    {
        prod.id = id;
        prod.idShipment = query.value(0).toInt();
        prod.idSetterOut = query.value(1).toInt();
        prod.prodTypeId = query.value(2).toInt();
        prod.name = query.value(3).toString();
        prod.number = query.value(4).toString();
        prod.numberBox = query.value(5).toString();
        prod.dateRegister = query.value(6).toDateTime();
        prod.redaction1 = query.value(7).toString();
        prod.redaction2 = query.value(8).toString();
        prod.redactionPS = query.value(9).toString();
        prod.questList = query.value(10).toString();
        prod.isAvr = query.value(11).toBool();
        prod.isAkb = query.value(12).toBool();
        prod.isCooler = query.value(13).toBool();
        prod.isSkm = query.value(14).toBool();
        prod.numberBI = query.value(15).toString();
        prod.numberUSIKP = query.value(16).toString();
        prod.shunt = query.value(17).toString();
        prod.isZip = query.value(18).toBool();
        LoadStatus(prod);
    }

    return prod;

}

Product RepoMSSQL::GetProduct(const QString number)
{
    QSqlQuery query;
    Product prod;

    query.prepare("select id, idShipment,idSetter,g_ProductTypeId,g_name,g_number,g_numberBox,g_dateRegister,"
                  "g_redaction1,g_redaction2,g_redactionPS,g_questList,g_avr,g_akb,g_cooler,g_skm,g_numberBI,"
                  "g_numberUSIKP,g_shunt,g_zip "
                  "from Product where g_number like :number");

    query.bindValue(":number", number);

    query.exec();
    if(query.next())
    {
        prod.id = query.value(0).toInt();;
        prod.idShipment = query.value(1).toInt();
        prod.idSetterOut = query.value(2).toInt();
        prod.prodTypeId = query.value(3).toInt();
        prod.name = query.value(4).toString();
        prod.number = query.value(5).toString();
        prod.numberBox = query.value(6).toString();
        prod.dateRegister = query.value(7).toDateTime();
        prod.redaction1 = query.value(8).toString();
        prod.redaction2 = query.value(9).toString();
        prod.redactionPS = query.value(10).toString();
        prod.questList = query.value(11).toString();
        prod.isAvr = query.value(12).toBool();
        prod.isAkb = query.value(13).toBool();
        prod.isCooler = query.value(14).toBool();
        prod.isSkm = query.value(15).toBool();
        prod.numberBI = query.value(16).toString();
        prod.numberUSIKP = query.value(17).toString();
        prod.shunt = query.value(18).toString();
        prod.isZip = query.value(19).toBool();
        LoadStatus(prod);
    }

    return prod;

}

void RepoMSSQL::LoadProducts(QList<Product> &listProduct, int idStatus)
{
    listProduct.clear();
    QSqlQuery query;
    query.prepare("select id,idShipment,idSetter,g_ProductTypeId,g_name,g_number,g_numberBox,g_dateRegister,"
                  "g_redaction1,g_redaction2,g_redactionPS,g_questList,g_avr,g_akb,g_cooler,g_skm,g_numberBI,"
                  "g_numberUSIKP,g_shunt,g_zip "
                  "from Product p "
                  "join "
                  "(select idProduct, max(DateStatus) dateStatus, max(idStatus) as idStatus "
                  "from ProductStatus group by idProduct "
                  "having max(idStatus)=:idStatus "
                  ") ms on ms.idProduct=p.id order by g_name");

    query.bindValue(":idStatus", idStatus);
    query.exec();
    while(query.next())
    {
        Product prod;

        prod.id = query.value(0).toInt();
        prod.idShipment = query.value(1).toInt();
        prod.idSetterOut = query.value(2).toInt();
        prod.prodTypeId = query.value(3).toInt();
        prod.name = query.value(4).toString();
        prod.number = query.value(5).toString();
        prod.numberBox = query.value(6).toString();
        prod.dateRegister = query.value(7).toDateTime();
        prod.redaction1 = query.value(8).toString();
        prod.redaction2 = query.value(9).toString();
        prod.redactionPS = query.value(10).toString();
        prod.questList = query.value(11).toString();
        prod.isAvr = query.value(12).toBool();
        prod.isAkb = query.value(13).toBool();
        prod.isCooler = query.value(14).toBool();
        prod.isSkm = query.value(15).toBool();
        prod.numberBI = query.value(16).toString();
        prod.numberUSIKP = query.value(17).toString();
        prod.shunt = query.value(18).toString();
        prod.isZip = query.value(19).toBool();
        LoadStatus(prod);
        listProduct.push_back(prod);
    }

}

//------------------------------------------------------------------------------------------------------
// Загрузка списка статусов для изделия
//------------------------------------------------------------------------------------------------------
void RepoMSSQL::LoadStatus(Product &prod)
{
    prod.listStatus.clear();

    QSqlQuery query;
    query.prepare("select ms.id,idProduct,idStatus,DateStatus,Comment,sd.nameStatus "
                  "from ProductStatus ms "
                  "join StatusDevice sd on sd.id=ms.idStatus "
                  "where ms.idProduct=:id "
                  "order by ms.DateStatus");

    query.bindValue(":id", prod.id);

    query.exec();
    while(query.next())
    {
        Status stat;
        stat.id = query.value(0).toInt();
        stat.idDevice = query.value(1).toInt();
        stat.idStatus = query.value(2).toInt();
        stat.dateStatus = query.value(3).toDateTime();
        stat.Comment = query.value(4).toString();
        stat.nameStatus = query.value(5).toString();
        prod.listStatus.push_back(stat);
    }

}

//------------------------------------------------------------------------------------------------------
// Добавление записи в платы
//------------------------------------------------------------------------------------------------------
bool RepoMSSQL::InsertPlate(Plate &plate)
{
    bool res;
    QSqlQuery query;

    query.prepare("insert into Plate (CreateDate,Number,NumberFW,NumberDoc,VNFT) "
                  "output inserted.id values(:CreateDate,:Number,:NumberFW,:NumberDoc,:VNFT)");

    // query.bindValue(":idModul", plate.idModul);
    query.bindValue(":CreateDate", plate.createDate);
    query.bindValue(":Number", plate.number);
    query.bindValue(":NumberFW", plate.numberFW);
    query.bindValue(":NumberDoc", plate.numberDoc);
    query.bindValue(":VNFT", plate.VNFT);

    res = query.exec();

    if(!res)
        qDebug() << "Ошибка при добавлении записи в RemontM";
    else
    {
        if(query.next())
            plate.id = query.value(0).toInt();
    }

    return res;

}

bool RepoMSSQL::DeletePlate(int id)
{
    bool res;
    QSqlQuery query;

    query.prepare("delete from Plate where id=:id");
    query.bindValue(":id", id);
    res = query.exec();

    if(!res)
        qDebug() << "Ошибка при добавлении записи в RemontM";

    return res;

}

//------------------------------------------------------------------------------------------------------
// Поиск платы по номеру
//------------------------------------------------------------------------------------------------------
// Plate RepoMSSQL::FindPlate(QString &number)
// {
//     QSqlQuery query;
//     query.prepare("select id,CreateDate,Number,NumberFW,NumberDoc,VNFT "
//                   "from Plate where Number=:Number and idModul is null");

//     query.bindValue(":Number", number);

//     Plate plate;
//     query.exec();
//     if(query.next())
//     {
//         plate.id = query.value(0).toInt();
//         plate.createDate = query.value(1).toDateTime();
//         plate.number = query.value(2).toString();
//         plate.numberFW = query.value(3).toString();
//         plate.numberDoc = query.value(4).toString();
//         plate.VNFT = query.value(5).toString();
//     }
//     return plate;
// }

//------------------------------------------------------------------------------------------------------
// Поиск списка плат по номеру
//------------------------------------------------------------------------------------------------------
void RepoMSSQL::FindPlate(QString &number, QList<Plate> &listPlate)
{
    QSqlQuery query;
    listPlate.clear();
    // query.prepare("select id,CreateDate,Number,NumberFW,NumberDoc,VNFT from Plate");

    query.prepare("select id,CreateDate,Number,NumberFW,NumberDoc,VNFT "
                  "from Plate where Number like :Number and idModul is null");

    query.bindValue(":Number", QString("%%1%").arg(number));

    query.exec();
    while(query.next())
    {
        Plate plate;
        plate.id = query.value(0).toInt();
        plate.createDate = query.value(1).toDateTime();
        plate.number = query.value(2).toString();
        plate.numberFW = query.value(3).toString();
        plate.numberDoc = query.value(4).toString();
        plate.VNFT = query.value(5).toString();
        listPlate.push_back(plate);
    }

}

//------------------------------------------------------------------------------------------------------
// Привязка платы к модулю
//------------------------------------------------------------------------------------------------------
void RepoMSSQL::LinkPlate(int idPlate, int idModul)
{
    bool res;
    QSqlQuery query;

    query.prepare("update Plate set idModul=:idModul where id=:id");

    query.bindValue(":idModul", idModul);
    query.bindValue(":id", idPlate);

    res = query.exec();

    if(!res)
        qDebug() << "Ошибка при добавлении записи в RemontM";
    // else
    //     plate.idModul = idModul;

}


//------------------------------------------------------------------------------------------------------
// Загрузка модулей для изделия
//------------------------------------------------------------------------------------------------------
void RepoMSSQL::LoadChildProduct(Product &prod)
{
    prod.listModules.clear();
    QSqlQuery query;
    query.prepare("select id,idShipment,m_modTypeId,m_name,m_number,m_numberFW,m_dateEnd,m_dateCreate,m_zip "
                  "from Modules where idProduct = :idProduct");

    query.bindValue(":idProduct", prod.id);

    query.exec();
    while(query.next())
    {
        Modul mod;
        mod.id = query.value(0).toInt();
        mod.idShipment = query.value(1).toInt();
        mod.idProduct = prod.id;
        mod.modTypeId = query.value(2).toInt();
        mod.name = query.value(3).toString();
        mod.number = query.value(4).toString();
        mod.numberFW = query.value(5).toString();
        mod.isZip = query.value(8).toBool();
        prod.listModules.push_back(mod);
    }
}

//------------------------------------------------------------------------------------------------------
// Поиск набора по id
//------------------------------------------------------------------------------------------------------
SetterOut RepoMSSQL::GetSetterOut(int id)
{
    QSqlQuery query;
    SetterOut setter;

    query.prepare("select idShipment,s_name,s_orderNum "
                  "from SetterOut where id = :id");

    query.bindValue(":id", id);

    query.exec();
    if(query.next())
    {
        setter.id = id;
        setter.idShipment = query.value(0).toInt();
        setter.name = query.value(1).toString();
        setter.orderNumber = query.value(2).toString();
    }
    return setter;
}

//------------------------------------------------------------------------------------------------------
// Загрузка изделий для набора
//------------------------------------------------------------------------------------------------------
void RepoMSSQL::LoadChildSetter(SetterOut &setter)
{
    setter.listProduct.clear();
    QSqlQuery query;
    query.prepare("select id,idShipment,idSetter,g_ProductTypeId,g_name,g_number,g_numberBox,g_dateRegister,"
                  "g_redaction1,g_redaction2,g_redactionPS,g_questList,g_avr,g_akb,g_cooler,g_skm,g_numberBI,"
                  "g_numberUSIKP,g_shunt,g_zip "
                  "from Product where idSetter = :idSetter");

    query.bindValue(":idSetter", setter.id);

    query.exec();
    while(query.next())
    {
        Product prod;

        prod.id = query.value(0).toInt();
        prod.idShipment = query.value(1).toInt();
        prod.idSetterOut = query.value(2).toInt();
        prod.prodTypeId = query.value(3).toInt();
        prod.name = query.value(4).toString();
        prod.number = query.value(5).toString();
        prod.numberBox = query.value(6).toString();
        prod.dateRegister = query.value(7).toDateTime();
        prod.redaction1 = query.value(8).toString();
        prod.redaction2 = query.value(9).toString();
        prod.redactionPS = query.value(10).toString();
        prod.questList = query.value(11).toString();
        prod.isAvr = query.value(12).toBool();
        prod.isAkb = query.value(13).toBool();
        prod.isCooler = query.value(14).toBool();
        prod.isSkm = query.value(15).toBool();
        prod.numberBI = query.value(16).toString();
        prod.numberUSIKP = query.value(17).toString();
        prod.shunt = query.value(18).toString();
        prod.isZip = query.value(19).toBool();

        setter.listProduct.push_back(prod);
    }

}

//------------------------------------------------------------------------------------------------------
// Поиск отгрузки по id
//------------------------------------------------------------------------------------------------------
Shipment RepoMSSQL::GetShipment(int id)
{
    QSqlQuery query;
    Shipment ship;

    query.prepare("select c_number,c_objectInstall,c_dateOut,c_customer,c_questList,"
                  "c_schet,c_cardOrder,c_numberUPD,c_buyer,c_dateUPD "
                  "from Shipment where id = :id");

    query.bindValue(":id", id);

    query.exec();
    if(query.next())
    {
        ship.id = id;
        ship.number = query.value(0).toString();
        ship.objectInstall = query.value(1).toString();
        ship.dateOut = query.value(2).toDateTime();
        ship.customer = query.value(3).toString();
        ship.questList = query.value(4).toString();
        ship.schet = query.value(5).toString();
        ship.cardOrder = query.value(6).toString();
        ship.numberUPD = query.value(7).toString();
        ship.buyer = query.value(8).toString();
        ship.dateUPD = query.value(9).toDateTime();
    }
    return ship;

}

//------------------------------------------------------------------------------------------------------
// Добавление ремонта
//------------------------------------------------------------------------------------------------------
bool RepoMSSQL::AddRemontM(RemontM &rem)
{
    bool res;
    QSqlQuery query;

    db.transaction();

    query.prepare("insert into RemontM (ModulId,Reclamation,WorkDate,ReasonId,Action,Defect,Remark) "
                  "output inserted.id values(:ModulId,:Reclamation,:WorkDate,:ReasonId,:Action,:Defect,:Remark)");

    query.bindValue(":ModulId", rem.EntityId);
    query.bindValue(":Reclamation", rem.reclamtion);
    query.bindValue(":WorkDate", rem.workDate);
    query.bindValue(":ReasonId", rem.reasonId);
    query.bindValue(":Action", rem.action);
    query.bindValue(":Defect", rem.defect);
    query.bindValue(":Remark", rem.remark);

    res = query.exec();

    if(!res)
        qDebug() << "Ошибка при добавлении записи в RemontM";
    else
    {
        if(query.next())
        {
            rem.id = query.value(0).toInt();
            rem.listRemStep.last().RemontMId = rem.id;
            res = AddRemontMStep(rem.listRemStep.last());
        }
    }

    if(res)
        db.commit();
    else
        db.rollback();

    return res;

}

//------------------------------------------------------------------------------------------------------
// Добавление ремонта
//------------------------------------------------------------------------------------------------------
bool RepoMSSQL::AddRemontP(RemontM &rem)
{
    bool res;
    QSqlQuery query;

    db.transaction();

    query.prepare("insert into RemontP (ProductId,Reclamation,WorkDate,ReasonId,Action,Defect,Remark) "
                  "output inserted.id values(:ProductId,:Reclamation,:WorkDate,:ReasonId,:Action,:Defect,:Remark)");

    query.bindValue(":ProductId", rem.EntityId);
    query.bindValue(":Reclamation", rem.reclamtion);
    query.bindValue(":WorkDate", rem.workDate);
    query.bindValue(":ReasonId", rem.reasonId);
    query.bindValue(":Action", rem.action);
    query.bindValue(":Defect", rem.defect);
    query.bindValue(":Remark", rem.remark);

    res = query.exec();

    if(!res)
        qDebug() << "Ошибка при добавлении записи в RemontM";
    else
    {
        if(query.next())
        {
            rem.id = query.value(0).toInt();
            rem.listRemStep.last().RemontMId = rem.id;
            res = AddRemontPStep(rem.listRemStep.last());
        }
    }

    if(res)
        db.commit();
    else
        db.rollback();

    return res;

}


//------------------------------------------------------------------------------------------------------
// Добавление статуса ремонта
//------------------------------------------------------------------------------------------------------
bool RepoMSSQL::AddRemontMStep(RemontStep &remStep)
{
    bool res;
    QSqlQuery query;

    query.prepare("insert into RemontMStep (RemontMId,StatusId,Comment,DateStep) "
                  "output inserted.id values(:RemontMId,:StatusId,:Comment,:DateStep)");

    query.bindValue(":RemontMId", remStep.RemontMId);
    query.bindValue(":StatusId", remStep.StatusId);
    query.bindValue(":Comment", remStep.Comment);
    query.bindValue(":DateStep", remStep.dateStep);

    res = query.exec();

    if(query.next())
    {
        remStep.id = query.value(0).toInt();
    }

    if(!res)
        qDebug() << "Ошибка при добавлении записи в RemontMStep";

    return res;
}

//------------------------------------------------------------------------------------------------------
// Добавление статуса ремонта
//------------------------------------------------------------------------------------------------------
bool RepoMSSQL::AddRemontPStep(RemontStep &remStep)
{
    bool res;
    QSqlQuery query;

    query.prepare("insert into RemontPStep (RemontPId,StatusId,Comment,DateStep) "
                  "output inserted.id values(:RemontPId,:StatusId,:Comment,:DateStep)");

    query.bindValue(":RemontPId", remStep.RemontMId);
    query.bindValue(":StatusId", remStep.StatusId);
    query.bindValue(":Comment", remStep.Comment);
    query.bindValue(":DateStep", remStep.dateStep);

    res = query.exec();

    if(query.next())
    {
        remStep.id = query.value(0).toInt();
    }

    if(!res)
        qDebug() << "Ошибка при добавлении записи в RemontMStep";

    return res;
}


//------------------------------------------------------------------------------------------------------
// Загрузка причин ремонта
//------------------------------------------------------------------------------------------------------
 void RepoMSSQL::LoadRemontReason(QMap<int, QString> &listReason)
{
    listReason.clear();
    QSqlQuery query;
    query.prepare("select id,name from RemontReason");

    query.exec();
    while(query.next())
    {
        listReason.insert(query.value(0).toInt(), query.value(1).toString());
    }
}

//------------------------------------------------------------------------------------------------------
// Загрузка списка ремонтов
//------------------------------------------------------------------------------------------------------
void RepoMSSQL::LoadRemontM(QList<RemontM> &list, int idModul)
{
    list.clear();
    QSqlQuery query;
    query.prepare("select r.id,WorkDate,ReasonId,Action,Defect,Remark,rr.name,EndDate "
                  "from RemontM r join RemontReason rr on rr.id=r.ReasonId where r.ModulId = :ModulId");

    query.bindValue(":ModulId", idModul);

    query.exec();
    while(query.next())
    {
        RemontM rem;
        rem.id = query.value(0).toInt();
        rem.workDate = query.value(1).toDateTime();
        rem.reasonId = query.value(2).toInt();
        rem.action = query.value(3).toString();
        rem.defect = query.value(4).toString();
        rem.remark = query.value(5).toString();
        rem.reasonName = query.value(6).toString();
        rem.EndDate = query.value(7).toDateTime();
        rem.EntityId = idModul;

        list.push_back(rem);
        LoadRemontMStep(list.last());
    }
}

//------------------------------------------------------------------------------------------------------
// Загрузка списка этапов ремонта
//------------------------------------------------------------------------------------------------------
void RepoMSSQL::LoadRemontMStep(RemontM &rem)
{
    rem.listRemStep.clear();
    QSqlQuery query;
    query.prepare("select rs.id,StatusId,Comment,DateStep,rss.NameStatus,rss.InWork "
                  "from RemontMStep rs join RemontStepStatus rss on rss.id=rs.StatusId where rs.RemontMId = :RemontMId");

    query.bindValue(":RemontMId", rem.id);

    query.exec();
    while(query.next())
    {
        RemontStep step;
        step.id = query.value(0).toInt();
        step.StatusId = query.value(1).toInt();
        step.Comment = query.value(2).toString();
        step.dateStep = query.value(3).toDateTime();
        step.status.name = query.value(4).toString();
        step.status.id = step.StatusId;
        step.status.inWork = query.value(5).toBool();
        step.RemontMId = rem.id;
        rem.listRemStep.push_back(step);
    }
}



//------------------------------------------------------------------------------------------------------
// Загрузка списка статусов ремонта
//------------------------------------------------------------------------------------------------------


void RepoMSSQL::LoadRemontStatus(QList<RemontStepStatus> &listStatus, RemontStepStatus::TypeStatus type)
{
    listStatus.clear();
    QSqlQuery query;

    if(type == RemontStepStatus::ALL)
        query.prepare("select id,NameStatus,InWork from RemontStepStatus");
    else
    {
        query.prepare("select id,NameStatus,InWork from RemontStepStatus where InWork=:InWork");
        query.bindValue(":InWork", type);
    }

    query.exec();
    while(query.next())
    {
        RemontStepStatus status;
        status.id = query.value(0).toInt();
        status.name = query.value(1).toString();
        status.inWork = query.value(2).toInt();;

        listStatus.push_back(status);
    }

}

//------------------------------------------------------------------------------------------------------
// Загрузка списка ремонтов
//------------------------------------------------------------------------------------------------------
void RepoMSSQL::LoadRemontP(QList<RemontM> &list, int id)
{
    list.clear();
    QSqlQuery query;
    query.prepare("select r.id,WorkDate,ReasonId,Action,Defect,Remark,rr.name,EndDate "
                  "from RemontP r join RemontReason rr on rr.id=r.ReasonId where r.ProductId = :ProductId");

    query.bindValue(":ProductId", id);

    query.exec();
    while(query.next())
    {
        RemontM rem;
        rem.id = query.value(0).toInt();
        rem.workDate = query.value(1).toDateTime();
        rem.reasonId = query.value(2).toInt();
        rem.action = query.value(3).toString();
        rem.defect = query.value(4).toString();
        rem.remark = query.value(5).toString();
        rem.reasonName = query.value(6).toString();
        rem.EndDate = query.value(7).toDateTime();
        rem.EntityId = id;

        list.push_back(rem);
        LoadRemontPStep(list.last());
    }
}

void RepoMSSQL::LoadRemontPStep(RemontM &rem)
{
    rem.listRemStep.clear();
    QSqlQuery query;
    query.prepare("select rs.id,StatusId,Comment,DateStep,rss.NameStatus,rss.InWork "
                  "from RemontPStep rs join RemontStepStatus rss on rss.id=rs.StatusId where rs.RemontPId = :RemontPId");

    query.bindValue(":RemontPId", rem.id);

    query.exec();
    while(query.next())
    {
        RemontStep step;
        step.id = query.value(0).toInt();
        step.StatusId = query.value(1).toInt();
        step.Comment = query.value(2).toString();
        step.dateStep = query.value(3).toDateTime();
        step.status.name = query.value(4).toString();
        step.status.id = step.StatusId;
        step.status.inWork = query.value(5).toBool();
        step.RemontMId = rem.id;
        rem.listRemStep.push_back(step);
    }

}

void RepoMSSQL::LoadClaim(QList<Claim> &listClaim)
{
    listClaim.clear();
    QSqlQuery query;
    query.prepare("select c.id,Number,DateClaim,FromWho,TypeClaimId,idOrg,ObjectInstall,"
                  "Descript,TypeComplectId,VNFT,Quantity,TypeDeviceId,NumberModul,NumberNewModul,"
                  "NumberDevice,DateOut,Guarantee,Reason,DateRepair,DoRepair,FileAnswer,TextResult,"
                  "ct.nameType "
                  "from Claim c "
                  "join ClaimType ct on ct.id=c.TypeClaimId");

    query.exec();
    while(query.next())
    {
        Claim claim;

        claim.id = query.value(0).toInt();
        claim.Number = query.value(1).toString();
        claim.DateClaim = query.value(2).toDateTime();
        claim.FromWho = query.value(3).toString();
        claim.TypeClaimId = query.value(4).toInt();
        claim.idOrg = query.value(5).toInt();
        claim.ObjectInstall = query.value(6).toString();
        claim.Descript = query.value(7).toString();
        claim.TypeComplectId = query.value(8).toInt();
        claim.VNFT = query.value(9).toString();
        claim.Quantity = query.value(10).toInt();
        claim.TypeDeviceId = query.value(11).toInt();
        claim.NumberModul = query.value(12).toString();
        claim.NumberNewModul = query.value(13).toString();
        claim.NumberDevice = query.value(14).toString();
        claim.DateOut = query.value(15).toDateTime();
        claim.IsGuarantee = query.value(16).toBool();
        claim.Reason = query.value(17).toString();
        claim.DateRepair = query.value(18).toDateTime();
        claim.DoRepair = query.value(19).toString();
        claim.FileAnswer = query.value(20).toString();
        claim.TextResult = query.value(21).toString();
        claim.TypeClaimString = query.value(22).toString();
        claim.TypeComplectString = query.value(23).toString();
        claim.TypeDeviceString = query.value(24).toString();
        listClaim.push_back(claim);
    }
}

//------------------------------------------------------------------------------------------------------
// Добавление перетензии
//------------------------------------------------------------------------------------------------------
bool RepoMSSQL::InsertClaim(Claim *claim)
{
    bool res;
    QSqlQuery query;

    query.prepare("insert into Claim (Number,DateClaim,FromWho,TypeClaimId,idOrg,ObjectInstall,"
                  "Descript,TypeComplectId,VNFT,Quantity,TypeDeviceId,NumberModul,NumberNewModul,"
                  "NumberDevice,DateOut,Guarantee,Reason,DateRepair,DoRepair,FileAnswer,TextResult) "
                  "output inserted.id values(:Number,:DateClaim,:FromWho,:TypeClaimId,:idOrg,:ObjectInstall,"
                  ":Descript,:TypeComplectId,:VNFT,:Quantity,:TypeDeviceId,:NumberModul,:NumberNewModul,"
                  ":NumberDevice,:DateOut,:Guarantee,:Reason,:DateRepair,:DoRepair,:FileAnswer,:TextResult)");

    query.bindValue(":Number", claim->Number);
    query.bindValue(":DateClaim", claim->DateClaim);
    query.bindValue(":FromWho", claim->FromWho);
    query.bindValue(":TypeClaimId", claim->TypeClaimId);
    query.bindValue(":idOrg", claim->idOrg);
    query.bindValue(":ObjectInstall", claim->ObjectInstall);
    query.bindValue(":Descript", claim->Descript);
    query.bindValue(":TypeComplectId", claim->TypeComplectId);
    query.bindValue(":VNFT", claim->VNFT);
    query.bindValue(":Quantity", claim->Quantity);
    query.bindValue(":TypeDeviceId", claim->TypeDeviceId);
    query.bindValue(":NumberModul", claim->NumberModul);
    query.bindValue(":NumberNewModul", claim->NumberNewModul);
    query.bindValue(":NumberDevice", claim->NumberDevice);
    query.bindValue(":DateOut", claim->DateOut);
    query.bindValue(":Guarantee", claim->IsGuarantee);
    query.bindValue(":Reason", claim->Reason);
    query.bindValue(":DateRepair", claim->DateRepair);
    query.bindValue(":DoRepair", claim->DoRepair);
    query.bindValue(":FileAnswer", claim->FileAnswer);
    query.bindValue(":TextResult", claim->TextResult);

    res = query.exec();

    if(query.next())
    {
        claim->id = query.value(0).toInt();
    }

    if(!res)
        qDebug() << "Ошибка при добавлении записи в Claim";

    return res;

}

//------------------------------------------------------------------------------------------------------
// Изменение перетензии
//------------------------------------------------------------------------------------------------------
bool RepoMSSQL::UpdateClaim(Claim *claim)
{
    bool res;
    QSqlQuery query;

    query.prepare("update Claim set Number=:Number,DateClaim=:DateClaim,FromWho=:FromWho,TypeClaimId=:TypeClaimId,"
                  "idOrg=:idOrg,ObjectInstall=:ObjectInstall,Descript=:Descript,"
                  "TypeComplectId=:TypeComplectId,VNFT=:VNFT,Quantity=:Quantity,TypeDeviceId=:TypeDeviceId,"
                  "NumberModul=:NumberModul,NumberNewModul=:NumberNewModul,NumberDevice=:NumberDevice,"
                  "DateOut=:DateOut,Guarantee=:Guarantee,Reason=:Reason,DateRepair=:DateRepair,DoRepair=:DoRepair,"
                  "FileAnswer=:FileAnswer,TextResult=:TextResult "
                  "where id=:id");

    query.bindValue(":id", claim->id);
    query.bindValue(":Number", claim->Number);
    query.bindValue(":DateClaim", claim->DateClaim);
    query.bindValue(":FromWho", claim->FromWho);
    query.bindValue(":TypeClaimId", claim->TypeClaimId);
    query.bindValue(":idOrg", claim->idOrg);
    query.bindValue(":ObjectInstall", claim->ObjectInstall);
    query.bindValue(":Descript", claim->Descript);
    query.bindValue(":TypeComplectId", claim->TypeComplectId);
    query.bindValue(":VNFT", claim->VNFT);
    query.bindValue(":Quantity", claim->Quantity);
    query.bindValue(":TypeDeviceId", claim->TypeDeviceId);
    query.bindValue(":NumberModul", claim->NumberModul);
    query.bindValue(":NumberNewModul", claim->NumberNewModul);
    query.bindValue(":NumberDevice", claim->NumberDevice);
    query.bindValue(":DateOut", claim->DateOut);
    query.bindValue(":Guarantee", claim->IsGuarantee);
    query.bindValue(":Reason", claim->Reason);
    query.bindValue(":DateRepair", claim->DateRepair);
    query.bindValue(":DoRepair", claim->DoRepair);
    query.bindValue(":FileAnswer", claim->FileAnswer);
    query.bindValue(":TextResult", claim->TextResult);
    res = query.exec();

    if(!res)
        qDebug() << "Ошибка при добавлении записи в Claim";

    return res;

}

//------------------------------------------------------------------------------------------------------
// Удаление перетензии
//------------------------------------------------------------------------------------------------------
bool RepoMSSQL::DeleteClaim(int id)
{
    bool res;
    QSqlQuery query;

    query.prepare("delete from Claim where id=:id");

    query.bindValue(":id", id);

    res = query.exec();

    if(!res)
        qDebug() << "Ошибка при добавлении записи в Claim";

    return res;

}

//------------------------------------------------------------------------------------------------------
// Загрузка типов рекламаций
//------------------------------------------------------------------------------------------------------
void RepoMSSQL::LoadClaimType(QMap<int, QString> &listTypeClaim)
{
    listTypeClaim.clear();
    QSqlQuery query;
    query.prepare("select id,NameType from ClaimType");

    query.exec();
    while(query.next())
    {
        listTypeClaim.insert(query.value(0).toInt(), query.value(1).toString());
    }
}

//------------------------------------------------------------------------------------------------------
// Загрузка типов модулей
//------------------------------------------------------------------------------------------------------
void RepoMSSQL::LoadModuleType(QMap<int, QString> &listTypeModule)
{
    listTypeModule.clear();
    QSqlQuery query;
    query.prepare("select id,mt_name from ModuleType");

    query.exec();
    while(query.next())
    {
        listTypeModule.insert(query.value(0).toInt(), query.value(1).toString());
    }
}

bool RepoMSSQL::AddModul(Modul &modul)
{
    bool res;
    QSqlQuery query;

    query.prepare("insert into Modules (m_modTypeId,m_name,m_number,m_numberFW,m_dateCreate) "
                  "output inserted.id values(:m_modTypeId,:m_name,:m_number,:m_numberFW,:m_dateCreate)");

    query.bindValue(":m_modTypeId", modul.modTypeId);
    query.bindValue(":m_name", modul.name);
    query.bindValue(":m_number", modul.number);
    query.bindValue(":m_numberFW", modul.numberFW);
    query.bindValue(":m_dateCreate", modul.dateCreate);

    res = query.exec();
    if(!res)
        qDebug() << "Ошибка при добавлении записи в RemontM";
    else
    {
        if(query.next())
            modul.id = query.value(0).toInt();
    }

    return res;

}

bool RepoMSSQL::DeleteModul(int id)
{
    bool res;
    QSqlQuery query;

    query.prepare("delete from Modules where id=:id");
    query.bindValue(":id", id);
    res = query.exec();

    if(!res)
        qDebug() << "Ошибка при добавлении записи в RemontM";

    return res;

}

//------------------------------------------------------------------------------------------------------
// Загрузка типов изделий
//------------------------------------------------------------------------------------------------------
void RepoMSSQL::LoadProductType(QMap<int, QString> &listTypeProduct)
{
    listTypeProduct.clear();
    QSqlQuery query;
    query.prepare("select id,gt_name from ProductType");

    query.exec();
    while(query.next())
    {
        listTypeProduct.insert(query.value(0).toInt(), query.value(1).toString());
    }
}


bool RepoMSSQL::AddProduct(Product &prod)
{
    bool res;
    QSqlQuery query;

    query.prepare("insert into Product (g_ProductTypeId,g_name,g_number,g_numberBox,g_dateRegister,"
                  "g_redaction1,g_redaction2,g_redactionPS,g_questList,g_avr,g_akb,g_cooler,g_skm,g_numberBI,"
                  "g_numberUSIKP,g_shunt,g_zip) "
                  "output inserted.id values(:g_ProductTypeId,:g_name,:g_number,:g_numberBox,:g_dateRegister,"
                  ":g_redaction1,:g_redaction2,:g_redactionPS,:g_questList,:g_avr,:g_akb,:g_cooler,:g_skm,:g_numberBI,"
                  ":g_numberUSIKP,:g_shunt,:g_zip)");

    query.bindValue(":g_ProductTypeId", prod.prodTypeId);
    query.bindValue(":g_name", prod.name);
    query.bindValue(":g_number", prod.number);
    query.bindValue(":g_numberBox", prod.numberBox);
    query.bindValue(":g_dateRegister", prod.dateRegister);
    query.bindValue(":g_redaction1", prod.redaction1);
    query.bindValue(":g_redaction2", prod.redaction2);
    query.bindValue(":g_redactionPS", prod.redactionPS);
    query.bindValue(":g_questList", prod.questList);
    query.bindValue(":g_avr", prod.isAvr);
    query.bindValue(":g_akb", prod.isAkb);
    query.bindValue(":g_cooler", prod.isCooler);
    query.bindValue(":g_skm", prod.isSkm);
    query.bindValue(":g_numberBI", prod.numberBI);
    query.bindValue(":g_numberUSIKP", prod.numberUSIKP);
    query.bindValue(":g_shunt", prod.shunt);
    query.bindValue(":g_zip", prod.isZip);

    res = query.exec();
    if(!res)
        qDebug() << "Ошибка при добавлении записи в RemontM";
    else
    {
        if(query.next())
            prod.id = query.value(0).toInt();
    }

    return res;

}

bool RepoMSSQL::DeleteProduct(int id)
{
    bool res;
    QSqlQuery query;

    query.prepare("delete from Product where id=:id");
    query.bindValue(":id", id);
    res = query.exec();

    if(!res)
        qDebug() << "Ошибка при добавлении записи в RemontM";

    return res;

}

