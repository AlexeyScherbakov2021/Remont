/********************************************************************************
** Form generated from reading UI file 'otkcontrolwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OTKCONTROLWINDOW_H
#define UI_OTKCONTROLWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_OTKControlWindow
{
public:
    QLabel *label;
    QLineEdit *leNumber;
    QListWidget *lwDevice;
    QLabel *label_2;
    QRadioButton *rbPassed;
    QRadioButton *rbFailed;
    QPushButton *pbApply;
    QPushButton *pbClose;
    QListWidget *lwChecked;
    QLabel *label_3;

    void setupUi(QDialog *OTKControlWindow)
    {
        if (OTKControlWindow->objectName().isEmpty())
            OTKControlWindow->setObjectName("OTKControlWindow");
        OTKControlWindow->resize(743, 447);
        label = new QLabel(OTKControlWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 30, 121, 16));
        leNumber = new QLineEdit(OTKControlWindow);
        leNumber->setObjectName("leNumber");
        leNumber->setGeometry(QRect(20, 60, 261, 24));
        lwDevice = new QListWidget(OTKControlWindow);
        lwDevice->setObjectName("lwDevice");
        lwDevice->setGeometry(QRect(20, 130, 261, 291));
        label_2 = new QLabel(OTKControlWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 100, 211, 16));
        rbPassed = new QRadioButton(OTKControlWindow);
        rbPassed->setObjectName("rbPassed");
        rbPassed->setGeometry(QRect(299, 130, 151, 22));
        rbPassed->setChecked(true);
        rbFailed = new QRadioButton(OTKControlWindow);
        rbFailed->setObjectName("rbFailed");
        rbFailed->setGeometry(QRect(300, 160, 91, 22));
        pbApply = new QPushButton(OTKControlWindow);
        pbApply->setObjectName("pbApply");
        pbApply->setGeometry(QRect(310, 340, 91, 31));
        pbClose = new QPushButton(OTKControlWindow);
        pbClose->setObjectName("pbClose");
        pbClose->setGeometry(QRect(310, 380, 91, 31));
        lwChecked = new QListWidget(OTKControlWindow);
        lwChecked->setObjectName("lwChecked");
        lwChecked->setGeometry(QRect(460, 130, 256, 281));
        label_3 = new QLabel(OTKControlWindow);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(460, 100, 211, 16));

        retranslateUi(OTKControlWindow);
        QObject::connect(pbClose, &QPushButton::clicked, OTKControlWindow, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(OTKControlWindow);
    } // setupUi

    void retranslateUi(QDialog *OTKControlWindow)
    {
        OTKControlWindow->setWindowTitle(QCoreApplication::translate("OTKControlWindow", "\320\237\321\200\320\276\320\262\320\265\321\200\320\272\320\260 \320\236\320\242\320\232", nullptr));
        label->setText(QCoreApplication::translate("OTKControlWindow", "\320\241\320\265\321\200\320\270\320\271\320\275\321\213\320\271 \320\275\320\276\320\274\320\265\321\200", nullptr));
        label_2->setText(QCoreApplication::translate("OTKControlWindow", "\320\243\321\201\321\202\321\200\320\276\320\271\321\201\321\202\320\262\320\260 \321\202\321\200\320\265\320\261\321\203\321\216\321\211\320\270\320\265 \320\277\321\200\320\276\320\262\320\265\321\200\320\272\320\270", nullptr));
        rbPassed->setText(QCoreApplication::translate("OTKControlWindow", "\320\237\321\200\320\276\320\262\320\265\321\200\320\272\320\260 \320\277\321\200\320\276\320\271\320\264\320\265\320\275\320\260", nullptr));
        rbFailed->setText(QCoreApplication::translate("OTKControlWindow", "\320\235\320\265 \320\277\321\200\320\276\320\271\320\264\320\265\320\275\320\260", nullptr));
        pbApply->setText(QCoreApplication::translate("OTKControlWindow", "\320\237\321\200\320\270\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        pbClose->setText(QCoreApplication::translate("OTKControlWindow", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
        label_3->setText(QCoreApplication::translate("OTKControlWindow", "\320\237\321\200\320\276\320\262\320\265\321\200\320\265\320\275\320\275\321\213\320\265 \321\203\321\201\321\202\321\200\320\276\320\271\321\201\321\202\320\262\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OTKControlWindow: public Ui_OTKControlWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OTKCONTROLWINDOW_H
