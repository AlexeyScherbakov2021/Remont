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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateDeviceWindow
{
public:
    QLabel *label;
    QLineEdit *leNumber;
    QPushButton *pbAdd;
    QPushButton *pbClose;
    QListWidget *listWidget;
    QLabel *label_2;
    QGroupBox *groupBox;
    QTabWidget *tabWidget;
    QWidget *tab;
    QComboBox *cbProduct;
    QWidget *tab_2;
    QComboBox *cbModul;
    QToolButton *tbDelete;

    void setupUi(QDialog *CreateDeviceWindow)
    {
        if (CreateDeviceWindow->objectName().isEmpty())
            CreateDeviceWindow->setObjectName("CreateDeviceWindow");
        CreateDeviceWindow->resize(823, 459);
        label = new QLabel(CreateDeviceWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 20, 121, 16));
        leNumber = new QLineEdit(CreateDeviceWindow);
        leNumber->setObjectName("leNumber");
        leNumber->setGeometry(QRect(160, 17, 241, 24));
        pbAdd = new QPushButton(CreateDeviceWindow);
        pbAdd->setObjectName("pbAdd");
        pbAdd->setGeometry(QRect(60, 380, 80, 24));
        pbClose = new QPushButton(CreateDeviceWindow);
        pbClose->setObjectName("pbClose");
        pbClose->setGeometry(QRect(160, 380, 80, 24));
        listWidget = new QListWidget(CreateDeviceWindow);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(480, 70, 281, 291));
        label_2 = new QLabel(CreateDeviceWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(540, 10, 211, 16));
        groupBox = new QGroupBox(CreateDeviceWindow);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(30, 80, 271, 141));
        tabWidget = new QTabWidget(groupBox);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(7, 32, 250, 91));
        tab = new QWidget();
        tab->setObjectName("tab");
        cbProduct = new QComboBox(tab);
        cbProduct->setObjectName("cbProduct");
        cbProduct->setGeometry(QRect(10, 20, 220, 24));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        cbModul = new QComboBox(tab_2);
        cbModul->setObjectName("cbModul");
        cbModul->setGeometry(QRect(10, 20, 220, 24));
        tabWidget->addTab(tab_2, QString());
        tbDelete = new QToolButton(CreateDeviceWindow);
        tbDelete->setObjectName("tbDelete");
        tbDelete->setGeometry(QRect(490, 40, 23, 23));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        tbDelete->setFont(font);

        retranslateUi(CreateDeviceWindow);
        QObject::connect(pbClose, &QPushButton::clicked, CreateDeviceWindow, qOverload<>(&QDialog::close));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CreateDeviceWindow);
    } // setupUi

    void retranslateUi(QDialog *CreateDeviceWindow)
    {
        CreateDeviceWindow->setWindowTitle(QCoreApplication::translate("CreateDeviceWindow", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217 \321\203\321\201\321\202\321\200\320\276\320\271\321\201\321\202\320\262\320\260", nullptr));
        label->setText(QCoreApplication::translate("CreateDeviceWindow", "\320\241\320\265\321\200\320\270\320\271\320\275\321\213\320\271 \320\275\320\276\320\274\320\265\321\200", nullptr));
        pbAdd->setText(QCoreApplication::translate("CreateDeviceWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        pbClose->setText(QCoreApplication::translate("CreateDeviceWindow", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
        label_2->setText(QCoreApplication::translate("CreateDeviceWindow", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\275\321\213\320\265 \320\275\320\276\320\274\320\265\321\200\320\260", nullptr));
        groupBox->setTitle(QCoreApplication::translate("CreateDeviceWindow", "\320\222\321\213\320\261\320\276\321\200 \321\202\320\270\320\277\320\260", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("CreateDeviceWindow", "\320\230\320\267\320\264\320\265\320\273\320\270\320\265", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("CreateDeviceWindow", "\320\234\320\276\320\264\321\203\320\273\321\214", nullptr));
        tbDelete->setText(QCoreApplication::translate("CreateDeviceWindow", "-", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateDeviceWindow: public Ui_CreateDeviceWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEDEVICEWINDOW_H
