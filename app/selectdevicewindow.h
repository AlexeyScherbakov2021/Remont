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
    explicit SelectDeviceWindow(QWidget *parent = nullptr);
    ~SelectDeviceWindow();
    Product *prod = nullptr;
    Modul *modul = nullptr;

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


};

#endif // SELECTDEVICEWINDOW_H
