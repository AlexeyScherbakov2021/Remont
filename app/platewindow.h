#ifndef PLATEWINDOW_H
#define PLATEWINDOW_H

#include "repomssql.h"

#include <QDialog>

#include <models/plates.h>

namespace Ui {
class PlateWindow;
}

class PlateWindow : public QDialog
{
    Q_OBJECT

public:
    explicit PlateWindow(QWidget *parent = nullptr);
    ~PlateWindow();

private slots:
    void on_pbAdd_clicked();

    void on_tbDelete_clicked();

private:
    Ui::PlateWindow *ui;
    RepoMSSQL repo;
};

#endif // PLATEWINDOW_H
