#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "cardprodwindow.h"
#include "claimwindow.h"
#include "selectdevicewindow.h"

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
    ui->twModul->resizeColumnsToContents();
    ui->twModul->resizeRowsToContents();

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
    ui->twProduct->resizeColumnsToContents();
    ui->twProduct->resizeRowsToContents();

}


void MainWindow::on_twProduct_cellDoubleClicked(int row, int /*column*/)
{
    RepoMSSQL repo;
    int id = ui->twProduct->item(row, 0)->data(Qt::UserRole).toInt();

    Product prod = repo.GetProduct(id);

    CardProdWindow *card = new CardProdWindow(prod, this);
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

//----------------------------------------------------------------------------------------------
// Кнопка Работа с претензиями
//----------------------------------------------------------------------------------------------
void MainWindow::on_pbClaim_clicked()
{
    ClaimWindow *win = new ClaimWindow;
    win->show();
}


//----------------------------------------------------------------------------------------------
// Кнопка Карточка устройства
//----------------------------------------------------------------------------------------------
void MainWindow::on_pbCard_clicked()
{
    SelectDeviceWindow *win = new SelectDeviceWindow(this);
    if(win->exec() == QDialog::Accepted)
    {
        CardProdWindow *winCard;
        if(win->prod != nullptr)
            winCard = new CardProdWindow(*win->prod, this);
        else if(win->modul != nullptr)
            winCard = new CardProdWindow(*win->modul, this);
        else
            return;

        winCard->show();
    }
}


//----------------------------------------------------------------------------------------------
// Кнопка Принять в ремонт
//----------------------------------------------------------------------------------------------
void MainWindow::on_pbApplyRemont_clicked()
{

}

