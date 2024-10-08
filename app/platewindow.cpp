#include "platewindow.h"
#include "ui_platewindow.h"

#include <QMessageBox>

PlateWindow::PlateWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::PlateWindow)
{
    ui->setupUi(this);
    ui->deCreateDate->setDateTime(QDateTime::currentDateTime());
}

PlateWindow::~PlateWindow()
{
    delete ui;
}

void PlateWindow::on_pbAdd_clicked()
{
    ui->leNumber->setFocus();

    if(ui->leNumber->text().isEmpty())
        return;

    Plate plate;
    plate.createDate = ui->deCreateDate->dateTime();
    plate.number = ui->leNumber->text();
    plate.numberFW = ui->leNumberFW->text();
    plate.numberDoc = ui->leNumberDoc->text();
    plate.VNFT = ui->leVNFT->text();

    if(!repo.InsertPlate(plate))
    {
        QMessageBox::critical(this, "Ошибка", QString("Серийный № %1 уже существует.").arg(plate.number));
        return;
    }
    else
    {
        QListWidgetItem *item = new QListWidgetItem(plate.number + " (прош." + plate.numberFW + ")");
        item->setData(Qt::UserRole, plate.id);
        ui->listWidget->addItem(item);
        ui->leNumber->clear();

    }

}


void PlateWindow::on_tbDelete_clicked()
{
    QListWidgetItem *item = ui->listWidget->currentItem();

    if(item == nullptr)
        return;

    int id = item->data(Qt::UserRole).toInt();

    // удаление платы из базы
    if(repo.DeletePlate(id))
        delete ui->listWidget->currentItem();
}

