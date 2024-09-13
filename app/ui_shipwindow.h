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
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_ShipWindow
{
public:
    QLabel *label;
    QLabel *label_2;
    QListWidget *lwProduct;
    QListWidget *lwModul;
    QLabel *label_3;
    QTreeWidget *treeWidget;

    void setupUi(QDialog *ShipWindow)
    {
        if (ShipWindow->objectName().isEmpty())
            ShipWindow->setObjectName("ShipWindow");
        ShipWindow->resize(704, 476);
        label = new QLabel(ShipWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 10, 111, 16));
        label_2 = new QLabel(ShipWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(200, 10, 101, 16));
        lwProduct = new QListWidget(ShipWindow);
        lwProduct->setObjectName("lwProduct");
        lwProduct->setGeometry(QRect(10, 60, 181, 211));
        lwModul = new QListWidget(ShipWindow);
        lwModul->setObjectName("lwModul");
        lwModul->setGeometry(QRect(200, 60, 171, 211));
        label_3 = new QLabel(ShipWindow);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(440, 10, 51, 16));
        treeWidget = new QTreeWidget(ShipWindow);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName("treeWidget");
        treeWidget->setGeometry(QRect(380, 60, 256, 211));

        retranslateUi(ShipWindow);

        QMetaObject::connectSlotsByName(ShipWindow);
    } // setupUi

    void retranslateUi(QDialog *ShipWindow)
    {
        ShipWindow->setWindowTitle(QCoreApplication::translate("ShipWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ShipWindow", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\270\320\267\320\264\320\265\320\273\320\270\320\271", nullptr));
        label_2->setText(QCoreApplication::translate("ShipWindow", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\274\320\276\320\264\321\203\320\273\320\265\320\271", nullptr));
        label_3->setText(QCoreApplication::translate("ShipWindow", "\320\235\320\260\320\261\320\276\321\200\321\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShipWindow: public Ui_ShipWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHIPWINDOW_H
