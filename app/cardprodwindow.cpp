#include "cardprodwindow.h"
#include "remontstatuswindow.h"
#include "remontwindow.h"
#include "ui_cardprodwindow.h"

//-------------------------------------------------------------------------------------------------------
// Конструктор
//-------------------------------------------------------------------------------------------------------
CardProdWindow::CardProdWindow(const QString &name, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::CardProdWindow)
{
    ui->setupUi(this);
    setWindowTitle("Карточка изделия " + name);

}

//-------------------------------------------------------------------------------------------------------
// Конструктор для модуля
//-------------------------------------------------------------------------------------------------------
CardProdWindow::CardProdWindow(Modul &mod, QWidget *parent) : CardProdWindow(mod.name, parent)
{
    modul = mod;
    Product prod = repo.GetProduct(modul.idProduct);
    number = mod.number;
    // ui->leNumber->setText(mod.number);
    loadShipmentToForm(&prod);

    repo.LoadRemontM(modul.listRemont, modul.id);

    for(auto &it : modul.listRemont)
    {
        AddRowRemont(it);
    }
}

void CardProdWindow::AddRowRemont(RemontM &rem)
{
    QTreeWidgetItem *top = new QTreeWidgetItem();
    top->setText(0, rem.reclamtion);
    top->setText(1, rem.workDate.toString("dd.MM.yyyy"));
    top->setText(2, rem.EndDate.toString("dd.MM.yyyy"));
    top->setText(3, rem.reasonName);
    top->setText(4, rem.action);
    top->setText(5, rem.defect);
    top->setText(6, rem.remark);
    top->setData(0, Qt::UserRole, rem.id);
    if(rem.listRemStep.size() > 0)
        top->setText(7, rem.listRemStep.last().status.name);
    ui->trwRemont->addTopLevelItem(top);

    for(auto const &it2 : rem.listRemStep)
    {
        QTreeWidgetItem *child = new QTreeWidgetItem();
        child->setText(1, it2.dateStep.toString("dd.MM.yyyy"));
        child->setText(2, it2.status.name);
        child->setText(3, it2.Comment);
        top->addChild(child);
    }

}


//-------------------------------------------------------------------------------------------------------
// Конструктор для изделия
//-------------------------------------------------------------------------------------------------------
CardProdWindow::CardProdWindow(Product *prod, QWidget *parent) : CardProdWindow(prod->name, parent)
{
    repo.LoadChildProduct(*prod);
    number = prod->number;
    // ui->leNumber->setText(prod->number);
    loadInclude(prod);
    loadShipmentToForm(prod);
}

CardProdWindow::~CardProdWindow()
{
    delete ui;
}


//-------------------------------------------------------------------------------------------------------
// Загрузка набора для выбраннного изделия или модуля
//-------------------------------------------------------------------------------------------------------
void CardProdWindow::loadShipmentToForm(const Product *prod)
{
    SetterOut setter = repo.GetSetterOut(prod->idSetterOut);
    Shipment ship = repo.GetShipment(setter.idShipment);

    repo.LoadChildSetter(setter);
    for(auto &it: setter.listProduct)
    {
        repo.LoadChildProduct(it);
    }

    ui->leNumber->setText(number);
    ui->leContract->setText(ship.schet);
    ui->leCardOrder->setText(ship.cardOrder);
    ui->leObjectInstall->setText(ship.objectInstall);
    ui->leProduction->setText(prod->name);

    QTreeWidgetItem *top = new QTreeWidgetItem();
    top->setText(0, setter.name);
    ui->treeWidget->addTopLevelItem(top);
    top->setExpanded(true);
    for(auto const &it : setter.listProduct)
    {
        QTreeWidgetItem *child = new QTreeWidgetItem();
        child->setText(0, it.name + "(" + it.number + ")");
        if(it.number == number)
        {
            QFont font;
            font.setBold(true);
            child->setFont(0, font);
        }
        top->addChild(child);
        child->setExpanded(true);
        for(auto const &mod : it.listModules)
        {
            QTreeWidgetItem *modItem = new QTreeWidgetItem();
            modItem->setText(0, mod.name + "(" + mod.number + ")");
            if(mod.number == number)
            {
                QFont font;
                font.setBold(true);
                modItem->setFont(0, font);
            }
            child->addChild(modItem);
        }
    }
}

//-------------------------------------------------------------------------------------------------------
// Загрузка состава изделия
//-------------------------------------------------------------------------------------------------------
void CardProdWindow::loadInclude(const Product *prod)
{
    for(auto const &mod : prod->listModules)
    {
        QListWidgetItem *modItem = new QListWidgetItem();
        modItem->setText(mod.name + "(" + mod.number + ")");
        ui->lwInclude->addItem(modItem);
    }
}



//-------------------------------------------------------------------------------------------------------
// Кнопка добавления ремонта
//-------------------------------------------------------------------------------------------------------
void CardProdWindow::on_pbAddRemont_clicked()
{
    RemontWindow *win = new RemontWindow(&modul, this);
    if(win->exec() == QDialog::Accepted)
        AddRowRemont(modul.listRemont.last());

}


//-------------------------------------------------------------------------------------------------------
// Кнопка Изменение статуса
//-------------------------------------------------------------------------------------------------------
void CardProdWindow::on_pbEditStatus_clicked()
{
    // найти текущий ремонт в модуле
    auto res = std::find_if(modul.listRemont.cbegin(), modul.listRemont.cend(),
                            [] (const RemontM &step) { return step.EndDate.isNull(); });

    if(res == modul.listRemont.cend())
        return;

    RemontM rem = *res;

    QTreeWidgetItem *top = nullptr;
    for(int row = 0; row < ui->trwRemont->topLevelItemCount(); ++row)
    {
        if(ui->trwRemont->topLevelItem(row)->data(0, Qt::UserRole).toInt() == rem.id)
        {
            top = ui->trwRemont->topLevelItem(row);
            break;
        }
    }

    if(top == nullptr)
        return;

    RemontStatusWindow *win = new RemontStatusWindow(&rem, this);
    if(win->exec() == QDialog::Accepted)
    {
        RemontStep step = rem.listRemStep.last();
        QTreeWidgetItem *child = new QTreeWidgetItem();
        child->setText(1, step.dateStep.toString("dd.MM.yyyy"));
        child->setText(2, step.status.name);
        child->setText(3, step.Comment);
        top->addChild(child);
        top->setText(7, step.status.name);
        top->setText(2, rem.EndDate.toString("dd.MM.yyyy"));

        repo.AddRemontStep(step);
    }
}


//-------------------------------------------------------------------------------------------------------
//
//-------------------------------------------------------------------------------------------------------

