#include "createdevicewindow.h"
#include "selectplatewindow.h"
#include "ui_createdevicewindow.h"

#include <models/product.h>

CreateDeviceWindow::CreateDeviceWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::CreateDeviceWindow), selectIdPlate(0)
{
    ui->setupUi(this);

    repo.LoadModuleType(listTypeModule);
    repo.LoadProductType(listTypeProduct);

    for(auto it = listTypeModule.cbegin(); it != listTypeModule.cend(); ++it)
        ui->cbModul->addItem(*it, it.key());

    for(auto it = listTypeProduct.cbegin(); it != listTypeProduct.cend(); ++it)
        ui->cbProduct->addItem(*it, it.key());

    ui->pbPrev->setVisible(false);

}

CreateDeviceWindow::~CreateDeviceWindow()
{
    delete ui;
}



//---------------------------------------------------------------------------------
// Удаление модуля
//---------------------------------------------------------------------------------
void CreateDeviceWindow::on_tbDeleteModul_clicked()
{
    // удалить устройство из базы
    int id = ui->lwModul->currentItem()->data(Qt::UserRole).toInt();
    if(repo.DeleteModul(id))
        delete ui->lwModul->currentItem();
}


//---------------------------------------------------------------------------------
// Выбор платы по серийному номеру
//---------------------------------------------------------------------------------
void CreateDeviceWindow::on_tbSearchPlate_clicked()
{
    QString s = ui->leSearchPlate->text();
    QList<Plate> listPlate;
    repo.FindPlate(s, listPlate);

    if(listPlate.size() == 0)
        return;

    int currentIndex = 0;

    if(listPlate.size() > 1)
    {
        SelectPlateWindow win(listPlate, this);
        if(win.exec() == QDialog::Accepted)
        {
            currentIndex = win.selectedIndex;
        }
        else
            return;
    }

    Plate plate = listPlate.at(currentIndex);

    selectIdPlate = plate.id;
    ui->lbNumberPlate->setText(plate.number);
    ui->lbDatePlate->setText(plate.createDate.toString("dd.MM.yyyy"));
    ui->lbNumberFWPlate->setText(plate.numberFW);
    ui->lbNumberDocPlate->setText(plate.numberDoc);
    ui->lbVNFTPlate->setText(plate.VNFT);

    ui->lbNumberPlate_2->setText(plate.number);
    ui->lbDatePlate_2->setText(plate.createDate.toString("dd.MM.yyyy"));
    ui->lbNumberFWPlate_2->setText(plate.numberFW);
    ui->lbNumberDocPlate_2->setText(plate.numberDoc);
    ui->lbVNFTPlate_2->setText(plate.VNFT);

}



//---------------------------------------------------------------------------------
// Удаление изделия
//---------------------------------------------------------------------------------
void CreateDeviceWindow::on_tbDeleteProduct_clicked()
{
    int id = ui->lwProduct->currentItem()->data(Qt::UserRole).toInt();
    if(repo.DeleteProduct(id))
        delete ui->lwProduct->currentItem();

}




//---------------------------------------------------------------------------------
// Кнопка Назад
//---------------------------------------------------------------------------------
void CreateDeviceWindow::on_pbPrev_clicked()
{
    switch(ui->stackedWidget->currentIndex())
    {
        case 1:
        case 2:
            ui->stackedWidget->setCurrentIndex(0);
            ui->pbPrev->setVisible(false);
            break;

        case 3:
            ui->stackedWidget->setCurrentIndex(2);
            ui->leSearchPlate->setFocus();
            break;
    }
    ui->pbNext->setText("Далее");
}



//---------------------------------------------------------------------------------
// Кнопка Вперед
//---------------------------------------------------------------------------------
void CreateDeviceWindow::on_pbNext_clicked()
{
    QString s;
    Product prod;
    Modul mod;

    switch(ui->stackedWidget->currentIndex())
    {
    case 0:
        if(ui->rbProd->isChecked())
        {
            ui->stackedWidget->setCurrentIndex(1);
            ui->pbNext->setText("Добавить");
        }
        else
        {
            ui->stackedWidget->setCurrentIndex(2);
            ui->leSearchPlate->setFocus();
        }

        ui->pbPrev->setVisible(true);
        break;

    case 1:
        if(ui->leNumProduct->text().isEmpty())
            return;
        // Добавление изделия в  базу данных со статусом Создан
        prod.number = ui->leNumProduct->text();
        prod.prodTypeId = ui->cbProduct->currentData(Qt::UserRole).toInt();
        prod.dateRegister = QDateTime::currentDateTime();
        if(repo.AddProduct(prod))
        {
            s = ui->cbProduct->currentText();
            QListWidgetItem *item = new QListWidgetItem(ui->leNumProduct->text() + " (" + s + ")");
            item->setData(Qt::UserRole, prod.id);
            ui->lwProduct->addItem(item);
            ui->leNumProduct->clear();
            ui->leNumProduct->setFocus();
        }
        break;

    case 2:
        ui->lbTypeModul->setText(ui->cbModul->currentText());
        ui->stackedWidget->setCurrentIndex(3);
        ui->pbNext->setText("Добавить");
        ui->leNumModul->setFocus();

        break;

    case 3:
        // проверка на дубликат номера
        if(ui->leNumModul->text().isEmpty())
            return;
        // добавить устройство в базу со статусом Создан
        mod.number = ui->leNumModul->text();
        mod.modTypeId = ui->cbModul->currentData(Qt::UserRole).toInt();
        mod.numberFW = ui->lbNumberFWPlate->text();
        mod.dateCreate = QDateTime::currentDateTime();
        if(repo.AddModul(mod))
        {
            repo.LinkPlate(selectIdPlate, mod.id);
            s = ui->cbModul->currentText();
            QListWidgetItem *item = new QListWidgetItem(ui->leNumModul->text() + " (" + s + ")");
            item->setData(Qt::UserRole, mod.id);
            ui->lwModul->addItem(item);
            ui->leNumModul->clear();
            ui->leNumModul->setFocus();
        }
        break;
    }

}

