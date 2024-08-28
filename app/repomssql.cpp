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
                     "from Modules where m_number like :number");

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
        mod.isZip = query.value(9).toBool();
        listModul.push_back(mod);
    }

    // qDebug() << db.lastError().text();
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
        mod.isZip = query.value(8).toBool();
    }

    // qDebug() << db.lastError().text();

    return mod;
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
                  "from Product where g_number like :number");

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
        listProduct.push_back(prod);
    }
    // qDebug() << db.lastError().text();

}

//------------------------------------------------------------------------------------------------------
// Поиск изделия по id
//------------------------------------------------------------------------------------------------------
Product RepoMSSQL::GetProduct(const int id)
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

    }

    return prod;

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
                  "c_schet,c_cardOrder,c_numberUPD,c_buyer "
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

    query.bindValue(":ModulId", rem.modulId);
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
            res = AddRemontStep(rem.listRemStep.last());
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
bool RepoMSSQL::AddRemontStep(RemontStep &remStep)
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
        rem.modulId = idModul;

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


