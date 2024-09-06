/********************************************************************************
** Form generated from reading UI file 'selectdevicewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTDEVICEWINDOW_H
#define UI_SELECTDEVICEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SelectDeviceWindow
{
public:
    QLabel *label;
    QLineEdit *leSearch;
    QToolButton *tbSearch;
    QTabWidget *tabWidget;
    QWidget *tabProduct;
    QTableWidget *twProduct;
    QWidget *tabModul;
    QTableWidget *twModul;
    QPushButton *pbSelect;
    QPushButton *pbCancel;

    void setupUi(QDialog *SelectDeviceWindow)
    {
        if (SelectDeviceWindow->objectName().isEmpty())
            SelectDeviceWindow->setObjectName("SelectDeviceWindow");
        SelectDeviceWindow->resize(721, 449);
        label = new QLabel(SelectDeviceWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(31, 14, 80, 16));
        leSearch = new QLineEdit(SelectDeviceWindow);
        leSearch->setObjectName("leSearch");
        leSearch->setGeometry(QRect(120, 10, 201, 24));
        tbSearch = new QToolButton(SelectDeviceWindow);
        tbSearch->setObjectName("tbSearch");
        tbSearch->setGeometry(QRect(320, 11, 23, 23));
        tabWidget = new QTabWidget(SelectDeviceWindow);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(20, 50, 661, 341));
        tabProduct = new QWidget();
        tabProduct->setObjectName("tabProduct");
        twProduct = new QTableWidget(tabProduct);
        if (twProduct->columnCount() < 3)
            twProduct->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        twProduct->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        twProduct->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        twProduct->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        twProduct->setObjectName("twProduct");
        twProduct->setGeometry(QRect(10, 10, 621, 281));
        twProduct->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
        twProduct->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        tabWidget->addTab(tabProduct, QString());
        tabModul = new QWidget();
        tabModul->setObjectName("tabModul");
        twModul = new QTableWidget(tabModul);
        if (twModul->columnCount() < 3)
            twModul->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        twModul->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        twModul->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        twModul->setHorizontalHeaderItem(2, __qtablewidgetitem5);
        twModul->setObjectName("twModul");
        twModul->setGeometry(QRect(10, 8, 631, 291));
        twModul->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
        twModul->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        tabWidget->addTab(tabModul, QString());
        pbSelect = new QPushButton(SelectDeviceWindow);
        pbSelect->setObjectName("pbSelect");
        pbSelect->setGeometry(QRect(260, 410, 80, 24));
        pbCancel = new QPushButton(SelectDeviceWindow);
        pbCancel->setObjectName("pbCancel");
        pbCancel->setGeometry(QRect(370, 410, 80, 24));

        retranslateUi(SelectDeviceWindow);
        QObject::connect(pbCancel, &QPushButton::clicked, SelectDeviceWindow, qOverload<>(&QDialog::reject));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SelectDeviceWindow);
    } // setupUi

    void retranslateUi(QDialog *SelectDeviceWindow)
    {
        SelectDeviceWindow->setWindowTitle(QCoreApplication::translate("SelectDeviceWindow", "\320\222\321\213\320\261\320\276\321\200 \321\203\321\201\321\202\321\200\320\276\320\271\321\201\321\202\320\262", nullptr));
        label->setText(QCoreApplication::translate("SelectDeviceWindow", "\320\241\320\265\321\200\320\270\320\271\320\275\321\213\320\271 \342\204\226", nullptr));
        tbSearch->setText(QCoreApplication::translate("SelectDeviceWindow", "...", nullptr));
        QTableWidgetItem *___qtablewidgetitem = twProduct->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("SelectDeviceWindow", "\320\227\320\260\320\262\320\276\320\264\321\201\320\272\320\276\320\271 \342\204\226", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = twProduct->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("SelectDeviceWindow", "\320\235\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = twProduct->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("SelectDeviceWindow", "\320\241\321\202\320\260\321\202\321\203\321\201", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabProduct), QCoreApplication::translate("SelectDeviceWindow", "\320\230\320\267\320\264\320\265\320\273\320\270\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = twModul->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("SelectDeviceWindow", "\320\227\320\260\320\262\320\276\320\264\321\201\320\272\320\276\320\271 \342\204\226", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = twModul->horizontalHeaderItem(1);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("SelectDeviceWindow", "\320\235\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = twModul->horizontalHeaderItem(2);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("SelectDeviceWindow", "\320\241\321\202\320\260\321\202\321\203\321\201", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabModul), QCoreApplication::translate("SelectDeviceWindow", "\320\234\320\276\320\264\321\203\320\273\320\270", nullptr));
        pbSelect->setText(QCoreApplication::translate("SelectDeviceWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214", nullptr));
        pbCancel->setText(QCoreApplication::translate("SelectDeviceWindow", "\320\236\321\202\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SelectDeviceWindow: public Ui_SelectDeviceWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTDEVICEWINDOW_H
