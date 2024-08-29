#include "claimdetail.h"
#include "ui_claimdetail.h"

ClaimDetail::ClaimDetail(Claim *cl,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ClaimDetail), claim(cl)
{
    ui->setupUi(this);

    repo.LoadClaimType(listTypeClaim);
    for(auto it = listTypeClaim.cbegin(); it != listTypeClaim.cend(); ++it)
        ui->cbTypeClaim->addItem(*it, it.key());

    repo.LoadModuleType(listTypeModule);
    for(auto it = listTypeModule.cbegin(); it != listTypeModule.cend(); ++it)
        ui->cbTypeComplect->addItem(*it, it.key());

    repo.LoadProductType(listTypeProduct);
    for(auto it = listTypeProduct.cbegin(); it != listTypeProduct.cend(); ++it)
        ui->cbTypeDevice->addItem(*it, it.key());

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
    claim->Organization = ui->leOrganiz->text();
    claim->ObjectInstall = ui->leObjectInst->text();
    claim->Descript = ui->leDescript->text();

    claim->TypeClaimId = ui->cbTypeClaim->currentData(Qt::UserRole).toInt();
    claim->TypeComplectId = ui->cbTypeComplect->currentData(Qt::UserRole).toInt();
    claim->TypeDeviceId = ui->cbTypeDevice->currentData(Qt::UserRole).toInt();
    accept();
}

