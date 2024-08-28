#include "remontstatuswindow.h"
#include "ui_remontstatuswindow.h"

RemontStatusWindow::RemontStatusWindow(RemontM *rem, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RemontStatusWindow), remont(rem)
{
    ui->setupUi(this);

    auto step = rem->listRemStep.last();
    ui->deChangeDate->setDateTime(step.dateStep);

    QList<RemontStepStatus> listStatus;
    repo.LoadRemontStatus(listStatus, RemontStepStatus::ALL);
    for(auto it = listStatus.cbegin(); it != listStatus.cend(); ++it)
    {
        QVariant var;
        var.setValue(*it);
        ui->cbStatus->insertItem(-1, (*it).name, var);
    }

}

RemontStatusWindow::~RemontStatusWindow()
{
    delete ui;
}

void RemontStatusWindow::on_pbOK_clicked()
{
    RemontStep step;
    step.dateStep = ui->deChangeDate->dateTime();
    step.status = ui->cbStatus->currentData().value<RemontStepStatus>();
    step.StatusId = step.status.id;
    step.Comment = ui->leComment->text();
    step.RemontMId = remont->id;
    if(step.status.inWork == 1)
        remont->EndDate = step.dateStep;
    remont->listRemStep.push_back(step);

    accept();
}

