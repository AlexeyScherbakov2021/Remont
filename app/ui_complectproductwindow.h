/********************************************************************************
** Form generated from reading UI file 'complectproductwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPLECTPRODUCTWINDOW_H
#define UI_COMPLECTPRODUCTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_ComplectProductWindow
{
public:
    QGroupBox *groupBox;
    QLabel *label_9;
    QLineEdit *leNumModSearch;
    QToolButton *tbSearchModul;
    QListWidget *lwOuterModule;
    QPushButton *pbAddModul;
    QPushButton *pbDeleteModul;
    QGroupBox *groupBox_2;
    QLabel *label;
    QListWidget *lwInnerModule;
    QLabel *label_4;
    QLabel *lbNameProd;
    QLineEdit *leNumProdSearch;
    QToolButton *tbModulSearch;
    QLabel *label_3;
    QLabel *label_14;
    QLabel *lbNumProd;
    QPushButton *pbOK;
    QPushButton *pbCancel;

    void setupUi(QDialog *ComplectProductWindow)
    {
        if (ComplectProductWindow->objectName().isEmpty())
            ComplectProductWindow->setObjectName("ComplectProductWindow");
        ComplectProductWindow->resize(865, 555);
        groupBox = new QGroupBox(ComplectProductWindow);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(500, 10, 341, 501));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(10, 30, 211, 16));
        leNumModSearch = new QLineEdit(groupBox);
        leNumModSearch->setObjectName("leNumModSearch");
        leNumModSearch->setGeometry(QRect(10, 50, 211, 24));
        tbSearchModul = new QToolButton(groupBox);
        tbSearchModul->setObjectName("tbSearchModul");
        tbSearchModul->setGeometry(QRect(220, 50, 23, 23));
        lwOuterModule = new QListWidget(groupBox);
        lwOuterModule->setObjectName("lwOuterModule");
        lwOuterModule->setGeometry(QRect(10, 90, 321, 401));
        pbAddModul = new QPushButton(ComplectProductWindow);
        pbAddModul->setObjectName("pbAddModul");
        pbAddModul->setGeometry(QRect(410, 240, 80, 24));
        pbDeleteModul = new QPushButton(ComplectProductWindow);
        pbDeleteModul->setObjectName("pbDeleteModul");
        pbDeleteModul->setGeometry(QRect(410, 270, 80, 24));
        groupBox_2 = new QGroupBox(ComplectProductWindow);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(10, 10, 371, 501));
        QFont font;
        font.setBold(false);
        groupBox_2->setFont(font);
        label = new QLabel(groupBox_2);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 160, 121, 16));
        lwInnerModule = new QListWidget(groupBox_2);
        lwInnerModule->setObjectName("lwInnerModule");
        lwInnerModule->setGeometry(QRect(10, 180, 341, 311));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 110, 90, 16));
        lbNameProd = new QLabel(groupBox_2);
        lbNameProd->setObjectName("lbNameProd");
        lbNameProd->setGeometry(QRect(105, 110, 240, 16));
        QFont font1;
        font1.setBold(true);
        lbNameProd->setFont(font1);
        leNumProdSearch = new QLineEdit(groupBox_2);
        leNumProdSearch->setObjectName("leNumProdSearch");
        leNumProdSearch->setGeometry(QRect(10, 51, 201, 24));
        tbModulSearch = new QToolButton(groupBox_2);
        tbModulSearch->setObjectName("tbModulSearch");
        tbModulSearch->setGeometry(QRect(210, 50, 23, 23));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 31, 131, 16));
        label_14 = new QLabel(groupBox_2);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(10, 90, 90, 16));
        lbNumProd = new QLabel(groupBox_2);
        lbNumProd->setObjectName("lbNumProd");
        lbNumProd->setGeometry(QRect(105, 90, 240, 16));
        lbNumProd->setFont(font1);
        pbOK = new QPushButton(ComplectProductWindow);
        pbOK->setObjectName("pbOK");
        pbOK->setGeometry(QRect(320, 520, 80, 24));
        pbCancel = new QPushButton(ComplectProductWindow);
        pbCancel->setObjectName("pbCancel");
        pbCancel->setGeometry(QRect(430, 520, 80, 24));

        retranslateUi(ComplectProductWindow);
        QObject::connect(pbCancel, &QPushButton::clicked, ComplectProductWindow, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ComplectProductWindow);
    } // setupUi

    void retranslateUi(QDialog *ComplectProductWindow)
    {
        ComplectProductWindow->setWindowTitle(QCoreApplication::translate("ComplectProductWindow", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ComplectProductWindow", "\320\241\320\262\320\276\320\261\320\276\320\264\320\275\321\213\320\265 \320\274\320\276\320\264\321\203\320\273\320\270", nullptr));
        label_9->setText(QCoreApplication::translate("ComplectProductWindow", "\320\277\320\276\320\270\321\201\320\272 \320\277\320\276 \321\201\320\265\321\200\320\270\320\271\320\275\320\276\320\274\321\203 \342\204\226", nullptr));
        tbSearchModul->setText(QCoreApplication::translate("ComplectProductWindow", "...", nullptr));
        pbAddModul->setText(QCoreApplication::translate("ComplectProductWindow", "<<", nullptr));
        pbDeleteModul->setText(QCoreApplication::translate("ComplectProductWindow", ">>", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("ComplectProductWindow", "\320\230\320\267\320\264\320\265\320\273\320\270\320\265", nullptr));
        label->setText(QCoreApplication::translate("ComplectProductWindow", "\320\234\320\276\320\264\321\203\320\273\320\270 \320\262 \321\201\320\276\321\201\321\202\320\260\320\262\320\265", nullptr));
        label_4->setText(QCoreApplication::translate("ComplectProductWindow", "\320\235\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        lbNameProd->setText(QString());
        tbModulSearch->setText(QCoreApplication::translate("ComplectProductWindow", "...", nullptr));
        label_3->setText(QCoreApplication::translate("ComplectProductWindow", "\320\237\320\276\320\270\321\201\320\272 \320\277\320\276 \321\201\320\265\321\200\320\270\320\271\320\275\320\276\320\274\321\203 \342\204\226", nullptr));
        label_14->setText(QCoreApplication::translate("ComplectProductWindow", "\320\241\320\265\321\200\320\270\320\271\320\275\321\213\320\271 \342\204\226", nullptr));
        lbNumProd->setText(QString());
        pbOK->setText(QCoreApplication::translate("ComplectProductWindow", "OK", nullptr));
        pbCancel->setText(QCoreApplication::translate("ComplectProductWindow", "\320\236\321\202\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ComplectProductWindow: public Ui_ComplectProductWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPLECTPRODUCTWINDOW_H
