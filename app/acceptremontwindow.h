#ifndef ACCEPTREMONTWINDOW_H
#define ACCEPTREMONTWINDOW_H

#include "repomssql.h"
#include "models/claim.h"
#include <QDialog>

namespace Ui {
class AcceptRemontWindow;
}

class AcceptRemontWindow : public QDialog
{
    enum TypeDevice { Product, Modul};
    Q_OBJECT

public:
    explicit AcceptRemontWindow(QWidget *parent = nullptr);
    ~AcceptRemontWindow();

private slots:
    void on_pbExchange_clicked();

    void on_cbClaim_currentIndexChanged(int index);

    void on_pbApply_clicked();

private:
    Ui::AcceptRemontWindow *ui;
    RepoMSSQL repo;
    QList<Claim> listClaim;

};

#endif // ACCEPTREMONTWINDOW_H
