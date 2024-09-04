/********************************************************************************
** Form generated from reading UI file 'claimdetail.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLAIMDETAIL_H
#define UI_CLAIMDETAIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_ClaimDetail
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLineEdit *leNumber;
    QLineEdit *leFromWho;
    QDateEdit *deDateClaim;
    QComboBox *cbTypeClaim;
    QLineEdit *leOrganiz;
    QLineEdit *leObjectInst;
    QLineEdit *leDescript;
    QCheckBox *cbGuarantee;
    QLineEdit *leReason;
    QDateEdit *deDateRepair;
    QLineEdit *leDoRepair;
    QLineEdit *leFileAnswer;
    QLineEdit *leTextResult;
    QPushButton *pbOK;
    QPushButton *pbCancel;
    QTableWidget *tableWidget;
    QToolButton *tbAddDevice;
    QToolButton *tbDeleteDevice;
    QLabel *label_8;

    void setupUi(QDialog *ClaimDetail)
    {
        if (ClaimDetail->objectName().isEmpty())
            ClaimDetail->setObjectName("ClaimDetail");
        ClaimDetail->resize(826, 482);
        label = new QLabel(ClaimDetail);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 30, 180, 16));
        label_2 = new QLabel(ClaimDetail);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 60, 180, 16));
        label_3 = new QLabel(ClaimDetail);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 90, 180, 16));
        label_4 = new QLabel(ClaimDetail);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 120, 180, 16));
        label_5 = new QLabel(ClaimDetail);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 144, 180, 16));
        label_5->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_6 = new QLabel(ClaimDetail);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, 176, 180, 16));
        label_7 = new QLabel(ClaimDetail);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(20, 206, 180, 16));
        label_16 = new QLabel(ClaimDetail);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(510, 16, 120, 16));
        label_17 = new QLabel(ClaimDetail);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(510, 48, 120, 16));
        label_18 = new QLabel(ClaimDetail);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(510, 79, 120, 16));
        label_19 = new QLabel(ClaimDetail);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(510, 108, 120, 16));
        label_20 = new QLabel(ClaimDetail);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(510, 137, 120, 16));
        label_21 = new QLabel(ClaimDetail);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(510, 177, 120, 16));
        leNumber = new QLineEdit(ClaimDetail);
        leNumber->setObjectName("leNumber");
        leNumber->setGeometry(QRect(210, 20, 250, 24));
        leFromWho = new QLineEdit(ClaimDetail);
        leFromWho->setObjectName("leFromWho");
        leFromWho->setGeometry(QRect(210, 80, 250, 24));
        deDateClaim = new QDateEdit(ClaimDetail);
        deDateClaim->setObjectName("deDateClaim");
        deDateClaim->setGeometry(QRect(210, 50, 250, 25));
        deDateClaim->setCalendarPopup(true);
        cbTypeClaim = new QComboBox(ClaimDetail);
        cbTypeClaim->setObjectName("cbTypeClaim");
        cbTypeClaim->setGeometry(QRect(210, 110, 250, 24));
        leOrganiz = new QLineEdit(ClaimDetail);
        leOrganiz->setObjectName("leOrganiz");
        leOrganiz->setGeometry(QRect(210, 144, 250, 24));
        leObjectInst = new QLineEdit(ClaimDetail);
        leObjectInst->setObjectName("leObjectInst");
        leObjectInst->setGeometry(QRect(210, 176, 250, 24));
        leDescript = new QLineEdit(ClaimDetail);
        leDescript->setObjectName("leDescript");
        leDescript->setGeometry(QRect(210, 206, 250, 24));
        cbGuarantee = new QCheckBox(ClaimDetail);
        cbGuarantee->setObjectName("cbGuarantee");
        cbGuarantee->setGeometry(QRect(630, 13, 150, 22));
        leReason = new QLineEdit(ClaimDetail);
        leReason->setObjectName("leReason");
        leReason->setGeometry(QRect(630, 43, 150, 24));
        deDateRepair = new QDateEdit(ClaimDetail);
        deDateRepair->setObjectName("deDateRepair");
        deDateRepair->setGeometry(QRect(630, 73, 150, 25));
        deDateRepair->setCalendarPopup(true);
        leDoRepair = new QLineEdit(ClaimDetail);
        leDoRepair->setObjectName("leDoRepair");
        leDoRepair->setGeometry(QRect(630, 103, 150, 24));
        leFileAnswer = new QLineEdit(ClaimDetail);
        leFileAnswer->setObjectName("leFileAnswer");
        leFileAnswer->setGeometry(QRect(630, 133, 150, 24));
        leTextResult = new QLineEdit(ClaimDetail);
        leTextResult->setObjectName("leTextResult");
        leTextResult->setGeometry(QRect(630, 173, 150, 24));
        pbOK = new QPushButton(ClaimDetail);
        pbOK->setObjectName("pbOK");
        pbOK->setGeometry(QRect(720, 260, 80, 24));
        pbCancel = new QPushButton(ClaimDetail);
        pbCancel->setObjectName("pbCancel");
        pbCancel->setGeometry(QRect(720, 300, 80, 24));
        tableWidget = new QTableWidget(ClaimDetail);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(80, 260, 621, 201));
        tbAddDevice = new QToolButton(ClaimDetail);
        tbAddDevice->setObjectName("tbAddDevice");
        tbAddDevice->setGeometry(QRect(40, 270, 23, 23));
        tbDeleteDevice = new QToolButton(ClaimDetail);
        tbDeleteDevice->setObjectName("tbDeleteDevice");
        tbDeleteDevice->setGeometry(QRect(40, 300, 23, 23));
        label_8 = new QLabel(ClaimDetail);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(80, 240, 211, 16));

        retranslateUi(ClaimDetail);
        QObject::connect(pbCancel, &QPushButton::clicked, ClaimDetail, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ClaimDetail);
    } // setupUi

    void retranslateUi(QDialog *ClaimDetail)
    {
        ClaimDetail->setWindowTitle(QCoreApplication::translate("ClaimDetail", "\320\240\320\265\320\272\320\273\320\260\320\274\320\260\321\206\320\270\321\217", nullptr));
        label->setText(QCoreApplication::translate("ClaimDetail", "\320\235\320\276\320\274\320\265\321\200 \321\200\320\265\320\272\320\273\320\260\320\274\320\260\321\206\320\270\320\270", nullptr));
        label_2->setText(QCoreApplication::translate("ClaimDetail", "\320\224\320\260\321\202\320\260 \320\277\320\276\321\201\321\202\321\203\320\277\320\273\320\265\320\275\320\270\321\217", nullptr));
        label_3->setText(QCoreApplication::translate("ClaimDetail", "\320\236\321\202 \320\272\320\276\320\263\320\276 \320\277\320\276\320\273\321\203\321\207\320\265\320\275\320\276", nullptr));
        label_4->setText(QCoreApplication::translate("ClaimDetail", "\320\242\320\270\320\277 \321\200\320\265\320\272\320\273\320\260\320\274\320\260\321\206\320\270\320\270", nullptr));
        label_5->setText(QCoreApplication::translate("ClaimDetail", "\320\255\320\272\321\201\320\277\320\273\321\203\320\260\321\202\320\270\321\200\321\203\321\216\321\211\320\260\321\217 \320\276\321\200\320\263\320\260\320\275\320\270\320\267\320\260\321\206\320\270\321\217", nullptr));
        label_6->setText(QCoreApplication::translate("ClaimDetail", "\320\236\320\261\321\212\320\265\320\272\321\202 \321\203\321\201\321\202\320\260\320\275\320\276\320\262\320\272\320\270", nullptr));
        label_7->setText(QCoreApplication::translate("ClaimDetail", "\320\232\321\200\320\260\321\202\320\272\320\276\320\265 \320\276\320\277\320\270\321\201\320\260\320\275\320\270\320\265", nullptr));
        label_16->setText(QCoreApplication::translate("ClaimDetail", "\320\223\320\260\321\200\320\260\320\275\321\202\320\270\321\217", nullptr));
        label_17->setText(QCoreApplication::translate("ClaimDetail", "\320\222\320\265\321\200\320\276\321\217\321\202\320\275\320\260\321\217 \320\277\321\200\320\270\321\207\320\270\320\275\320\260", nullptr));
        label_18->setText(QCoreApplication::translate("ClaimDetail", "\320\224\320\260\321\202\320\260 \321\203\321\201\321\202\321\200\320\260\320\275\320\265\320\275\320\270\321\217", nullptr));
        label_19->setText(QCoreApplication::translate("ClaimDetail", "\320\234\320\265\321\200\321\213 \321\203\321\201\321\202\321\200\320\260\320\275\320\265\320\275\320\270\321\217", nullptr));
        label_20->setText(QCoreApplication::translate("ClaimDetail", "\320\244\320\260\320\271\320\273 \320\276\321\202\320\262\320\265\321\202\320\260", nullptr));
        label_21->setText(QCoreApplication::translate("ClaimDetail", "\320\227\320\260\320\272\320\273\321\216\321\207\320\265\320\275\320\270\320\265", nullptr));
        cbGuarantee->setText(QString());
        pbOK->setText(QCoreApplication::translate("ClaimDetail", "OK", nullptr));
        pbCancel->setText(QCoreApplication::translate("ClaimDetail", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("ClaimDetail", "\320\242\320\270\320\277", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("ClaimDetail", "\320\227\320\260\320\262\320\276\320\264\321\201\320\272\320\276\320\271 \342\204\226", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("ClaimDetail", "\320\235\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        tbAddDevice->setText(QCoreApplication::translate("ClaimDetail", "+", nullptr));
        tbDeleteDevice->setText(QCoreApplication::translate("ClaimDetail", "-", nullptr));
        label_8->setText(QCoreApplication::translate("ClaimDetail", "\320\241\320\277\320\270\321\201\320\276\320\272 \321\203\321\201\321\202\321\200\320\276\320\271\321\201\321\202\320\262 \320\264\320\273\321\217 \321\200\320\265\320\274\320\276\320\275\321\202\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClaimDetail: public Ui_ClaimDetail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLAIMDETAIL_H
