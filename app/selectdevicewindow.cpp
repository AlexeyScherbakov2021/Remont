#include "selectdevicewindow.h"
#include "ui_selectdevicewindow.h"

SelectDeviceWindow::SelectDeviceWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SelectDeviceWindow)
{
    ui->setupUi(this);

    // Device<Modul> dev;
    // Device<Product> devProd;
    // RepoMSSQL rep;
    // rep.FindProduct("", devProd.listDevice);
}

SelectDeviceWindow::~SelectDeviceWindow()
{
    delete ui;
}

//--------------------------------------------------------------------------------------------------
// Кнопка Искать
//--------------------------------------------------------------------------------------------------
void SelectDeviceWindow::on_tbSearch_clicked()
{
    if(ui->leSearch->text().isEmpty())
        return;

    ui->twModul->setRowCount(0);
    ui->twProduct->setRowCount(0);

    // QList<Modul> listModul;
    repo.FindModul(ui->leSearch->text(), listModul);

    int row = 0;
    for(auto const &it : listModul)
    {
        ui->twModul->insertRow(row);
        QTableWidgetItem *item = new QTableWidgetItem();
        item->setFlags(item->flags() & ~Qt::ItemIsEditable);
        item->setText(it.number);
        item->setData(Qt::UserRole, it.id);
        ui->twModul->setItem(row, 0, item);

        item = new QTableWidgetItem();
        item->setFlags(item->flags() & ~Qt::ItemIsEditable);
        item->setText(it.name);
        ui->twModul->setItem(row, 1, item);

        if(it.listStatus.size() > 0)
        {
            item = new QTableWidgetItem();
            item->setFlags(item->flags() & ~Qt::ItemIsEditable);
            item->setText(it.listStatus.last().nameStatus);
            ui->twModul->setItem(row, 2, item);
        }
        ++row;

    }
    ui->twModul->resizeColumnsToContents();
    ui->twModul->resizeRowsToContents();

    repo.FindProduct(ui->leSearch->text(), listProduct);

    row = 0;
    for(auto const &it : listProduct)
    {
        ui->twProduct->insertRow(row);
        QTableWidgetItem *item = new QTableWidgetItem();
        item->setFlags(item->flags() & ~Qt::ItemIsEditable);
        item->setText(it.number);
        // QVariant var;
        // var.setValue(&it);
        item->setData(Qt::UserRole, it.id);
        ui->twProduct->setItem(row, 0, item);

        item = new QTableWidgetItem();
        item->setFlags(item->flags() & ~Qt::ItemIsEditable);
        item->setText(it.name);
        ui->twProduct->setItem(row, 1, item);

        if(it.listStatus.size() > 0)
        {
            item = new QTableWidgetItem();
            item->setFlags(item->flags() & ~Qt::ItemIsEditable);
            item->setText(it.listStatus.last().nameStatus);
            ui->twProduct->setItem(row, 2, item);
        }

        ++row;
    }
    ui->twProduct->resizeColumnsToContents();
    ui->twProduct->resizeRowsToContents();

    if(listProduct.size() == 0)
        ui->tabWidget->setCurrentIndex(1);

    if(listModul.size() == 0)
        ui->tabWidget->setCurrentIndex(0);

}


//--------------------------------------------------------------------------------------------------
// Кнопка Выбрать
//--------------------------------------------------------------------------------------------------
void SelectDeviceWindow::on_pbSelect_clicked()
{
    qDebug() << ui->twProduct->currentRow() << ui->twModul->currentRow();


    if(ui->tabWidget->currentIndex() == 0 && ui->twProduct->currentRow() >= 0)
        prod = &listProduct[ui->twProduct->currentRow()];

    if(ui->tabWidget->currentIndex() == 1 && ui->twModul->currentRow() >= 0)
        modul = &listModul[ui->twModul->currentRow()];

    accept();
}


void SelectDeviceWindow::on_twModul_cellDoubleClicked(int /*row*/, int /*column*/)
{
    on_pbSelect_clicked();
}


void SelectDeviceWindow::on_twProduct_cellDoubleClicked(int /*row*/, int /*column*/)
{
    on_pbSelect_clicked();
}

