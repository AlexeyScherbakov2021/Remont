#ifndef REMONTWINDOW_H
#define REMONTWINDOW_H

#include <QDialog>

#include <models/modul.h>
#include <models/remontentity.h>
#include <models/remontm.h>

namespace Ui {
class RemontWindow;
}

class RemontWindow : public QDialog
{
    Q_OBJECT

public:
    // QList<RemontM> *listRemont;

    explicit RemontWindow(RemontEntity *modul, QWidget *parent = nullptr);
    ~RemontWindow();

private slots:
    void on_pbOK_clicked();

    void on_tbClaim_clicked();

private:
    Ui::RemontWindow *ui;
    // Modul *modul;
    RemontEntity *remontEntity;
    RepoMSSQL repo;
    QList<RemontStepStatus> listStatus;

};

#endif // REMONTWINDOW_H
