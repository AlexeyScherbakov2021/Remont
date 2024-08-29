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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

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
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
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
    QComboBox *cbTypeComplect;
    QLineEdit *leVNFT;
    QSpinBox *sbQuantity;
    QComboBox *cbTypeDevice;
    QLineEdit *leNumModul;
    QLineEdit *leNumNewModul;
    QLineEdit *leNumDevice;
    QDateEdit *deDateOut;
    QCheckBox *cbGuarantee;
    QLineEdit *leReason;
    QDateEdit *deDateRepair;
    QLineEdit *leDoRepair;
    QLineEdit *leFileAnswer;
    QLineEdit *leTextResult;
    QPushButton *pbOK;
    QPushButton *pbCancel;

    void setupUi(QDialog *ClaimDetail)
    {
        if (ClaimDetail->objectName().isEmpty())
            ClaimDetail->setObjectName("ClaimDetail");
        ClaimDetail->resize(826, 504);
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
        label_5->setGeometry(QRect(20, 150, 180, 16));
        label_5->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_6 = new QLabel(ClaimDetail);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, 180, 180, 16));
        label_7 = new QLabel(ClaimDetail);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(20, 210, 180, 16));
        label_8 = new QLabel(ClaimDetail);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(20, 240, 180, 16));
        label_9 = new QLabel(ClaimDetail);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(20, 270, 180, 16));
        label_10 = new QLabel(ClaimDetail);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(20, 300, 180, 16));
        label_11 = new QLabel(ClaimDetail);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(20, 330, 180, 16));
        label_12 = new QLabel(ClaimDetail);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(20, 370, 180, 16));
        label_13 = new QLabel(ClaimDetail);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(20, 410, 180, 16));
        label_14 = new QLabel(ClaimDetail);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(440, 40, 180, 16));
        label_15 = new QLabel(ClaimDetail);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(440, 70, 180, 16));
        label_16 = new QLabel(ClaimDetail);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(440, 100, 180, 16));
        label_17 = new QLabel(ClaimDetail);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(440, 130, 180, 16));
        label_18 = new QLabel(ClaimDetail);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(440, 160, 180, 16));
        label_19 = new QLabel(ClaimDetail);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(440, 190, 180, 16));
        label_20 = new QLabel(ClaimDetail);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(440, 230, 180, 16));
        label_21 = new QLabel(ClaimDetail);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(440, 260, 180, 16));
        leNumber = new QLineEdit(ClaimDetail);
        leNumber->setObjectName("leNumber");
        leNumber->setGeometry(QRect(210, 20, 150, 24));
        leFromWho = new QLineEdit(ClaimDetail);
        leFromWho->setObjectName("leFromWho");
        leFromWho->setGeometry(QRect(210, 80, 150, 24));
        deDateClaim = new QDateEdit(ClaimDetail);
        deDateClaim->setObjectName("deDateClaim");
        deDateClaim->setGeometry(QRect(210, 50, 150, 25));
        deDateClaim->setCalendarPopup(true);
        cbTypeClaim = new QComboBox(ClaimDetail);
        cbTypeClaim->setObjectName("cbTypeClaim");
        cbTypeClaim->setGeometry(QRect(210, 110, 150, 24));
        leOrganiz = new QLineEdit(ClaimDetail);
        leOrganiz->setObjectName("leOrganiz");
        leOrganiz->setGeometry(QRect(210, 150, 150, 24));
        leObjectInst = new QLineEdit(ClaimDetail);
        leObjectInst->setObjectName("leObjectInst");
        leObjectInst->setGeometry(QRect(210, 180, 150, 24));
        leDescript = new QLineEdit(ClaimDetail);
        leDescript->setObjectName("leDescript");
        leDescript->setGeometry(QRect(210, 210, 150, 24));
        cbTypeComplect = new QComboBox(ClaimDetail);
        cbTypeComplect->setObjectName("cbTypeComplect");
        cbTypeComplect->setGeometry(QRect(210, 240, 150, 24));
        leVNFT = new QLineEdit(ClaimDetail);
        leVNFT->setObjectName("leVNFT");
        leVNFT->setGeometry(QRect(210, 270, 150, 24));
        sbQuantity = new QSpinBox(ClaimDetail);
        sbQuantity->setObjectName("sbQuantity");
        sbQuantity->setGeometry(QRect(210, 300, 150, 25));
        sbQuantity->setMinimum(1);
        sbQuantity->setMaximum(999);
        cbTypeDevice = new QComboBox(ClaimDetail);
        cbTypeDevice->setObjectName("cbTypeDevice");
        cbTypeDevice->setGeometry(QRect(210, 330, 150, 24));
        leNumModul = new QLineEdit(ClaimDetail);
        leNumModul->setObjectName("leNumModul");
        leNumModul->setGeometry(QRect(210, 360, 150, 24));
        leNumNewModul = new QLineEdit(ClaimDetail);
        leNumNewModul->setObjectName("leNumNewModul");
        leNumNewModul->setGeometry(QRect(210, 400, 150, 24));
        leNumDevice = new QLineEdit(ClaimDetail);
        leNumDevice->setObjectName("leNumDevice");
        leNumDevice->setGeometry(QRect(640, 30, 150, 24));
        deDateOut = new QDateEdit(ClaimDetail);
        deDateOut->setObjectName("deDateOut");
        deDateOut->setGeometry(QRect(640, 60, 150, 25));
        deDateOut->setCalendarPopup(true);
        cbGuarantee = new QCheckBox(ClaimDetail);
        cbGuarantee->setObjectName("cbGuarantee");
        cbGuarantee->setGeometry(QRect(640, 90, 150, 22));
        leReason = new QLineEdit(ClaimDetail);
        leReason->setObjectName("leReason");
        leReason->setGeometry(QRect(640, 120, 150, 24));
        deDateRepair = new QDateEdit(ClaimDetail);
        deDateRepair->setObjectName("deDateRepair");
        deDateRepair->setGeometry(QRect(640, 150, 150, 25));
        deDateRepair->setCalendarPopup(true);
        leDoRepair = new QLineEdit(ClaimDetail);
        leDoRepair->setObjectName("leDoRepair");
        leDoRepair->setGeometry(QRect(640, 180, 150, 24));
        leFileAnswer = new QLineEdit(ClaimDetail);
        leFileAnswer->setObjectName("leFileAnswer");
        leFileAnswer->setGeometry(QRect(640, 210, 150, 24));
        leTextResult = new QLineEdit(ClaimDetail);
        leTextResult->setObjectName("leTextResult");
        leTextResult->setGeometry(QRect(640, 250, 150, 24));
        pbOK = new QPushButton(ClaimDetail);
        pbOK->setObjectName("pbOK");
        pbOK->setGeometry(QRect(480, 400, 80, 24));
        pbCancel = new QPushButton(ClaimDetail);
        pbCancel->setObjectName("pbCancel");
        pbCancel->setGeometry(QRect(600, 400, 80, 24));

        retranslateUi(ClaimDetail);
        QObject::connect(pbCancel, &QPushButton::clicked, ClaimDetail, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ClaimDetail);
    } // setupUi

    void retranslateUi(QDialog *ClaimDetail)
    {
        ClaimDetail->setWindowTitle(QCoreApplication::translate("ClaimDetail", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ClaimDetail", "\320\235\320\276\320\274\320\265\321\200 \321\200\320\265\320\272\320\273\320\260\320\274\320\260\321\206\320\270\320\270", nullptr));
        label_2->setText(QCoreApplication::translate("ClaimDetail", "\320\224\320\260\321\202\320\260 \320\277\320\276\321\201\321\202\321\203\320\277\320\273\320\265\320\275\320\270\321\217", nullptr));
        label_3->setText(QCoreApplication::translate("ClaimDetail", "\320\236\321\202 \320\272\320\276\320\263\320\276 \320\277\320\276\320\273\321\203\321\207\320\265\320\275\320\276", nullptr));
        label_4->setText(QCoreApplication::translate("ClaimDetail", "\320\242\320\270\320\277 \321\200\320\265\320\272\320\273\320\260\320\274\320\260\321\206\320\270\320\270", nullptr));
        label_5->setText(QCoreApplication::translate("ClaimDetail", "\320\255\320\272\321\201\320\277\320\273\321\203\320\260\321\202\320\270\321\200\321\203\321\216\321\211\320\260\321\217 \320\276\321\200\320\263\320\260\320\275\320\270\320\267\320\260\321\206\320\270\321\217", nullptr));
        label_6->setText(QCoreApplication::translate("ClaimDetail", "\320\236\320\261\321\212\320\265\320\272\321\202 \321\203\321\201\321\202\320\260\320\275\320\276\320\262\320\272\320\270", nullptr));
        label_7->setText(QCoreApplication::translate("ClaimDetail", "\320\232\321\200\320\260\321\202\320\272\320\276\320\265 \320\276\320\277\320\270\321\201\320\260\320\275\320\270\320\265", nullptr));
        label_8->setText(QCoreApplication::translate("ClaimDetail", "\320\242\320\270\320\277 \320\272\320\276\320\274\320\277\320\273\320\265\320\272\321\202\321\203\321\216\321\211\320\270\321\205", nullptr));
        label_9->setText(QCoreApplication::translate("ClaimDetail", "\320\222\320\235\320\244\320\242", nullptr));
        label_10->setText(QCoreApplication::translate("ClaimDetail", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        label_11->setText(QCoreApplication::translate("ClaimDetail", "\320\242\320\270\320\277 \320\276\320\261\320\276\321\200\321\203\320\264\320\276\320\262\320\260\320\275\320\270\321\217", nullptr));
        label_12->setText(QCoreApplication::translate("ClaimDetail", "\320\227\320\260\320\262. \342\204\226 \320\274\320\276\320\264\321\203\320\273\321\217", nullptr));
        label_13->setText(QCoreApplication::translate("ClaimDetail", "\320\227\320\260\320\262. \342\204\226 \320\274\320\276\320\264\321\203\320\273\321\217 \320\264\320\273\321\217 \320\267\320\260\320\274\320\265\320\275\321\213", nullptr));
        label_14->setText(QCoreApplication::translate("ClaimDetail", "\342\204\226 \320\276\320\261\320\276\321\200\321\203\320\264\320\276\320\262\320\260\320\275\320\270\321\217", nullptr));
        label_15->setText(QCoreApplication::translate("ClaimDetail", "\320\224\320\260\321\202\320\260 \320\276\321\202\320\263\321\200\321\203\320\267\320\272\320\270", nullptr));
        label_16->setText(QCoreApplication::translate("ClaimDetail", "\320\223\320\260\321\200\320\260\320\275\321\202\320\270\321\217", nullptr));
        label_17->setText(QCoreApplication::translate("ClaimDetail", "\320\222\320\265\321\200\320\276\321\217\321\202\320\275\320\260\321\217 \320\277\321\200\320\270\321\207\320\270\320\275\320\260", nullptr));
        label_18->setText(QCoreApplication::translate("ClaimDetail", "\320\224\320\260\321\202\320\260 \321\203\321\201\321\202\321\200\320\260\320\275\320\265\320\275\320\270\321\217", nullptr));
        label_19->setText(QCoreApplication::translate("ClaimDetail", "\320\234\320\265\321\200\321\213 \321\203\321\201\321\202\321\200\320\260\320\275\320\265\320\275\320\270\321\217", nullptr));
        label_20->setText(QCoreApplication::translate("ClaimDetail", "\320\244\320\260\320\271\320\273 \320\276\321\202\320\262\320\265\321\202\320\260", nullptr));
        label_21->setText(QCoreApplication::translate("ClaimDetail", "\320\227\320\260\320\272\320\273\321\216\321\207\320\265\320\275\320\270\320\265", nullptr));
        cbGuarantee->setText(QString());
        pbOK->setText(QCoreApplication::translate("ClaimDetail", "OK", nullptr));
        pbCancel->setText(QCoreApplication::translate("ClaimDetail", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClaimDetail: public Ui_ClaimDetail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLAIMDETAIL_H
