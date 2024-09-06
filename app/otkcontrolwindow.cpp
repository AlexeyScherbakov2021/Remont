#include "otkcontrolwindow.h"
#include "repomssql.h"
#include "ui_otkcontrolwindow.h"

OTKControlWindow::OTKControlWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::OTKControlWindow)
{
    ui->setupUi(this);
    RepoMSSQL repo;
    // получить списки изделий и модулей, требующих проверку

}

OTKControlWindow::~OTKControlWindow()
{
    delete ui;
}

void OTKControlWindow::on_pbApply_clicked()
{
    if(ui->rbPassed)
    {
        // установить статус Ппроверку прошел
    }
    else
    {
        // установить статус Проверку не прошел
    }



}

