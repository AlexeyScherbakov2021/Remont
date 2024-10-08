#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "repomssql.h"

#include <QMainWindow>
#include <QSqlDatabase>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pbClaim_clicked();
    void on_pbCard_clicked();
    void on_pbApplyRemont_clicked();

    void on_pbRegister_clicked();

    void on_pbOTK_clicked();

    void on_pbCreatePlate_clicked();

    void on_pbShip_clicked();

    void on_pbComplect_clicked();

    void on_pbStartRemont_clicked();

    void on_pbStartWork_clicked();

private:
    Ui::MainWindow *ui;
    QSqlDatabase db;

};
#endif // MAINWINDOW_H
