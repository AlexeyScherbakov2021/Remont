#ifndef CREATEDEVICEWINDOW_H
#define CREATEDEVICEWINDOW_H

#include "repomssql.h"

#include <QDialog>

namespace Ui {
class CreateDeviceWindow;
}

class CreateDeviceWindow : public QDialog
{
    Q_OBJECT

public:
    explicit CreateDeviceWindow(QWidget *parent = nullptr);
    ~CreateDeviceWindow();

private slots:
    void on_tbSearchPlate_clicked();
    void on_tbDeleteModul_clicked();
    void on_tbDeleteProduct_clicked();
    void on_pbPrev_clicked();
    void on_pbNext_clicked();

private:
    Ui::CreateDeviceWindow *ui;
    RepoMSSQL repo;
    QMap<int, QString> listTypeModule;
    QMap<int, QString> listTypeProduct;
    int selectIdPlate;
};

#endif // CREATEDEVICEWINDOW_H
