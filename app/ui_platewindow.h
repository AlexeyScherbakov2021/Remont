/********************************************************************************
** Form generated from reading UI file 'platewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLATEWINDOW_H
#define UI_PLATEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_PlateWindow
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *leNumber;
    QLineEdit *leNumberFW;
    QLineEdit *leVNFT;
    QLineEdit *leNumberDoc;
    QDateEdit *deCreateDate;
    QPushButton *pbAdd;
    QPushButton *pbCancel;
    QListWidget *listWidget;
    QLabel *label_6;
    QToolButton *tbDelete;

    void setupUi(QDialog *PlateWindow)
    {
        if (PlateWindow->objectName().isEmpty())
            PlateWindow->setObjectName("PlateWindow");
        PlateWindow->resize(693, 300);
        label = new QLabel(PlateWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 50, 80, 16));
        label_2 = new QLabel(PlateWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 80, 80, 16));
        label_3 = new QLabel(PlateWindow);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 110, 80, 16));
        label_4 = new QLabel(PlateWindow);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(40, 140, 80, 16));
        label_5 = new QLabel(PlateWindow);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(40, 170, 80, 16));
        leNumber = new QLineEdit(PlateWindow);
        leNumber->setObjectName("leNumber");
        leNumber->setGeometry(QRect(140, 80, 180, 24));
        leNumberFW = new QLineEdit(PlateWindow);
        leNumberFW->setObjectName("leNumberFW");
        leNumberFW->setGeometry(QRect(140, 110, 180, 24));
        leVNFT = new QLineEdit(PlateWindow);
        leVNFT->setObjectName("leVNFT");
        leVNFT->setGeometry(QRect(140, 140, 180, 24));
        leNumberDoc = new QLineEdit(PlateWindow);
        leNumberDoc->setObjectName("leNumberDoc");
        leNumberDoc->setGeometry(QRect(140, 170, 180, 24));
        deCreateDate = new QDateEdit(PlateWindow);
        deCreateDate->setObjectName("deCreateDate");
        deCreateDate->setGeometry(QRect(140, 50, 180, 25));
        deCreateDate->setCalendarPopup(true);
        pbAdd = new QPushButton(PlateWindow);
        pbAdd->setObjectName("pbAdd");
        pbAdd->setGeometry(QRect(90, 230, 80, 24));
        pbCancel = new QPushButton(PlateWindow);
        pbCancel->setObjectName("pbCancel");
        pbCancel->setGeometry(QRect(200, 230, 80, 24));
        listWidget = new QListWidget(PlateWindow);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(400, 50, 256, 192));
        label_6 = new QLabel(PlateWindow);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(400, 30, 81, 16));
        tbDelete = new QToolButton(PlateWindow);
        tbDelete->setObjectName("tbDelete");
        tbDelete->setGeometry(QRect(630, 20, 23, 23));

        retranslateUi(PlateWindow);
        QObject::connect(pbCancel, &QPushButton::clicked, PlateWindow, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(PlateWindow);
    } // setupUi

    void retranslateUi(QDialog *PlateWindow)
    {
        PlateWindow->setWindowTitle(QCoreApplication::translate("PlateWindow", "\320\237\320\273\320\260\321\202\320\260", nullptr));
        label->setText(QCoreApplication::translate("PlateWindow", "\320\224\320\260\321\202\320\260 \321\201\320\276\320\267\320\264\320\260\320\275\320\270\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("PlateWindow", "\320\241\320\265\321\200\320\270\320\271\320\275\321\213\320\271 \342\204\226", nullptr));
        label_3->setText(QCoreApplication::translate("PlateWindow", "\342\204\226 \320\277\321\200\320\276\321\210\320\270\320\262\320\272\320\270", nullptr));
        label_4->setText(QCoreApplication::translate("PlateWindow", "\320\222\320\235\320\244\320\242", nullptr));
        label_5->setText(QCoreApplication::translate("PlateWindow", "\342\204\226 \320\275\320\260\320\272\320\273\320\260\320\264\320\275\320\276\320\271", nullptr));
        pbAdd->setText(QCoreApplication::translate("PlateWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        pbCancel->setText(QCoreApplication::translate("PlateWindow", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
        label_6->setText(QCoreApplication::translate("PlateWindow", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\321\213", nullptr));
        tbDelete->setText(QCoreApplication::translate("PlateWindow", "-", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PlateWindow: public Ui_PlateWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLATEWINDOW_H
