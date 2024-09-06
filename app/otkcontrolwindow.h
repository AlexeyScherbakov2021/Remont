#ifndef OTKCONTROLWINDOW_H
#define OTKCONTROLWINDOW_H

#include <QDialog>

namespace Ui {
class OTKControlWindow;
}

class OTKControlWindow : public QDialog
{
    Q_OBJECT

public:
    explicit OTKControlWindow(QWidget *parent = nullptr);
    ~OTKControlWindow();

private slots:
    void on_pbApply_clicked();

private:
    Ui::OTKControlWindow *ui;
};

#endif // OTKCONTROLWINDOW_H
