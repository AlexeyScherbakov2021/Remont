#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "cardprodwindow.h"
#include "claimwindow.h"
#include "selectdevicewindow.h"
#include "createdevicewindow.h"
#include "otkcontrolwindow.h"

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


void MainWindow::on_pbRegister_clicked()
{
    CreateDeviceWindow *win = new CreateDeviceWindow(this);
    win->setAttribute(Qt::WA_DeleteOnClose);
    win->show();
}


void MainWindow::on_pbOTK_clicked()
{
    OTKControlWindow *win = new OTKControlWindow(this);
    win->setAttribute(Qt::WA_DeleteOnClose);
    win->show();
}

