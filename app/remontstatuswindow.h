#ifndef REMONTSTATUSWINDOW_H
#define REMONTSTATUSWINDOW_H

#include <QDialog>

#include <models/remontm.h>

namespace Ui {
class RemontStatusWindow;
}

class RemontStatusWindow : public QDialog
{
    Q_OBJECT

public:
    explicit RemontStatusWindow(RemontM *rem, QWidget *parent = nullptr);
    ~RemontStatusWindow();

private slots:
    void on_pbOK_clicked();

private:
    Ui::RemontStatusWindow *ui;

    RepoMSSQL repo;
    RemontM *remont;
};

#endif // REMONTSTATUSWINDOW_H
