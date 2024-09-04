/********************************************************************************
** Form generated from reading UI file 'remontwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMONTWINDOW_H
#define UI_REMONTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_RemontWindow
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *leReclamation;
    QLineEdit *leAction;
    QLineEdit *leDefect;
    QLineEdit *leRemark;
    QDateEdit *deDateRemont;
    QComboBox *cbReason;
    QPushButton *pbOK;
    QPushButton *pbCancel;
    QComboBox *cbStatus;
    QToolButton *tbClaim;

    void setupUi(QDialog *RemontWindow)
    {
        if (RemontWindow->objectName().isEmpty())
            RemontWindow->setObjectName("RemontWindow");
        RemontWindow->resize(444, 376);
        label = new QLabel(RemontWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 34, 100, 16));
        label_2 = new QLabel(RemontWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 65, 100, 16));
        label_3 = new QLabel(RemontWindow);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 95, 100, 16));
        label_4 = new QLabel(RemontWindow);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(30, 124, 100, 16));
        label_5 = new QLabel(RemontWindow);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(30, 153, 100, 16));
        label_6 = new QLabel(RemontWindow);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(30, 184, 100, 16));
        label_7 = new QLabel(RemontWindow);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(27, 224, 100, 16));
        leReclamation = new QLineEdit(RemontWindow);
        leReclamation->setObjectName("leReclamation");
        leReclamation->setGeometry(QRect(130, 30, 201, 24));
        leAction = new QLineEdit(RemontWindow);
        leAction->setObjectName("leAction");
        leAction->setGeometry(QRect(130, 120, 220, 24));
        leDefect = new QLineEdit(RemontWindow);
        leDefect->setObjectName("leDefect");
        leDefect->setGeometry(QRect(130, 150, 220, 24));
        leRemark = new QLineEdit(RemontWindow);
        leRemark->setObjectName("leRemark");
        leRemark->setGeometry(QRect(130, 180, 220, 24));
        deDateRemont = new QDateEdit(RemontWindow);
        deDateRemont->setObjectName("deDateRemont");
        deDateRemont->setGeometry(QRect(130, 60, 220, 25));
        deDateRemont->setCalendarPopup(true);
        cbReason = new QComboBox(RemontWindow);
        cbReason->setObjectName("cbReason");
        cbReason->setGeometry(QRect(130, 90, 220, 24));
        pbOK = new QPushButton(RemontWindow);
        pbOK->setObjectName("pbOK");
        pbOK->setGeometry(QRect(110, 300, 80, 24));
        pbCancel = new QPushButton(RemontWindow);
        pbCancel->setObjectName("pbCancel");
        pbCancel->setGeometry(QRect(210, 300, 80, 24));
        cbStatus = new QComboBox(RemontWindow);
        cbStatus->setObjectName("cbStatus");
        cbStatus->setGeometry(QRect(130, 220, 221, 24));
        tbClaim = new QToolButton(RemontWindow);
        tbClaim->setObjectName("tbClaim");
        tbClaim->setGeometry(QRect(330, 30, 23, 23));

        retranslateUi(RemontWindow);
        QObject::connect(pbCancel, &QPushButton::clicked, RemontWindow, qOverload<>(&QDialog::reject));

        cbReason->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(RemontWindow);
    } // setupUi

    void retranslateUi(QDialog *RemontWindow)
    {
        RemontWindow->setWindowTitle(QCoreApplication::translate("RemontWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("RemontWindow", "\342\204\226 \321\200\320\265\320\272\320\273\320\260\320\274\320\260\321\206\320\270\320\270", nullptr));
        label_2->setText(QCoreApplication::translate("RemontWindow", "\320\224\320\260\321\202\320\260 \321\200\320\265\320\274\320\276\320\275\321\202\320\260", nullptr));
        label_3->setText(QCoreApplication::translate("RemontWindow", "\320\237\321\200\320\270\321\207\320\270\320\275\320\260", nullptr));
        label_4->setText(QCoreApplication::translate("RemontWindow", "\320\224\320\265\320\271\321\201\321\202\320\262\320\270\320\265", nullptr));
        label_5->setText(QCoreApplication::translate("RemontWindow", "\320\224\320\265\321\204\320\265\320\272\321\202", nullptr));
        label_6->setText(QCoreApplication::translate("RemontWindow", "\320\227\320\260\320\274\320\265\321\207\320\260\320\275\320\270\321\217", nullptr));
        label_7->setText(QCoreApplication::translate("RemontWindow", "\320\241\321\202\320\260\321\202\321\203\321\201", nullptr));
        pbOK->setText(QCoreApplication::translate("RemontWindow", "OK", nullptr));
        pbCancel->setText(QCoreApplication::translate("RemontWindow", "\320\236\321\202\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        tbClaim->setText(QCoreApplication::translate("RemontWindow", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RemontWindow: public Ui_RemontWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMONTWINDOW_H
