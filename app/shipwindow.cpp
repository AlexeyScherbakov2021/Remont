#include "shipwindow.h"
#include "ui_shipwindow.h"

ShipWindow::ShipWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ShipWindow)
{
    ui->setupUi(this);

    // загрузка списка модулей со статусом Исправен на производстве

    repo.LoadModulsStatus(listModul, 3);
    for(auto &it : listModul)
    {
        QListWidgetItem *item = new QListWidgetItem(it.name + " (" + it.number + ")");
        item->setData(Qt::UserRole, it.id);
        ui->lwModul->addItem(item);
    }

    // загрузка изделий со статусом Исправен на производстве
    repo.LoadProducts(listProduct, 3);
    for(auto &it : listProduct)
    {
        repo.LoadChildProduct(it);
        QListWidgetItem *item = new QListWidgetItem(it.name + " (" + it.number + ")");
        item->setData(Qt::UserRole, it.id);
        ui->lwProduct->addItem(item);

    }
}

ShipWindow::~ShipWindow()
{
    delete ui;
}
