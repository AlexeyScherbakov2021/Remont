#include "remontwindow.h"
#include "ui_remontwindow.h"

RemontWindow::RemontWindow(Modul *mod, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RemontWindow), modul(mod)
{
    ui->setupUi(this);

    QMap<int, QString> listReason;
    repo.LoadRemontReason(listReason);
    for(auto it = listReason.cbegin(); it != listReason.cend(); ++it)
    {
        ui->cbReason->insertItem(-1, *it, it.key());
    }

    repo.LoadRemontStatus(listStatus, RemontStepStatus::REMONT);
    for(auto it = listStatus.cbegin(); it != listStatus.cend(); ++it)
    {
        QVariant var;
        var.setValue(*it);
        ui->cbStatus->insertItem(-1, (*it).name, var);
    }


}

RemontWindow::~RemontWindow()
{
    delete ui;
}

void RemontWindow::on_pbOK_clicked()
{
    RemontM remont;

    remont.reclamtion = ui->leReclamation->text();
    remont.modulId = modul->id;
    remont.workDate = ui->deDateRemont->dateTime();
    remont.reasonId = ui->cbReason->currentData().toInt();
    remont.reasonName = ui->cbReason->currentText();
    remont.action = ui->leAction->text();
    remont.defect = ui->leDefect->text();
    remont.remark = ui->leRemark->text();

    RemontStep step;
    step.Comment = "Комментарий";
    step.dateStep = ui->deDateRemont->dateTime();
    step.RemontMId = 0;
    step.status = ui->cbStatus->currentData().value<RemontStepStatus>();
    step.StatusId = step.status.id;
    remont.listRemStep.push_back(step);

    modul->listRemont.push_back(remont);
    repo.AddRemontM(modul->listRemont.last());
    accept();
}

