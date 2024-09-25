/********************************************************************************
** Form generated from reading UI file 'shipwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHIPWINDOW_H
#define UI_SHIPWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_ShipWindow
{
public:
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLineEdit *leObjectInstall;
    QDateEdit *deDateOut;
    QLineEdit *leCustomer;
    QLineEdit *leSchet;
    QLineEdit *leCardOrder;
    QLineEdit *leBuyer;
    QLineEdit *leNumUPD;
    QGroupBox *groupBox;
    QTreeWidget *twTreeDevice;
    QPushButton *pbDelete;
    QToolButton *tbNumModul;
    QLabel *label_5;
    QLineEdit *leNumProd;
    QLineEdit *leNumModul;
    QToolButton *tbNumProd;
    QLabel *label_4;
    QToolButton *tbAddSetterProd;
    QPushButton *pbAddSet;
    QPushButton *pbFinish;
    QPushButton *pbClose;
    QDateEdit *deDateUPD;

    void setupUi(QDialog *ShipWindow)
    {
        if (ShipWindow->objectName().isEmpty())
            ShipWindow->setObjectName("ShipWindow");
        ShipWindow->resize(980, 553);
        label_6 = new QLabel(ShipWindow);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(463, 20, 105, 16));
        label_7 = new QLabel(ShipWindow);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(463, 52, 105, 16));
        label_8 = new QLabel(ShipWindow);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(463, 83, 105, 16));
        label_9 = new QLabel(ShipWindow);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(463, 110, 105, 16));
        label_10 = new QLabel(ShipWindow);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(463, 140, 105, 16));
        label_11 = new QLabel(ShipWindow);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(463, 174, 105, 16));
        label_12 = new QLabel(ShipWindow);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(463, 205, 105, 16));
        label_13 = new QLabel(ShipWindow);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(463, 234, 105, 16));
        leObjectInstall = new QLineEdit(ShipWindow);
        leObjectInstall->setObjectName("leObjectInstall");
        leObjectInstall->setGeometry(QRect(570, 20, 389, 24));
        deDateOut = new QDateEdit(ShipWindow);
        deDateOut->setObjectName("deDateOut");
        deDateOut->setGeometry(QRect(570, 50, 389, 25));
        deDateOut->setCalendarPopup(true);
        leCustomer = new QLineEdit(ShipWindow);
        leCustomer->setObjectName("leCustomer");
        leCustomer->setGeometry(QRect(570, 80, 389, 24));
        leSchet = new QLineEdit(ShipWindow);
        leSchet->setObjectName("leSchet");
        leSchet->setGeometry(QRect(570, 110, 389, 24));
        leCardOrder = new QLineEdit(ShipWindow);
        leCardOrder->setObjectName("leCardOrder");
        leCardOrder->setGeometry(QRect(570, 140, 389, 24));
        leBuyer = new QLineEdit(ShipWindow);
        leBuyer->setObjectName("leBuyer");
        leBuyer->setGeometry(QRect(570, 170, 389, 24));
        leNumUPD = new QLineEdit(ShipWindow);
        leNumUPD->setObjectName("leNumUPD");
        leNumUPD->setGeometry(QRect(570, 200, 389, 24));
        groupBox = new QGroupBox(ShipWindow);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(20, 20, 401, 521));
        twTreeDevice = new QTreeWidget(groupBox);
        twTreeDevice->setObjectName("twTreeDevice");
        twTreeDevice->setGeometry(QRect(10, 120, 381, 391));
        pbDelete = new QPushButton(groupBox);
        pbDelete->setObjectName("pbDelete");
        pbDelete->setGeometry(QRect(310, 90, 80, 24));
        tbNumModul = new QToolButton(groupBox);
        tbNumModul->setObjectName("tbNumModul");
        tbNumModul->setGeometry(QRect(184, 56, 23, 23));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(16, 60, 51, 16));
        leNumProd = new QLineEdit(groupBox);
        leNumProd->setObjectName("leNumProd");
        leNumProd->setGeometry(QRect(70, 30, 113, 24));
        leNumModul = new QLineEdit(groupBox);
        leNumModul->setObjectName("leNumModul");
        leNumModul->setGeometry(QRect(70, 56, 113, 24));
        tbNumProd = new QToolButton(groupBox);
        tbNumProd->setObjectName("tbNumProd");
        tbNumProd->setGeometry(QRect(184, 30, 23, 23));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(16, 33, 51, 16));
        tbAddSetterProd = new QToolButton(groupBox);
        tbAddSetterProd->setObjectName("tbAddSetterProd");
        tbAddSetterProd->setGeometry(QRect(210, 30, 81, 23));
        pbAddSet = new QPushButton(groupBox);
        pbAddSet->setObjectName("pbAddSet");
        pbAddSet->setGeometry(QRect(210, 90, 80, 24));
        pbFinish = new QPushButton(ShipWindow);
        pbFinish->setObjectName("pbFinish");
        pbFinish->setGeometry(QRect(710, 490, 80, 24));
        pbClose = new QPushButton(ShipWindow);
        pbClose->setObjectName("pbClose");
        pbClose->setGeometry(QRect(810, 490, 80, 24));
        deDateUPD = new QDateEdit(ShipWindow);
        deDateUPD->setObjectName("deDateUPD");
        deDateUPD->setGeometry(QRect(570, 230, 390, 25));
        deDateUPD->setCalendarPopup(true);
        QWidget::setTabOrder(twTreeDevice, leObjectInstall);
        QWidget::setTabOrder(leObjectInstall, deDateOut);
        QWidget::setTabOrder(deDateOut, leCustomer);
        QWidget::setTabOrder(leCustomer, leSchet);
        QWidget::setTabOrder(leSchet, leCardOrder);
        QWidget::setTabOrder(leCardOrder, leBuyer);
        QWidget::setTabOrder(leBuyer, leNumUPD);
        QWidget::setTabOrder(leNumUPD, deDateUPD);
        QWidget::setTabOrder(deDateUPD, leNumProd);
        QWidget::setTabOrder(leNumProd, leNumModul);
        QWidget::setTabOrder(leNumModul, pbFinish);
        QWidget::setTabOrder(pbFinish, pbClose);
        QWidget::setTabOrder(pbClose, tbNumModul);
        QWidget::setTabOrder(tbNumModul, pbDelete);
        QWidget::setTabOrder(pbDelete, tbNumProd);
        QWidget::setTabOrder(tbNumProd, tbAddSetterProd);

        retranslateUi(ShipWindow);
        QObject::connect(pbClose, &QPushButton::clicked, ShipWindow, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(ShipWindow);
    } // setupUi

    void retranslateUi(QDialog *ShipWindow)
    {
        ShipWindow->setWindowTitle(QCoreApplication::translate("ShipWindow", "\320\236\321\202\320\263\321\200\321\203\320\267\320\272\320\260", nullptr));
        label_6->setText(QCoreApplication::translate("ShipWindow", "\320\236\320\261\321\212\320\265\320\272\321\202 \321\203\321\201\321\202\320\260\320\275\320\276\320\262\320\272\320\270", nullptr));
        label_7->setText(QCoreApplication::translate("ShipWindow", "\320\224\320\260\321\202\320\260 \320\276\321\202\320\263\321\200\321\203\320\267\320\272\320\270", nullptr));
        label_8->setText(QCoreApplication::translate("ShipWindow", "\320\227\320\260\320\272\320\260\320\267\321\207\320\270\320\272", nullptr));
        label_9->setText(QCoreApplication::translate("ShipWindow", "\320\241\321\207\320\265\321\202", nullptr));
        label_10->setText(QCoreApplication::translate("ShipWindow", "\320\232\320\260\321\200\321\202\320\260 \320\267\320\260\320\272\320\260\320\267\320\260", nullptr));
        label_11->setText(QCoreApplication::translate("ShipWindow", "\320\237\320\276\320\272\321\203\320\277\320\260\321\202\320\265\320\273\321\214", nullptr));
        label_12->setText(QCoreApplication::translate("ShipWindow", "\342\204\226 \320\243\320\237\320\224", nullptr));
        label_13->setText(QCoreApplication::translate("ShipWindow", "\320\224\320\260\321\202\320\260 \320\243\320\237\320\224", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ShipWindow", "\320\241\320\276\321\201\321\202\320\260\320\262 \320\276\321\202\320\263\321\200\321\203\320\267\320\272\320\270", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = twTreeDevice->headerItem();
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("ShipWindow", "\320\235\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        pbDelete->setText(QCoreApplication::translate("ShipWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        tbNumModul->setText(QCoreApplication::translate("ShipWindow", "+", nullptr));
        label_5->setText(QCoreApplication::translate("ShipWindow", "\320\234\320\276\320\264\321\203\320\273\321\214", nullptr));
        tbNumProd->setText(QCoreApplication::translate("ShipWindow", "+", nullptr));
        label_4->setText(QCoreApplication::translate("ShipWindow", "\320\230\320\267\320\264\320\265\320\273\320\270\320\265", nullptr));
        tbAddSetterProd->setText(QCoreApplication::translate("ShipWindow", "+ \320\262 \320\275\320\260\320\261\320\276\321\200", nullptr));
        pbAddSet->setText(QCoreApplication::translate("ShipWindow", "+ \320\235\320\260\320\261\320\276\321\200", nullptr));
        pbFinish->setText(QCoreApplication::translate("ShipWindow", "\320\236\321\202\320\263\321\200\321\203\320\267\320\270\321\202\321\214", nullptr));
        pbClose->setText(QCoreApplication::translate("ShipWindow", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShipWindow: public Ui_ShipWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHIPWINDOW_H
