/********************************************************************************
** Form generated from reading UI file 'acceptremontwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCEPTREMONTWINDOW_H
#define UI_ACCEPTREMONTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AcceptRemontWindow
{
public:
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QDateEdit *deDate;
    QLineEdit *leAction;
    QLineEdit *leDefect;
    QPushButton *pbExchange;
    QPushButton *pbApply;
    QComboBox *cbReason;
    QComboBox *cbClaim;
    QLabel *label_2;
    QComboBox *cbDevice;

    void setupUi(QDialog *AcceptRemontWindow)
    {
        if (AcceptRemontWindow->objectName().isEmpty())
            AcceptRemontWindow->setObjectName("AcceptRemontWindow");
        AcceptRemontWindow->resize(385, 288);
        label = new QLabel(AcceptRemontWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 20, 121, 16));
        label_3 = new QLabel(AcceptRemontWindow);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 90, 49, 16));
        label_4 = new QLabel(AcceptRemontWindow);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 120, 91, 16));
        label_5 = new QLabel(AcceptRemontWindow);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 150, 71, 16));
        label_6 = new QLabel(AcceptRemontWindow);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, 180, 49, 16));
        deDate = new QDateEdit(AcceptRemontWindow);
        deDate->setObjectName("deDate");
        deDate->setGeometry(QRect(110, 88, 230, 25));
        deDate->setCalendarPopup(true);
        leAction = new QLineEdit(AcceptRemontWindow);
        leAction->setObjectName("leAction");
        leAction->setGeometry(QRect(110, 150, 230, 24));
        leDefect = new QLineEdit(AcceptRemontWindow);
        leDefect->setObjectName("leDefect");
        leDefect->setGeometry(QRect(110, 180, 230, 24));
        pbExchange = new QPushButton(AcceptRemontWindow);
        pbExchange->setObjectName("pbExchange");
        pbExchange->setGeometry(QRect(20, 240, 161, 24));
        pbApply = new QPushButton(AcceptRemontWindow);
        pbApply->setObjectName("pbApply");
        pbApply->setGeometry(QRect(190, 240, 161, 24));
        cbReason = new QComboBox(AcceptRemontWindow);
        cbReason->setObjectName("cbReason");
        cbReason->setGeometry(QRect(110, 120, 230, 24));
        cbReason->setFrame(true);
        cbClaim = new QComboBox(AcceptRemontWindow);
        cbClaim->setObjectName("cbClaim");
        cbClaim->setGeometry(QRect(110, 20, 230, 24));
        label_2 = new QLabel(AcceptRemontWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 56, 71, 16));
        cbDevice = new QComboBox(AcceptRemontWindow);
        cbDevice->setObjectName("cbDevice");
        cbDevice->setGeometry(QRect(110, 52, 230, 24));

        retranslateUi(AcceptRemontWindow);

        QMetaObject::connectSlotsByName(AcceptRemontWindow);
    } // setupUi

    void retranslateUi(QDialog *AcceptRemontWindow)
    {
        AcceptRemontWindow->setWindowTitle(QCoreApplication::translate("AcceptRemontWindow", "\320\237\321\200\320\270\320\275\321\217\321\202\321\214 \320\262 \320\236\320\241\320\236", nullptr));
        label->setText(QCoreApplication::translate("AcceptRemontWindow", "\320\240\320\265\320\272\320\273\320\260\320\274\320\260\321\206\320\270\321\217", nullptr));
        label_3->setText(QCoreApplication::translate("AcceptRemontWindow", "\320\224\320\260\321\202\320\260", nullptr));
        label_4->setText(QCoreApplication::translate("AcceptRemontWindow", "\320\237\321\200\320\270\321\207\320\270\320\275\320\260", nullptr));
        label_5->setText(QCoreApplication::translate("AcceptRemontWindow", "\320\224\320\265\320\271\321\201\321\202\320\262\320\270\320\265", nullptr));
        label_6->setText(QCoreApplication::translate("AcceptRemontWindow", "\320\224\320\265\321\204\320\265\320\272\321\202", nullptr));
        pbExchange->setText(QCoreApplication::translate("AcceptRemontWindow", "\320\237\321\200\320\276\320\270\320\267\320\262\320\265\321\201\321\202\320\270 \320\267\320\260\320\274\320\265\320\275\321\203", nullptr));
        pbApply->setText(QCoreApplication::translate("AcceptRemontWindow", "\320\237\321\200\320\270\320\275\321\217\321\202\321\214 \320\262 \320\236\320\241\320\236", nullptr));
        label_2->setText(QCoreApplication::translate("AcceptRemontWindow", "\320\243\321\201\321\202\321\200\320\276\320\271\321\201\321\202\320\262\320\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AcceptRemontWindow: public Ui_AcceptRemontWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCEPTREMONTWINDOW_H
