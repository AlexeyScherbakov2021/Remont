/********************************************************************************
** Form generated from reading UI file 'selectplatewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTPLATEWINDOW_H
#define UI_SELECTPLATEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_SelectPlateWindow
{
public:
    QFrame *frame;
    QTableWidget *tableWidget;
    QPushButton *pbSelect;
    QPushButton *pbCancel;

    void setupUi(QDialog *SelectPlateWindow)
    {
        if (SelectPlateWindow->objectName().isEmpty())
            SelectPlateWindow->setObjectName("SelectPlateWindow");
        SelectPlateWindow->resize(707, 390);
        frame = new QFrame(SelectPlateWindow);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(10, 10, 601, 371));
        frame->setFrameShape(QFrame::Shape::Box);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        tableWidget = new QTableWidget(frame);
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
        tableWidget->setGeometry(QRect(10, 10, 581, 351));
        tableWidget->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        pbSelect = new QPushButton(SelectPlateWindow);
        pbSelect->setObjectName("pbSelect");
        pbSelect->setGeometry(QRect(620, 30, 80, 24));
        pbCancel = new QPushButton(SelectPlateWindow);
        pbCancel->setObjectName("pbCancel");
        pbCancel->setGeometry(QRect(620, 60, 80, 24));

        retranslateUi(SelectPlateWindow);
        QObject::connect(pbCancel, &QPushButton::clicked, SelectPlateWindow, qOverload<>(&QDialog::reject));
        QObject::connect(pbSelect, &QPushButton::clicked, SelectPlateWindow, qOverload<>(&QDialog::accept));

        pbSelect->setDefault(true);


        QMetaObject::connectSlotsByName(SelectPlateWindow);
    } // setupUi

    void retranslateUi(QDialog *SelectPlateWindow)
    {
        SelectPlateWindow->setWindowTitle(QCoreApplication::translate("SelectPlateWindow", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\277\320\273\320\260\321\202", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("SelectPlateWindow", "\320\224\320\260\321\202\320\260 \321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\320\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("SelectPlateWindow", "\320\241\320\265\321\200\320\270\320\271\320\275\321\213\320\271 \342\204\226", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("SelectPlateWindow", "\342\204\226 \320\277\321\200\320\276\321\210\320\270\320\262\320\272\320\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("SelectPlateWindow", "\320\222\320\235\320\244\320\242", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("SelectPlateWindow", "\342\204\226 \320\275\320\260\320\272\320\273\320\260\320\264\320\275\320\276\320\271", nullptr));
        pbSelect->setText(QCoreApplication::translate("SelectPlateWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214", nullptr));
        pbCancel->setText(QCoreApplication::translate("SelectPlateWindow", "\320\236\321\202\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SelectPlateWindow: public Ui_SelectPlateWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTPLATEWINDOW_H
