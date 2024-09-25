#include "acceptremontwindow.h"
#include "complectproductwindow.h"
#include "ui_acceptremontwindow.h"

AcceptRemontWindow::AcceptRemontWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AcceptRemontWindow)
{
    ui->setupUi(this);

    repo.LoadClaim(listClaim);

    auto newEnd = std::remove_if(listClaim.begin(), listClaim.end(), [](Claim claim) { return !claim.DateOut.isNull();});

    listClaim.erase(newEnd, listClaim.end());

    for(auto &it : listClaim)
    {
        repo.LoadProductToClaim(it.id, it.listProduct);
        repo.LoadModulToClaim(it.id, it.listModul);
        ui->cbClaim->addItem(it.Number, it.id);
    }

    QMap<int, QString> listReason;
    repo.LoadRemontReason(listReason);

    for(auto it = listReason.cbegin(); it != listReason.cend(); ++it)
    {
        ui->cbReason->addItem(*it, it.key());
    }

}

AcceptRemontWindow::~AcceptRemontWindow()
{
    delete ui;
}

void AcceptRemontWindow::on_pbExchange_clicked()
{
    ComplectProductWindow *win = new ComplectProductWindow(this);
    win->show();
}


//------------------------------------------------------------------------
// Событие изменения рекламации
//------------------------------------------------------------------------
void AcceptRemontWindow::on_cbClaim_currentIndexChanged(int index)
{
    ui->cbDevice->clear();
    int row = 0;

    for(auto &it : listClaim[index].listProduct)
    {
        ui->cbDevice->insertItem(row, it.number, it.id);
        ui->cbDevice->setItemData(row, TypeDevice::Product, Qt::UserRole + 1);
        ++row;
    }

    for(auto &it : listClaim[index].listModul)
    {
        ui->cbDevice->insertItem(row, it.number, it.id);
        ui->cbDevice->setItemData(row, TypeDevice::Modul, Qt::UserRole + 1);
        ++row;
    }
}


//------------------------------------------------------------------------
// Кнопка принят в ремонт
//------------------------------------------------------------------------
void AcceptRemontWindow::on_pbApply_clicked()
{

    TypeDevice type = (TypeDevice)ui->cbDevice->currentData(Qt::UserRole + 1).toInt();
    int id = ui->cbDevice->currentData(Qt::UserRole).toInt();

    Status status;
    status.idDevice = id;
    status.idStatus = Status::Stat::FAULTY_ON_OSO;
    status.dateStatus = QDateTime::currentDateTime();

    // RemontM remont;
    // remont.workDate = QDateTime::currentDateTime();
    // remont.reclamtionId = ui->cbClaim->currentData().toInt();
    // remont.reasonId = ui->cbReason->currentData().toInt();
    // remont.action = ui->leAction->text();
    // remont.defect = ui->leDefect->text();

    if(type == TypeDevice::Product)
    {
        repo.AddStatusProduct(status);
        // repo.AddRemontP(remont);
    }
    else
    {
        repo.AddStatusModul(status);
        // repo.AddRemontM(remont);
    }

}

