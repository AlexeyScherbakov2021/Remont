#include "claimdetail.h"
#include "claimwindow.h"
#include "ui_claimwindow.h"

#include <QMessageBox>

ClaimWindow::ClaimWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ClaimWindow)
{
    ui->setupUi(this);

    repo.LoadClaim(listClaim);
    for(auto const &it : listClaim)
        AddLineScreen(&it);

    ui->twClaim->resizeColumnsToContents();
    ui->twClaim->resizeRowsToContents();

}

ClaimWindow::~ClaimWindow()
{
    delete ui;
}


void ClaimWindow::on_pbAdd_clicked()
{
    Claim claim;

    ClaimDetail *win = new ClaimDetail(&claim, this);
    if(win->exec() == QDialog::Accepted)
    {
        AddLineScreen(&claim);
        ui->twClaim->resizeColumnsToContents();
        ui->twClaim->resizeRowToContents(row);
        if(repo.InsertClaim(&claim))
            listClaim.push_back(claim);
    }
}


//----------------------------------------------------------------------------------------
// Кнопка Добавить рекламацию
//----------------------------------------------------------------------------------------
void ClaimWindow::AddLineScreen(const Claim *claim)
{
    int row = ui->twClaim->rowCount();
    ui->twClaim->insertRow(row);

    QTableWidgetItem *item = new QTableWidgetItem();
    item->setText(claim->Number);
    ui->twClaim->setItem(row, 0, item);

    item = new QTableWidgetItem();
    item->setText(claim->DateClaim.toString("dd.MM.yyyy"));
    ui->twClaim->setItem(row, 1, item);

    item = new QTableWidgetItem();
    item->setText(claim->FromWho);
    ui->twClaim->setItem(row, 2, item);

    item = new QTableWidgetItem();
    item->setText("");
    ui->twClaim->setItem(row, 3, item);

    item = new QTableWidgetItem();
    item->setText(claim->Organization);
    ui->twClaim->setItem(row, 4, item);

    item = new QTableWidgetItem();
    item->setText(claim->ObjectInstall);
    ui->twClaim->setItem(row, 5, item);

    item = new QTableWidgetItem();
    item->setText(claim->Descript);
    ui->twClaim->setItem(row, 6, item);

}

//----------------------------------------------------------------------------------------
// Кнопка Удалить рекламацию
//----------------------------------------------------------------------------------------
void ClaimWindow::on_pbDelete_clicked()
{
    int row = ui->twClaim->currentRow();
    if(row < 0 )
        return;

    if(QMessageBox::warning(this, "Предупреждение",
                             QString("Удалить рекламацию № %1 ?").arg(listClaim.at(row).Number), QMessageBox::Yes | QMessageBox::No) != QMessageBox::Yes)
        return;

    if(repo.DeleteClaim(listClaim.at(row).id))
    {
        listClaim.removeAt(row);
        ui->twClaim->removeRow(row);
    }
}

