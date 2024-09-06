#include "createdevicewindow.h"
#include "repomssql.h"
#include "ui_createdevicewindow.h"

CreateDeviceWindow::CreateDeviceWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::CreateDeviceWindow)
{
    ui->setupUi(this);
    RepoMSSQL repo;

    repo.LoadModuleType(listTypeModule);
    repo.LoadProductType(listTypeProduct);

    for(auto it = listTypeModule.cbegin(); it != listTypeModule.cend(); ++it)
        ui->cbModul->addItem(*it, it.key());

    for(auto it = listTypeProduct.cbegin(); it != listTypeProduct.cend(); ++it)
        ui->cbProduct->addItem(*it, it.key());

}

CreateDeviceWindow::~CreateDeviceWindow()
{
    delete ui;
}

void CreateDeviceWindow::on_pbAdd_clicked()
{
    // проверка на дубликат номера

    // добавить устройство в базу сос статусом Произведен


    QString s = ui->tabWidget->currentIndex() == 0 ? ui->cbProduct->currentText() : ui->cbModul->currentText();
    ui->listWidget->addItem(ui->leNumber->text() + " (" + s + ")");
    ui->leNumber->clear();
    ui->leNumber->setFocus();
}


void CreateDeviceWindow::on_tbDelete_clicked()
{
    // удалить устройство из базы

    delete ui->listWidget->currentItem();
}

