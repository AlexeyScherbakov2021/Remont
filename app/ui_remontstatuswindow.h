/********************************************************************************
** Form generated from reading UI file 'remontstatuswindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMONTSTATUSWINDOW_H
#define UI_REMONTSTATUSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_RemontStatusWindow
{
public:
    QLabel *label;
    QLabel *label_2;
    QComboBox *cbStatus;
    QPushButton *pbOK;
    QPushButton *pbCancel;
    QDateEdit *deChangeDate;
    QLabel *label_3;
    QLineEdit *leComment;

    void setupUi(QDialog *RemontStatusWindow)
    {
        if (RemontStatusWindow->objectName().isEmpty())
            RemontStatusWindow->setObjectName("RemontStatusWindow");
        RemontStatusWindow->resize(400, 230);
        label = new QLabel(RemontStatusWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 30, 141, 16));
        label_2 = new QLabel(RemontStatusWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 70, 49, 16));
        cbStatus = new QComboBox(RemontStatusWindow);
        cbStatus->setObjectName("cbStatus");
        cbStatus->setGeometry(QRect(170, 70, 211, 24));
        pbOK = new QPushButton(RemontStatusWindow);
        pbOK->setObjectName("pbOK");
        pbOK->setGeometry(QRect(90, 150, 80, 24));
        pbCancel = new QPushButton(RemontStatusWindow);
        pbCancel->setObjectName("pbCancel");
        pbCancel->setGeometry(QRect(190, 150, 80, 24));
        deChangeDate = new QDateEdit(RemontStatusWindow);
        deChangeDate->setObjectName("deChangeDate");
        deChangeDate->setGeometry(QRect(170, 30, 211, 25));
        deChangeDate->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::UpDownArrows);
        deChangeDate->setProperty("showGroupSeparator", QVariant(false));
        deChangeDate->setCalendarPopup(true);
        label_3 = new QLabel(RemontStatusWindow);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 110, 101, 16));
        leComment = new QLineEdit(RemontStatusWindow);
        leComment->setObjectName("leComment");
        leComment->setGeometry(QRect(170, 106, 211, 24));

        retranslateUi(RemontStatusWindow);
        QObject::connect(pbCancel, &QPushButton::clicked, RemontStatusWindow, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(RemontStatusWindow);
    } // setupUi

    void retranslateUi(QDialog *RemontStatusWindow)
    {
        RemontStatusWindow->setWindowTitle(QCoreApplication::translate("RemontStatusWindow", "\320\230\320\267\320\274\320\265\320\275\320\265\320\275\320\270\320\265 \321\201\321\202\320\260\321\202\321\203\321\201\320\260 \321\200\320\265\320\274\320\276\320\275\321\202\320\260", nullptr));
        label->setText(QCoreApplication::translate("RemontStatusWindow", "\320\224\320\260\321\202\320\260 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\321\217 \321\201\321\202\320\260\321\202\321\203\321\201\320\260", nullptr));
        label_2->setText(QCoreApplication::translate("RemontStatusWindow", "\320\241\321\202\320\260\321\202\321\203\321\201", nullptr));
        pbOK->setText(QCoreApplication::translate("RemontStatusWindow", "OK", nullptr));
        pbCancel->setText(QCoreApplication::translate("RemontStatusWindow", "\320\236\321\202\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        label_3->setText(QCoreApplication::translate("RemontStatusWindow", "\320\232\320\276\320\274\320\274\320\265\320\275\321\202\320\260\321\200\320\270\320\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RemontStatusWindow: public Ui_RemontStatusWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMONTSTATUSWINDOW_H
