#ifndef SHIPWINDOW_H
#define SHIPWINDOW_H

#include <QDialog>
#include <QTreeWidgetItem>

#include <models/product.h>
#include <models/shipment.h>

namespace Ui {
class ShipWindow;
}

class ShipWindow : public QDialog
{
    Q_OBJECT
    enum TypeItemTree {SET, PRODUCT, MODUL};


public:
    explicit ShipWindow(Shipment *ship, QWidget *parent = nullptr);
    ~ShipWindow();

private slots:
    void on_tbNumProd_clicked();
    void on_tbNumModul_clicked();
    void on_tbAddSetterProd_clicked();
    void on_pbAddSet_clicked();
    void on_pbDelete_clicked();
    void on_pbFinish_clicked();

    void on_ShipWindow_finished(int result);

private:
    Ui::ShipWindow *ui;

    // QMap<int, Product> listAddingProductToSet;
    // QMap<int, Product> listAddingProduct;
    // QList<Modul> listAddingModul;
    // QList<SetterOut> listAddingSet;
    // QList<Product> listDelProduct;
    // QList<Modul> listDelModul;
    // QList<SetterOut> listDelSet;

    RepoMSSQL repo;
    Shipment *ship;
    QHash<int, int> listID;

    QTreeWidgetItem* AddItemProd(Product &prod, QTreeWidgetItem *parent = nullptr);
    QTreeWidgetItem* AddItemTree(QString text, int id, TypeItemTree type, QTreeWidgetItem *parent = nullptr);
    void SetStatusProduct(QList<Product> &listProduct);
    void SetStatusModules(QList<Modul> &listModules);
};

#endif // SHIPWINDOW_H
