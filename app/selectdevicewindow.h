#ifndef SELECTDEVICEWINDOW_H
#define SELECTDEVICEWINDOW_H

#include <QDialog>
#include "repomssql.h"
#include <models/modul.h>
#include <models/product.h>

namespace Ui {
class SelectDeviceWindow;
}

class SelectDeviceWindow : public QDialog
{
    Q_OBJECT

public:
    enum TypeDevice {TypeAll, TypeProduct, TypeModul};


    explicit SelectDeviceWindow(QWidget *parent = nullptr, QString searchNum = "",
                                Status::Stat status = Status::NONE, TypeDevice typeDevice = TypeAll);
    ~SelectDeviceWindow();
    Product prod;// = nullptr;
    Modul modul;// = nullptr;

private slots:
    void on_tbSearch_clicked();
    void on_pbSelect_clicked();

    void on_twModul_cellDoubleClicked(int row, int column);

    void on_twProduct_cellDoubleClicked(int row, int column);

private:
    Ui::SelectDeviceWindow *ui;
    QList<Modul> listModul;
    QList<Product> listProduct;
    RepoMSSQL repo;
    Status::Stat status;
    TypeDevice typeDevice;

    int SearchModul(QString number, int status);
    int SearchProduct(QString number, int status);


    // QObject interface
protected:
    void timerEvent(QTimerEvent *event) override;
};


#endif // SELECTDEVICEWINDOW_H
