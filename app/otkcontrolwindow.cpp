#include "otkcontrolwindow.h"
#include "ui_otkcontrolwindow.h"

OTKControlWindow::OTKControlWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::OTKControlWindow)
{
    ui->setupUi(this);

    // получить списки изделий и модулей, требующих проверку
    repo.LoadModulsStatus(listModul, 1);

    for(auto &it : listModul)
    {
        QListWidgetItem *item = new QListWidgetItem();
        item->setText(it.number);
        item->setData(Qt::UserRole, it.id);
        ui->lwModul->addItem(item);
    }

    repo.LoadProducts(listProduct, 1);
    for(auto &it : listProduct)
    {
        QListWidgetItem *item = new QListWidgetItem();
        item->setText(it.number);
        item->setData(Qt::UserRole, it.id);
        ui->lwProduct->addItem(item);
    }
}

OTKControlWindow::~OTKControlWindow()
{
    delete ui;
}


//---------------------------------------------------------------------------------------
// Кнопка Модуль Проверку прошел
//---------------------------------------------------------------------------------------
void OTKControlWindow::on_pbCheck_clicked()
{
    QListWidgetItem *item = ui->lwModul->currentItem();
    if(item == nullptr)
        return;
    QListWidgetItem *item2 = new QListWidgetItem(*item);
    int idModul = item->data(Qt::UserRole).toInt();

    Status status;
    status.idDevice = idModul;
    status.idStatus = 3;
    status.dateStatus = QDateTime::currentDateTime();

    listStatus[idModul] = status;;

    ui->lwChecked->addItem(item2);
    delete item;
}


//---------------------------------------------------------------------------------------
// Кнопка Модуль Проверку не прошел
//---------------------------------------------------------------------------------------
void OTKControlWindow::on_pbBroken_clicked()
{
    QListWidgetItem *item = ui->lwModul->currentItem();
    if(item == nullptr)
        return;

    QListWidgetItem *item2 = new QListWidgetItem(*item);
    int idModul = item->data(Qt::UserRole).toInt();

    Status status;
    status.idDevice = idModul;
    status.idStatus = 2;
    status.dateStatus = QDateTime::currentDateTime();
    listStatus[idModul] = status;;
    ui->lwBroken->addItem(item2);
    delete item;
}


//---------------------------------------------------------------------------------------
// Кнопка Модуль Удалить из списка прошедших проверку
//---------------------------------------------------------------------------------------
void OTKControlWindow::on_tbDelCheck_clicked()
{
    QListWidgetItem *item = ui->lwChecked->currentItem();
    if(item == nullptr)
        return;

    int idModul = item->data(Qt::UserRole).toInt();
    QListWidgetItem *item2 = new QListWidgetItem(*item);
    ui->lwModul->addItem(item2);

    listStatus.remove(idModul);

    delete item;
}


//---------------------------------------------------------------------------------------
// Кнопка Модуль Удалить из списка не прошедших проверку
//---------------------------------------------------------------------------------------
void OTKControlWindow::on_tbDelBroken_clicked()
{
    QListWidgetItem *item = ui->lwBroken->currentItem();
    if(item == nullptr)
        return;

    int idModul = item->data(Qt::UserRole).toInt();
    QListWidgetItem *item2 = new QListWidgetItem(*item);
    ui->lwModul->addItem(item2);

    listStatus.remove(idModul);
    delete item;

}


//---------------------------------------------------------------------------------------
// Кнопка Изелие Проверку прошел
//---------------------------------------------------------------------------------------
void OTKControlWindow::on_pbCheckProd_clicked()
{
    QListWidgetItem *item = ui->lwProduct->currentItem();
    if(item == nullptr)
        return;
    QListWidgetItem *item2 = new QListWidgetItem(*item);
    int idProd = item->data(Qt::UserRole).toInt();

    Status status;
    status.idDevice = idProd;
    status.idStatus = 3;
    status.dateStatus = QDateTime::currentDateTime();

    listStatusProd[idProd] = status;;

    ui->lwCheckedProd->addItem(item2);
    delete item;
}


//---------------------------------------------------------------------------------------
// Кнопка Изелие Проверку не прошел
//---------------------------------------------------------------------------------------
void OTKControlWindow::on_pbBrokenProd_clicked()
{
    QListWidgetItem *item = ui->lwProduct->currentItem();
    if(item == nullptr)
        return;

    QListWidgetItem *item2 = new QListWidgetItem(*item);
    int idProd = item->data(Qt::UserRole).toInt();

    Status status;
    status.idDevice = idProd;
    status.idStatus = 2;
    status.dateStatus = QDateTime::currentDateTime();
    listStatusProd[idProd] = status;;
    ui->lwBrokenProd->addItem(item2);
    delete item;
}


//---------------------------------------------------------------------------------------
// Кнопка Изелие Удалить из списка прошедших проверку
//---------------------------------------------------------------------------------------
void OTKControlWindow::on_tbDelCheckProd_clicked()
{
    QListWidgetItem *item = ui->lwCheckedProd->currentItem();
    if(item == nullptr)
        return;

    int idProd = item->data(Qt::UserRole).toInt();
    QListWidgetItem *item2 = new QListWidgetItem(*item);
    ui->lwProduct->addItem(item2);

    listStatusProd.remove(idProd);

    delete item;
}


//---------------------------------------------------------------------------------------
// Кнопка Изелие Удалить из списка не прошедших проверку
//---------------------------------------------------------------------------------------
void OTKControlWindow::on_tbDelBrokenProd_clicked()
{
    QListWidgetItem *item = ui->lwBrokenProd->currentItem();
    if(item == nullptr)
        return;

    int idProd = item->data(Qt::UserRole).toInt();
    QListWidgetItem *item2 = new QListWidgetItem(*item);
    ui->lwProduct->addItem(item2);

    listStatusProd.remove(idProd);
    delete item;

}



//---------------------------------------------------------------------------------------
// подтверждение записи в базу при закрытии окна
//---------------------------------------------------------------------------------------
void OTKControlWindow::on_OTKControlWindow_accepted()
{
    for(auto &it : listStatus)
        repo.AddStatusModul(it);

    for(auto &it : listStatusProd)
        repo.AddStatusProduct(it);
}

