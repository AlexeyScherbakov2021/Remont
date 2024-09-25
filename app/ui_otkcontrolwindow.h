/********************************************************************************
** Form generated from reading UI file 'otkcontrolwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OTKCONTROLWINDOW_H
#define UI_OTKCONTROLWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OTKControlWindow
{
public:
    QPushButton *pbOK;
    QPushButton *pbCancel;
    QTabWidget *tabWidget;
    QWidget *tab_2;
    QLabel *label_5;
    QToolButton *tbDelCheckProd;
    QListWidget *lwBrokenProd;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *leNumProduct;
    QPushButton *pbCheckProd;
    QPushButton *pbBrokenProd;
    QToolButton *tbDelBrokenProd;
    QListWidget *lwProduct;
    QListWidget *lwCheckedProd;
    QWidget *tab;
    QLabel *label;
    QLineEdit *leNumModul;
    QLabel *label_2;
    QListWidget *lwModul;
    QPushButton *pbCheck;
    QPushButton *pbBroken;
    QLabel *label_3;
    QListWidget *lwChecked;
    QToolButton *tbDelCheck;
    QLabel *label_4;
    QToolButton *tbDelBroken;
    QListWidget *lwBroken;
    QRadioButton *rbNewDevice;
    QRadioButton *rbOldDevice;

    void setupUi(QDialog *OTKControlWindow)
    {
        if (OTKControlWindow->objectName().isEmpty())
            OTKControlWindow->setObjectName("OTKControlWindow");
        OTKControlWindow->resize(906, 612);
        pbOK = new QPushButton(OTKControlWindow);
        pbOK->setObjectName("pbOK");
        pbOK->setGeometry(QRect(810, 480, 80, 24));
        pbCancel = new QPushButton(OTKControlWindow);
        pbCancel->setObjectName("pbCancel");
        pbCancel->setGeometry(QRect(810, 520, 80, 24));
        tabWidget = new QTabWidget(OTKControlWindow);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(10, 10, 771, 591));
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        label_5 = new QLabel(tab_2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(390, 353, 140, 16));
        tbDelCheckProd = new QToolButton(tab_2);
        tbDelCheckProd->setObjectName("tbDelCheckProd");
        tbDelCheckProd->setGeometry(QRect(350, 355, 23, 23));
        lwBrokenProd = new QListWidget(tab_2);
        lwBrokenProd->setObjectName("lwBrokenProd");
        lwBrokenProd->setGeometry(QRect(390, 380, 370, 161));
        label_6 = new QLabel(tab_2);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, 10, 191, 16));
        label_7 = new QLabel(tab_2);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(10, 353, 131, 16));
        label_8 = new QLabel(tab_2);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(20, 60, 211, 16));
        leNumProduct = new QLineEdit(tab_2);
        leNumProduct->setObjectName("leNumProduct");
        leNumProduct->setGeometry(QRect(20, 30, 261, 24));
        pbCheckProd = new QPushButton(tab_2);
        pbCheckProd->setObjectName("pbCheckProd");
        pbCheckProd->setGeometry(QRect(170, 320, 111, 24));
        pbBrokenProd = new QPushButton(tab_2);
        pbBrokenProd->setObjectName("pbBrokenProd");
        pbBrokenProd->setGeometry(QRect(540, 320, 111, 24));
        tbDelBrokenProd = new QToolButton(tab_2);
        tbDelBrokenProd->setObjectName("tbDelBrokenProd");
        tbDelBrokenProd->setGeometry(QRect(730, 354, 23, 23));
        lwProduct = new QListWidget(tab_2);
        lwProduct->setObjectName("lwProduct");
        lwProduct->setGeometry(QRect(10, 80, 751, 231));
        lwCheckedProd = new QListWidget(tab_2);
        lwCheckedProd->setObjectName("lwCheckedProd");
        lwCheckedProd->setGeometry(QRect(10, 380, 370, 161));
        tabWidget->addTab(tab_2, QString());
        tab = new QWidget();
        tab->setObjectName("tab");
        label = new QLabel(tab);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 10, 191, 16));
        leNumModul = new QLineEdit(tab);
        leNumModul->setObjectName("leNumModul");
        leNumModul->setGeometry(QRect(20, 30, 261, 24));
        label_2 = new QLabel(tab);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 60, 211, 16));
        lwModul = new QListWidget(tab);
        lwModul->setObjectName("lwModul");
        lwModul->setGeometry(QRect(10, 80, 751, 231));
        pbCheck = new QPushButton(tab);
        pbCheck->setObjectName("pbCheck");
        pbCheck->setGeometry(QRect(170, 320, 111, 24));
        pbBroken = new QPushButton(tab);
        pbBroken->setObjectName("pbBroken");
        pbBroken->setGeometry(QRect(540, 320, 111, 24));
        label_3 = new QLabel(tab);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 353, 161, 16));
        lwChecked = new QListWidget(tab);
        lwChecked->setObjectName("lwChecked");
        lwChecked->setGeometry(QRect(10, 380, 370, 161));
        tbDelCheck = new QToolButton(tab);
        tbDelCheck->setObjectName("tbDelCheck");
        tbDelCheck->setGeometry(QRect(350, 356, 23, 23));
        label_4 = new QLabel(tab);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(390, 353, 161, 16));
        tbDelBroken = new QToolButton(tab);
        tbDelBroken->setObjectName("tbDelBroken");
        tbDelBroken->setGeometry(QRect(730, 356, 23, 23));
        lwBroken = new QListWidget(tab);
        lwBroken->setObjectName("lwBroken");
        lwBroken->setGeometry(QRect(390, 380, 370, 161));
        tabWidget->addTab(tab, QString());
        rbNewDevice = new QRadioButton(OTKControlWindow);
        rbNewDevice->setObjectName("rbNewDevice");
        rbNewDevice->setGeometry(QRect(792, 50, 91, 22));
        rbNewDevice->setChecked(true);
        rbOldDevice = new QRadioButton(OTKControlWindow);
        rbOldDevice->setObjectName("rbOldDevice");
        rbOldDevice->setGeometry(QRect(792, 80, 111, 22));

        retranslateUi(OTKControlWindow);
        QObject::connect(pbCancel, &QPushButton::clicked, OTKControlWindow, qOverload<>(&QDialog::reject));
        QObject::connect(pbOK, &QPushButton::clicked, OTKControlWindow, qOverload<>(&QDialog::accept));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(OTKControlWindow);
    } // setupUi

    void retranslateUi(QDialog *OTKControlWindow)
    {
        OTKControlWindow->setWindowTitle(QCoreApplication::translate("OTKControlWindow", "\320\237\321\200\320\276\320\262\320\265\321\200\320\272\320\260 \320\236\320\242\320\232", nullptr));
        pbOK->setText(QCoreApplication::translate("OTKControlWindow", "OK", nullptr));
        pbCancel->setText(QCoreApplication::translate("OTKControlWindow", "\320\236\321\202\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        label_5->setText(QCoreApplication::translate("OTKControlWindow", "\320\227\320\260\320\261\321\200\320\260\320\272\320\276\320\262\320\260\320\275\320\275\321\213\320\265 \320\274\320\276\320\264\321\203\320\273\320\270", nullptr));
        tbDelCheckProd->setText(QCoreApplication::translate("OTKControlWindow", "-", nullptr));
        label_6->setText(QCoreApplication::translate("OTKControlWindow", "\320\237\320\276\320\270\321\201\320\272 \320\277\320\276 \321\201\320\265\321\200\320\270\320\271\320\275\320\276\320\274\321\203 \320\275\320\276\320\274\320\265\321\200\321\203", nullptr));
        label_7->setText(QCoreApplication::translate("OTKControlWindow", "\320\237\321\200\320\276\320\262\320\265\321\200\320\265\320\275\320\275\321\213\320\265 \320\274\320\276\320\264\321\203\320\273\320\270", nullptr));
        label_8->setText(QCoreApplication::translate("OTKControlWindow", "\320\230\320\267\320\264\320\265\320\273\320\270\321\217 \320\264\320\273\321\217 \320\277\321\200\320\276\320\262\320\265\321\200\320\272\320\270", nullptr));
        pbCheckProd->setText(QCoreApplication::translate("OTKControlWindow", "\320\230\321\201\320\277\321\200\320\260\320\262\320\265\320\275", nullptr));
        pbBrokenProd->setText(QCoreApplication::translate("OTKControlWindow", "\320\235\320\265\320\270\321\201\320\277\321\200\320\260\320\262\320\265\320\275", nullptr));
        tbDelBrokenProd->setText(QCoreApplication::translate("OTKControlWindow", "-", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("OTKControlWindow", "\320\230\320\267\320\264\320\265\320\273\320\270\321\217", nullptr));
        label->setText(QCoreApplication::translate("OTKControlWindow", "\320\237\320\276\320\270\321\201\320\272 \320\277\320\276 \321\201\320\265\321\200\320\270\320\271\320\275\320\276\320\274\321\203 \320\275\320\276\320\274\320\265\321\200\321\203", nullptr));
        label_2->setText(QCoreApplication::translate("OTKControlWindow", "\320\234\320\276\320\264\321\203\320\273\320\270 \320\264\320\273\321\217 \320\277\321\200\320\276\320\262\320\265\321\200\320\272\320\270", nullptr));
        pbCheck->setText(QCoreApplication::translate("OTKControlWindow", "\320\230\321\201\320\277\321\200\320\260\320\262\320\265\320\275", nullptr));
        pbBroken->setText(QCoreApplication::translate("OTKControlWindow", "\320\235\320\265\320\270\321\201\320\277\321\200\320\260\320\262\320\265\320\275", nullptr));
        label_3->setText(QCoreApplication::translate("OTKControlWindow", "\320\237\321\200\320\276\320\262\320\265\321\200\320\265\320\275\320\275\321\213\320\265 \320\274\320\276\320\264\321\203\320\273\320\270", nullptr));
        tbDelCheck->setText(QCoreApplication::translate("OTKControlWindow", "-", nullptr));
        label_4->setText(QCoreApplication::translate("OTKControlWindow", "\320\227\320\260\320\261\321\200\320\260\320\272\320\276\320\262\320\260\320\275\320\275\321\213\320\265 \320\274\320\276\320\264\321\203\320\273\320\270", nullptr));
        tbDelBroken->setText(QCoreApplication::translate("OTKControlWindow", "-", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("OTKControlWindow", "\320\234\320\276\320\264\321\203\320\273\320\270", nullptr));
        rbNewDevice->setText(QCoreApplication::translate("OTKControlWindow", "\320\235\320\276\320\262\321\213\320\265", nullptr));
        rbOldDevice->setText(QCoreApplication::translate("OTKControlWindow", "\320\235\320\265\320\270\321\201\320\277\321\200\320\260\320\262\320\275\321\213\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OTKControlWindow: public Ui_OTKControlWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OTKCONTROLWINDOW_H
