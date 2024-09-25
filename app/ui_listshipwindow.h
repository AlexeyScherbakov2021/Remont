/********************************************************************************
** Form generated from reading UI file 'listshipwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTSHIPWINDOW_H
#define UI_LISTSHIPWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_ListShipWindow
{
public:
    QLabel *label;
    QTableWidget *tableWidget;
    QPushButton *pbNew;
    QPushButton *pbEdit;
    QPushButton *pbClose;
    QPushButton *pbDeleteShip;

    void setupUi(QDialog *ListShipWindow)
    {
        if (ListShipWindow->objectName().isEmpty())
            ListShipWindow->setObjectName("ListShipWindow");
        ListShipWindow->resize(1035, 488);
        label = new QLabel(ListShipWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 20, 211, 16));
        tableWidget = new QTableWidget(ListShipWindow);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(20, 70, 1001, 361));
        tableWidget->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        pbNew = new QPushButton(ListShipWindow);
        pbNew->setObjectName("pbNew");
        pbNew->setGeometry(QRect(20, 40, 111, 24));
        pbEdit = new QPushButton(ListShipWindow);
        pbEdit->setObjectName("pbEdit");
        pbEdit->setGeometry(QRect(150, 40, 80, 24));
        pbClose = new QPushButton(ListShipWindow);
        pbClose->setObjectName("pbClose");
        pbClose->setGeometry(QRect(480, 450, 80, 24));
        pbDeleteShip = new QPushButton(ListShipWindow);
        pbDeleteShip->setObjectName("pbDeleteShip");
        pbDeleteShip->setGeometry(QRect(250, 40, 80, 24));
        QWidget::setTabOrder(tableWidget, pbEdit);
        QWidget::setTabOrder(pbEdit, pbNew);
        QWidget::setTabOrder(pbNew, pbClose);

        retranslateUi(ListShipWindow);
        QObject::connect(pbClose, &QPushButton::clicked, ListShipWindow, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(ListShipWindow);
    } // setupUi

    void retranslateUi(QDialog *ListShipWindow)
    {
        ListShipWindow->setWindowTitle(QCoreApplication::translate("ListShipWindow", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\276\321\202\320\263\321\200\321\203\320\267\320\276\320\272", nullptr));
        label->setText(QCoreApplication::translate("ListShipWindow", "\320\235\320\265\320\267\320\260\320\262\320\265\321\200\321\210\320\265\320\275\320\275\321\213\320\265 \320\276\321\202\320\263\321\200\321\203\320\267\320\272\320\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("ListShipWindow", "\342\204\226", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("ListShipWindow", "\320\241\321\207\320\265\321\202", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("ListShipWindow", "\320\227\320\260\320\272\320\260\320\267\321\207\320\270\320\272", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("ListShipWindow", "\320\232\320\260\321\200\321\202\320\260 \320\267\320\260\320\272\320\260\320\267\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("ListShipWindow", "\320\236\320\261\321\212\320\265\320\272\321\202 \321\203\321\201\321\202\320\260\320\275\320\276\320\262\320\272\320\270", nullptr));
        pbNew->setText(QCoreApplication::translate("ListShipWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\275\320\276\320\262\321\203\321\216", nullptr));
        pbEdit->setText(QCoreApplication::translate("ListShipWindow", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        pbClose->setText(QCoreApplication::translate("ListShipWindow", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
        pbDeleteShip->setText(QCoreApplication::translate("ListShipWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ListShipWindow: public Ui_ListShipWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTSHIPWINDOW_H
