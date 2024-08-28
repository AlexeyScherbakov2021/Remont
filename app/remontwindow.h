#ifndef REMONTWINDOW_H
#define REMONTWINDOW_H

#include <QDialog>

#include <models/modul.h>
#include <models/remontm.h>

namespace Ui {
class RemontWindow;
}

class RemontWindow : public QDialog
{
    Q_OBJECT

public:
    // QList<RemontM> *listRemont;

    explicit RemontWindow(Modul *modul, QWidget *parent = nullptr);
    ~RemontWindow();

private slots:
    void on_pbOK_clicked();

private:
    Ui::RemontWindow *ui;
    Modul *modul;
    RepoMSSQL repo;
    QList<RemontStepStatus> listStatus;

};

#endif // REMONTWINDOW_H
