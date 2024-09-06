#ifndef CREATEDEVICEWINDOW_H
#define CREATEDEVICEWINDOW_H

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
    void on_pbAdd_clicked();

    void on_tbDelete_clicked();

private:
    Ui::CreateDeviceWindow *ui;
    QMap<int, QString> listTypeModule;
    QMap<int, QString> listTypeProduct;
};

#endif // CREATEDEVICEWINDOW_H
