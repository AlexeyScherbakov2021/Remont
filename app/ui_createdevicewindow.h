/********************************************************************************
** Form generated from reading UI file 'createdevicewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEDEVICEWINDOW_H
#define UI_CREATEDEVICEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateDeviceWindow
{
public:
    QPushButton *pbClose;
    QTabWidget *tabWidget;
    QWidget *tab;
    QListWidget *lwProduct;
    QLabel *label;
    QLineEdit *leNumProduct;
    QLabel *label_10;
    QComboBox *cbProduct;
    QLabel *label_8;
    QLabel *label_23;
    QLineEdit *leNameProd;
    QPushButton *pbRegProduct;
    QToolButton *tbDeleteProduct;
    QWidget *tab_2;
    QTreeWidget *twModul;
    QLabel *label_2;
    QComboBox *cbModul;
    QLabel *label_9;
    QLabel *label_22;
    QLineEdit *leModulName;
    QLineEdit *leNumModul;
    QLabel *label_11;
    QPushButton *pbRegModul;
    QGroupBox *groupBox;
    QTableWidget *twPlates;
    QLineEdit *leSearchPlate;
    QLabel *label_3;
    QToolButton *tbSearchPlate;
    QToolButton *tbDelPlate;
    QToolButton *tbDeleteModul;

    void setupUi(QDialog *CreateDeviceWindow)
    {
        if (CreateDeviceWindow->objectName().isEmpty())
            CreateDeviceWindow->setObjectName("CreateDeviceWindow");
        CreateDeviceWindow->resize(888, 516);
        pbClose = new QPushButton(CreateDeviceWindow);
        pbClose->setObjectName("pbClose");
        pbClose->setGeometry(QRect(399, 463, 101, 41));
        tabWidget = new QTabWidget(CreateDeviceWindow);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(10, 10, 821, 441));
        tab = new QWidget();
        tab->setObjectName("tab");
        lwProduct = new QListWidget(tab);
        lwProduct->setObjectName("lwProduct");
        lwProduct->setGeometry(QRect(550, 30, 261, 371));
        label = new QLabel(tab);
        label->setObjectName("label");
        label->setGeometry(QRect(580, 10, 141, 16));
        leNumProduct = new QLineEdit(tab);
        leNumProduct->setObjectName("leNumProduct");
        leNumProduct->setGeometry(QRect(10, 180, 221, 24));
        label_10 = new QLabel(tab);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(10, 160, 111, 16));
        cbProduct = new QComboBox(tab);
        cbProduct->setObjectName("cbProduct");
        cbProduct->setGeometry(QRect(10, 50, 221, 24));
        label_8 = new QLabel(tab);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(10, 20, 91, 16));
        label_23 = new QLabel(tab);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(10, 90, 91, 16));
        leNameProd = new QLineEdit(tab);
        leNameProd->setObjectName("leNameProd");
        leNameProd->setGeometry(QRect(10, 120, 221, 24));
        pbRegProduct = new QPushButton(tab);
        pbRegProduct->setObjectName("pbRegProduct");
        pbRegProduct->setGeometry(QRect(390, 30, 121, 41));
        tbDeleteProduct = new QToolButton(tab);
        tbDeleteProduct->setObjectName("tbDeleteProduct");
        tbDeleteProduct->setGeometry(QRect(783, 6, 23, 23));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        twModul = new QTreeWidget(tab_2);
        twModul->headerItem()->setText(0, QString());
        twModul->setObjectName("twModul");
        twModul->setGeometry(QRect(550, 30, 261, 371));
        twModul->header()->setVisible(false);
        label_2 = new QLabel(tab_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(580, 10, 131, 16));
        cbModul = new QComboBox(tab_2);
        cbModul->setObjectName("cbModul");
        cbModul->setGeometry(QRect(115, 10, 200, 24));
        label_9 = new QLabel(tab_2);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(8, 13, 100, 16));
        label_22 = new QLabel(tab_2);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(8, 43, 100, 16));
        leModulName = new QLineEdit(tab_2);
        leModulName->setObjectName("leModulName");
        leModulName->setGeometry(QRect(115, 39, 200, 24));
        leNumModul = new QLineEdit(tab_2);
        leNumModul->setObjectName("leNumModul");
        leNumModul->setGeometry(QRect(115, 69, 200, 24));
        label_11 = new QLabel(tab_2);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(8, 73, 100, 16));
        pbRegModul = new QPushButton(tab_2);
        pbRegModul->setObjectName("pbRegModul");
        pbRegModul->setGeometry(QRect(390, 30, 121, 41));
        groupBox = new QGroupBox(tab_2);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 110, 531, 291));
        twPlates = new QTableWidget(groupBox);
        if (twPlates->columnCount() < 5)
            twPlates->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        twPlates->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        twPlates->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        twPlates->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        twPlates->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        twPlates->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        twPlates->setObjectName("twPlates");
        twPlates->setGeometry(QRect(10, 66, 511, 211));
        twPlates->setAlternatingRowColors(true);
        twPlates->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
        twPlates->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        twPlates->verticalHeader()->setVisible(false);
        leSearchPlate = new QLineEdit(groupBox);
        leSearchPlate->setObjectName("leSearchPlate");
        leSearchPlate->setGeometry(QRect(210, 30, 201, 24));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 35, 191, 16));
        tbSearchPlate = new QToolButton(groupBox);
        tbSearchPlate->setObjectName("tbSearchPlate");
        tbSearchPlate->setGeometry(QRect(410, 31, 23, 23));
        tbDelPlate = new QToolButton(groupBox);
        tbDelPlate->setObjectName("tbDelPlate");
        tbDelPlate->setGeometry(QRect(490, 40, 23, 23));
        tbDeleteModul = new QToolButton(tab_2);
        tbDeleteModul->setObjectName("tbDeleteModul");
        tbDeleteModul->setGeometry(QRect(787, 6, 23, 23));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        tbDeleteModul->setFont(font);
        tabWidget->addTab(tab_2, QString());
        QWidget::setTabOrder(leNumProduct, leNumModul);
        QWidget::setTabOrder(leNumModul, leSearchPlate);
        QWidget::setTabOrder(leSearchPlate, tbDeleteModul);
        QWidget::setTabOrder(tbDeleteModul, tabWidget);
        QWidget::setTabOrder(tabWidget, cbModul);
        QWidget::setTabOrder(cbModul, cbProduct);
        QWidget::setTabOrder(cbProduct, tbSearchPlate);
        QWidget::setTabOrder(tbSearchPlate, pbClose);
        QWidget::setTabOrder(pbClose, lwProduct);
        QWidget::setTabOrder(lwProduct, tbDeleteProduct);
        QWidget::setTabOrder(tbDeleteProduct, leModulName);
        QWidget::setTabOrder(leModulName, leNameProd);
        QWidget::setTabOrder(leNameProd, twModul);
        QWidget::setTabOrder(twModul, twPlates);
        QWidget::setTabOrder(twPlates, tbDelPlate);
        QWidget::setTabOrder(tbDelPlate, pbRegModul);
        QWidget::setTabOrder(pbRegModul, pbRegProduct);

        retranslateUi(CreateDeviceWindow);
        QObject::connect(pbClose, &QPushButton::clicked, CreateDeviceWindow, qOverload<>(&QDialog::close));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CreateDeviceWindow);
    } // setupUi

    void retranslateUi(QDialog *CreateDeviceWindow)
    {
        CreateDeviceWindow->setWindowTitle(QCoreApplication::translate("CreateDeviceWindow", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217 \321\203\321\201\321\202\321\200\320\276\320\271\321\201\321\202\320\262", nullptr));
        pbClose->setText(QCoreApplication::translate("CreateDeviceWindow", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("CreateDeviceWindow", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\275\321\213\320\265 \320\270\320\267\320\264\320\265\320\273\320\270\321\217", nullptr));
        label_10->setText(QCoreApplication::translate("CreateDeviceWindow", "\320\241\320\265\321\200\320\270\320\271\320\275\321\213\320\271 \320\275\320\276\320\274\320\265\321\200", nullptr));
        label_8->setText(QCoreApplication::translate("CreateDeviceWindow", "\320\242\320\270\320\277 \320\270\320\267\320\264\320\265\320\273\320\270\321\217", nullptr));
        label_23->setText(QCoreApplication::translate("CreateDeviceWindow", "\320\235\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        pbRegProduct->setText(QCoreApplication::translate("CreateDeviceWindow", "\320\227\320\260\321\200\320\265\320\263\320\265\321\201\321\202\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        tbDeleteProduct->setText(QCoreApplication::translate("CreateDeviceWindow", "-", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("CreateDeviceWindow", "\320\230\320\267\320\264\320\265\320\273\320\270\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("CreateDeviceWindow", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\275\321\213\320\265 \320\274\320\276\320\264\321\203\320\273\320\270", nullptr));
        label_9->setText(QCoreApplication::translate("CreateDeviceWindow", "\320\242\320\270\320\277 \320\274\320\276\320\264\321\203\320\273\321\217", nullptr));
        label_22->setText(QCoreApplication::translate("CreateDeviceWindow", "\320\235\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_11->setText(QCoreApplication::translate("CreateDeviceWindow", "\320\241\320\265\321\200\320\270\320\271\320\275\321\213\320\271 \320\275\320\276\320\274\320\265\321\200", nullptr));
        pbRegModul->setText(QCoreApplication::translate("CreateDeviceWindow", "\320\227\320\260\321\200\320\265\320\263\320\265\321\201\321\202\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        groupBox->setTitle(QCoreApplication::translate("CreateDeviceWindow", "\320\237\321\200\320\270\320\262\321\217\320\267\320\272\320\260 \320\277\320\273\320\260\321\202", nullptr));
        QTableWidgetItem *___qtablewidgetitem = twPlates->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("CreateDeviceWindow", "\342\204\226", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = twPlates->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("CreateDeviceWindow", "\342\204\226 \320\277\321\200\320\276\321\210\320\270\320\262\320\272\320\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = twPlates->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("CreateDeviceWindow", "\342\204\226 \320\275\320\260\320\272\320\273\320\260\320\264\320\275\320\276\320\271", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = twPlates->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("CreateDeviceWindow", "\320\222\320\235\320\244\320\242", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = twPlates->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("CreateDeviceWindow", "\320\224\320\260\321\202\320\260 \321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\320\270", nullptr));
        label_3->setText(QCoreApplication::translate("CreateDeviceWindow", "\320\237\321\200\320\270\320\262\321\217\320\267\320\260\321\202\321\214 \320\277\320\273\320\260\321\202\321\203 \321\201 \321\201\320\265\321\200\320\270\320\271\320\275\321\213\320\274 \342\204\226", nullptr));
        tbSearchPlate->setText(QCoreApplication::translate("CreateDeviceWindow", "...", nullptr));
        tbDelPlate->setText(QCoreApplication::translate("CreateDeviceWindow", "-", nullptr));
        tbDeleteModul->setText(QCoreApplication::translate("CreateDeviceWindow", "-", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("CreateDeviceWindow", "\320\234\320\276\320\264\321\203\320\273\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateDeviceWindow: public Ui_CreateDeviceWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEDEVICEWINDOW_H
