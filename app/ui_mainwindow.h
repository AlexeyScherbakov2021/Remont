/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pbClaim;
    QPushButton *pbCard;
    QPushButton *pbApplyRemont;
    QPushButton *pbStartRemont;
    QPushButton *pbEndRemont;
    QPushButton *pbRegister;
    QPushButton *pbOTK;
    QPushButton *pbCreatePlate;
    QPushButton *pbShip;
    QPushButton *pbComplect;
    QPushButton *pbStartWork;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(604, 392);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        pbClaim = new QPushButton(centralwidget);
        pbClaim->setObjectName("pbClaim");
        pbClaim->setGeometry(QRect(220, 20, 170, 40));
        pbCard = new QPushButton(centralwidget);
        pbCard->setObjectName("pbCard");
        pbCard->setGeometry(QRect(410, 20, 170, 40));
        pbApplyRemont = new QPushButton(centralwidget);
        pbApplyRemont->setObjectName("pbApplyRemont");
        pbApplyRemont->setGeometry(QRect(220, 70, 170, 40));
        pbStartRemont = new QPushButton(centralwidget);
        pbStartRemont->setObjectName("pbStartRemont");
        pbStartRemont->setGeometry(QRect(220, 120, 170, 40));
        pbEndRemont = new QPushButton(centralwidget);
        pbEndRemont->setObjectName("pbEndRemont");
        pbEndRemont->setGeometry(QRect(220, 170, 170, 40));
        pbRegister = new QPushButton(centralwidget);
        pbRegister->setObjectName("pbRegister");
        pbRegister->setGeometry(QRect(20, 70, 170, 40));
        pbOTK = new QPushButton(centralwidget);
        pbOTK->setObjectName("pbOTK");
        pbOTK->setGeometry(QRect(20, 173, 170, 40));
        pbCreatePlate = new QPushButton(centralwidget);
        pbCreatePlate->setObjectName("pbCreatePlate");
        pbCreatePlate->setGeometry(QRect(20, 20, 170, 40));
        pbShip = new QPushButton(centralwidget);
        pbShip->setObjectName("pbShip");
        pbShip->setGeometry(QRect(20, 230, 170, 40));
        pbComplect = new QPushButton(centralwidget);
        pbComplect->setObjectName("pbComplect");
        pbComplect->setGeometry(QRect(20, 120, 170, 40));
        pbStartWork = new QPushButton(centralwidget);
        pbStartWork->setObjectName("pbStartWork");
        pbStartWork->setGeometry(QRect(20, 290, 170, 40));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 604, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\243\321\207\320\265\321\202 \320\270\320\267\320\264\320\265\320\273\320\270\320\271", nullptr));
        pbClaim->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\272\320\273\320\260\320\274\320\260\321\206\320\270\320\270", nullptr));
        pbCard->setText(QCoreApplication::translate("MainWindow", "\320\232\320\260\321\200\321\202\320\276\321\207\320\272\320\260 \321\203\321\201\321\202\321\200\320\276\320\271\321\201\321\202\320\262\320\260", nullptr));
        pbApplyRemont->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\270\320\275\321\217\321\202\321\214 \320\262 \320\236\320\241\320\236", nullptr));
        pbStartRemont->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\270\320\275\321\217\321\202\321\214 \320\262 \321\200\320\265\320\274\320\276\320\275\321\202", nullptr));
        pbEndRemont->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\272\320\276\320\275\321\207\320\270\321\202\321\214 \321\200\320\265\320\274\320\276\320\275\321\202", nullptr));
        pbRegister->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217 \321\203\321\201\321\202\321\200\320\276\320\271\321\201\321\202\320\262", nullptr));
        pbOTK->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\320\262\320\265\321\200\320\272\320\260 \320\236\320\242\320\232", nullptr));
        pbCreatePlate->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217 \320\277\320\273\320\260\321\202", nullptr));
        pbShip->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\263\321\200\321\203\320\267\320\272\320\270", nullptr));
        pbComplect->setText(QCoreApplication::translate("MainWindow", "\320\243\321\201\321\202\320\260\320\275\320\276\320\262\320\272\320\260 \320\262 \320\276\320\261\320\276\321\200\321\203\320\264\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        pbStartWork->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\277\321\203\321\211\320\265\320\275 \320\262 \321\200\320\260\320\261\320\276\321\202\321\203", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
