#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "cardprodwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_btSearch_clicked()
{
    if(ui->leSearch->text().isEmpty())
        return;

    ui->twModul->setRowCount(0);
    ui->twProduct->setRowCount(0);

    RepoMSSQL repo;
    QList<Modul> listModul;
    repo.FindModul(ui->leSearch->text(), listModul);

    int row = 0;
    for(auto const &it : listModul)
    {
        ui->twModul->insertRow(0);
        QTableWidgetItem *item = new QTableWidgetItem();
        item->setText(it.number);
        // QVariant var;
        // var.setValue(it.id);
        item->setData(Qt::UserRole, it.id);
        ui->twModul->setItem(row, 0, item);

        item = new QTableWidgetItem();
        item->setText(it.name);
        ui->twModul->setItem(row, 1, item);


    }

    QList<Product> listProduct;
    repo.FindProduct(ui->leSearch->text(), listProduct);

    row = 0;
    for(auto const &it : listProduct)
    {
        ui->twProduct->insertRow(0);
        QTableWidgetItem *item = new QTableWidgetItem();
        item->setText(it.number);
        // QVariant var;
        // var.setValue(&it);
        item->setData(Qt::UserRole, it.id);
        ui->twProduct->setItem(row, 0, item);

        item = new QTableWidgetItem();
        item->setText(it.name);
        ui->twProduct->setItem(row, 1, item);

    }

}


void MainWindow::on_twProduct_cellDoubleClicked(int row, int /*column*/)
{
    RepoMSSQL repo;
    int id = ui->twProduct->item(row, 0)->data(Qt::UserRole).toInt();

    Product prod = repo.GetProduct(id);

    CardProdWindow *card = new CardProdWindow(&prod, this);
    card->show();
}


void MainWindow::on_twModul_cellDoubleClicked(int row, int /*column*/)
{
    RepoMSSQL repo;

    int id = ui->twModul->item(row, 0)->data(Qt::UserRole).toInt();
    Modul mod = repo.GetModul(id);

    CardProdWindow *card = new CardProdWindow(mod, this);
    card->show();

}

