#ifndef CLAIMDETAIL_H
#define CLAIMDETAIL_H

#include "repomssql.h"

#include <QDialog>

#include <models/claim.h>

namespace Ui {
class ClaimDetail;
}

class ClaimDetail : public QDialog
{
    Q_OBJECT

public:
    explicit ClaimDetail(Claim *cl, QWidget *parent = nullptr);
    ~ClaimDetail();

private slots:
    void on_pbOK_clicked();

private:
    Ui::ClaimDetail *ui;
    // explicit ClaimDetail(QWidget *parent = nullptr);
    Claim *claim;
    QMap<int, QString> listTypeClaim;
    QMap<int, QString> listTypeModule;
    QMap<int, QString> listTypeProduct;

    RepoMSSQL repo;
};

#endif // CLAIMDETAIL_H
