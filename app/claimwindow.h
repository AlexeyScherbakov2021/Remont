#ifndef CLAIMWINDOW_H
#define CLAIMWINDOW_H

#include "repomssql.h"

#include <QDialog>

#include <models/claim.h>

namespace Ui {
class ClaimWindow;
}

class ClaimWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ClaimWindow(QWidget *parent = nullptr);
    ~ClaimWindow();

private slots:
    void on_pbAdd_clicked();

    void on_pbDelete_clicked();

private:
    Ui::ClaimWindow *ui;
    QList<Claim> listClaim;
    RepoMSSQL repo;

    void AddLineScreen(const Claim *claim);
};

#endif // CLAIMWINDOW_H
