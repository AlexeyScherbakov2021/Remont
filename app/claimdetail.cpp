#include "claimdetail.h"
#include "selectdevicewindow.h"
#include "ui_claimdetail.h"

ClaimDetail::ClaimDetail(Claim *cl,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ClaimDetail), claim(cl)
{
    ui->setupUi(this);

    repo.LoadClaimType(listTypeClaim);
    for(auto it = listTypeClaim.cbegin(); it != listTypeClaim.cend(); ++it)
        ui->cbTypeClaim->addItem(*it, it.key());

    // repo.LoadModuleType(listTypeModule);
    // for(auto it = listTypeModule.cbegin(); it != listTypeModule.cend(); ++it)
    //     ui->cbTypeComplect->addItem(*it, it.key());

    // repo.LoadProductType(listTypeProduct);
    // for(auto it = listTypeProduct.cbegin(); it != listTypeProduct.cend(); ++it)
    //     ui->cbTypeDevice->addItem(*it, it.key());

    repo.LoadModulToClaim(claim->id, claim->listModul);
    repo.LoadProductToClaim(claim->id, claim->listProduct);

    ClaimToScreen(claim);

    ui->tableWidget->resizeColumnsToContents();
    ui->tableWidget->resizeRowsToContents();

}

ClaimDetail::~ClaimDetail()
{
    delete ui;
}

void ClaimDetail::on_pbOK_clicked()
{
    claim->Number = ui->leNumber->text();
    claim->DateClaim = ui->deDateClaim->dateTime();
    claim->FromWho = ui->leFromWho->text();
    // claim->idOrg = ui->leOrganiz->text();
    claim->ObjectInstall = ui->leObjectInst->text();
    claim->Descript = ui->leDescript->text();
    // claim->VNFT = ui->leVNFT->text();
    // claim->Quantity = ui->sbQuantity->value();
    // claim->NumberModul = ui->leNumModul->text();
    // claim->NumberNewModul = ui->leNumNewModul->text();
    // claim->NumberDevice = ui->leNumDevice->text();
    // claim->DateOut = ui->deDateOut->dateTime();
    claim->Reason = ui->leReason->text();
    claim->DateRepair = ui->deDateRepair->dateTime();
    claim->DoRepair = ui->leDoRepair->text();
    claim->FileAnswer = ui->leFileAnswer->text();
    claim->TextResult = ui->leTextResult->text();
    claim->IsGuarantee = ui->cbGuarantee->isChecked();

    claim->TypeClaimId = ui->cbTypeClaim->currentData(Qt::UserRole).toInt();
    // claim->TypeComplectId = ui->cbTypeComplect->currentData(Qt::UserRole).toInt();
    // claim->TypeDeviceId = ui->cbTypeDevice->currentData(Qt::UserRole).toInt();

    for(auto &it : listAddModul)
    {
        repo.AddModulToClaim(it.id, claim->id);
    }

    for(auto &it : listAddProduct)
    {
        repo.AddProductToClaim(it.id, claim->id);
    }

    accept();
}

void ClaimDetail::ClaimToScreen(Claim *claim)
{
    ui->leNumber->setText(claim->Number);
    ui->deDateClaim->setDateTime(claim->DateClaim);
    ui->leFromWho->setText(claim->FromWho);
    // ui->leOrganiz->setText(claim->idOrg);
    ui->leObjectInst->setText(claim->ObjectInstall);
    ui->leDescript->setText(claim->Descript);
    // ui->leVNFT->setText(claim->VNFT);
    // ui->sbQuantity->setValue(claim->Quantity);
    // ui->leNumModul->setText(claim->NumberModul);
    // ui->leNumNewModul->setText(claim->NumberNewModul);
    // ui->leNumDevice->setText(claim->NumberDevice);
    // ui->deDateOut->setDateTime(claim->DateOut);
    ui->leReason->setText(claim->Reason);
    ui->deDateRepair->setDateTime(claim->DateRepair);
    ui->leDoRepair->setText(claim->DoRepair);
    ui->leFileAnswer->setText(claim->FileAnswer);
    ui->leTextResult->setText(claim->TextResult);
    ui->cbGuarantee->setChecked(claim->IsGuarantee);

    ui->cbTypeClaim->setCurrentText(listTypeClaim[claim->TypeClaimId]);
    // ui->cbTypeComplect->setCurrentText(listTypeModule[claim->TypeComplectId]);
    // ui->cbTypeDevice->setCurrentText(listTypeProduct[claim->TypeDeviceId]);

    for(auto &it : claim->listModul)
        AddModulToTableScreen(it);

    for(auto &it : claim->listProduct)
        AddProductToTableScreen(it);
}


