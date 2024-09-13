#ifndef SHIPWINDOW_H
#define SHIPWINDOW_H

#include <QDialog>

#include <models/product.h>

namespace Ui {
class ShipWindow;
}

class ShipWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ShipWindow(QWidget *parent = nullptr);
    ~ShipWindow();

private:
    Ui::ShipWindow *ui;
    QList<Product> listProduct;
    QList<Modul> listModul;
    RepoMSSQL repo;
};

#endif // SHIPWINDOW_H