void ClaimDetail::AddModulToTableScreen(const Modul &modul)
{
    int row = ui->tableWidget->rowCount();
    ui->tableWidget->insertRow(row);
    QTableWidgetItem *item = new QTableWidgetItem();
    item->setFlags(item->flags() & ~Qt::ItemIsEditable);
    item->setText("Модуль");
    ui->tableWidget->setItem(row, 0, item);
    item = new QTableWidgetItem();
    item->setFlags(item->flags() & ~Qt::ItemIsEditable);
    item->setText(modul.number);
    ui->tableWidget->setItem(row, 1, item);
    item = new QTableWidgetItem();
    item->setFlags(item->flags() & ~Qt::ItemIsEditable);
    item->setText(modul.name);
    ui->tableWidget->setItem(row, 2, item);

}

void ClaimDetail::AddProductToTableScreen(const Product &prod)
{
    int row = ui->tableWidget->rowCount();
    ui->tableWidget->insertRow(row);
    QTableWidgetItem *item = new QTableWidgetItem();
    item->setFlags(item->flags() & ~Qt::ItemIsEditable);
    item->setText("Изделие");
    ui->tableWidget->setItem(row, 0, item);
    item = new QTableWidgetItem();
    item->setFlags(item->flags() & ~Qt::ItemIsEditable);
    item->setText(prod.number);
    ui->tableWidget->setItem(row, 1, item);
    item = new QTableWidgetItem();
    item->setFlags(item->flags() & ~Qt::ItemIsEditable);
    item->setText(prod.name);
    ui->tableWidget->setItem(row, 2, item);

}


//-----------------------------------------------------------------------------------------
// Кнопка добавления устройства
//-----------------------------------------------------------------------------------------
void ClaimDetail::on_tbAddDevice_clicked()
{
    SelectDeviceWindow *win = new SelectDeviceWindow(this, "", Status::Stat::WORK);
    if(win->exec() == QDialog::Accepted)
    {
        // int row = ui->tableWidget->rowCount();

        if(win->prod.id != 0)
        {
            AddProductToTableScreen(win->prod);
            // ui->tableWidget->insertRow(row);
            // QTableWidgetItem *item = new QTableWidgetItem();
            // item->setFlags(item->flags() & ~Qt::ItemIsEditable);
            // item->setText("Изделие");
            // ui->tableWidget->setItem(row, 0, item);
            // item = new QTableWidgetItem();
            // item->setFlags(item->flags() & ~Qt::ItemIsEditable);
            // item->setText(win->prod.number);
            // ui->tableWidget->setItem(row, 1, item);
            // item = new QTableWidgetItem();
            // item->setFlags(item->flags() & ~Qt::ItemIsEditable);
            // item->setText(win->prod.name);
            // ui->tableWidget->setItem(row, 2, item);
            listAddProduct.insert(win->prod.id, win->prod);
        }
        else if(win->modul.id != 0)
        {
            AddModulToTableScreen(win->modul);
            // ui->tableWidget->insertRow(row);
            // QTableWidgetItem *item = new QTableWidgetItem();
            // item->setFlags(item->flags() & ~Qt::ItemIsEditable);
            // item->setText("Модуль");
            // ui->tableWidget->setItem(row, 0, item);
            // item = new QTableWidgetItem();
            // item->setFlags(item->flags() & ~Qt::ItemIsEditable);
            // item->setText(win->modul.number);
            // ui->tableWidget->setItem(row, 1, item);
            // item = new QTableWidgetItem();
            // item->setFlags(item->flags() & ~Qt::ItemIsEditable);
            // item->setText(win->modul.name);
            // ui->tableWidget->setItem(row, 2, item);
            listAddModul.insert(win->modul.id, win->modul);
        }
        ui->tableWidget->resizeColumnsToContents();
        ui->tableWidget->resizeRowsToContents();
    }
}


//-----------------------------------------------------------------------------------------
// Кнопка удаления устройства
//-----------------------------------------------------------------------------------------
void ClaimDetail::on_tbDeleteDevice_clicked()
{

}

