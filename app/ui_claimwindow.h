/********************************************************************************
** Form generated from reading UI file 'claimwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLAIMWINDOW_H
#define UI_CLAIMWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_ClaimWindow
{
public:
    QTableWidget *twClaim;
    QPushButton *pbAdd;
    QPushButton *pbEdit;
    QPushButton *pbDelete;
    QPushButton *pbSelect;

    void setupUi(QDialog *ClaimWindow)
    {
        if (ClaimWindow->objectName().isEmpty())
            ClaimWindow->setObjectName("ClaimWindow");
        ClaimWindow->resize(909, 481);
        twClaim = new QTableWidget(ClaimWindow);
        if (twClaim->columnCount() < 14)
            twClaim->setColumnCount(14);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        twClaim->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        twClaim->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        twClaim->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        twClaim->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        twClaim->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        twClaim->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        twClaim->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        twClaim->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        twClaim->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        twClaim->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        twClaim->setHorizontalHeaderItem(10, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        twClaim->setHorizontalHeaderItem(11, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        twClaim->setHorizontalHeaderItem(12, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        twClaim->setHorizontalHeaderItem(13, __qtablewidgetitem13);
        twClaim->setObjectName("twClaim");
        twClaim->setGeometry(QRect(20, 90, 871, 371));
        twClaim->setAlternatingRowColors(true);
        twClaim->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
        twClaim->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        pbAdd = new QPushButton(ClaimWindow);
        pbAdd->setObjectName("pbAdd");
        pbAdd->setGeometry(QRect(30, 40, 131, 24));
        pbEdit = new QPushButton(ClaimWindow);
        pbEdit->setObjectName("pbEdit");
        pbEdit->setGeometry(QRect(180, 40, 80, 24));
        pbDelete = new QPushButton(ClaimWindow);
        pbDelete->setObjectName("pbDelete");
        pbDelete->setGeometry(QRect(280, 40, 80, 24));
        pbSelect = new QPushButton(ClaimWindow);
        pbSelect->setObjectName("pbSelect");
        pbSelect->setGeometry(QRect(400, 40, 80, 24));

        retranslateUi(ClaimWindow);

        QMetaObject::connectSlotsByName(ClaimWindow);
    } // setupUi

    void retranslateUi(QDialog *ClaimWindow)
    {
        ClaimWindow->setWindowTitle(QCoreApplication::translate("ClaimWindow", "\320\241\320\277\320\270\321\201\320\276\320\272 \321\200\320\265\320\272\320\273\320\260\320\274\320\260\321\206\320\270\320\271", nullptr));
        QTableWidgetItem *___qtablewidgetitem = twClaim->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("ClaimWindow", "\342\204\226", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = twClaim->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("ClaimWindow", "\320\224\320\260\321\202\320\260 \320\277\320\276\321\201\321\202\321\203\320\277\320\273\320\265\320\275\320\270\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = twClaim->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("ClaimWindow", "\320\236\321\202 \320\272\320\276\320\263\320\276 \320\277\320\276\320\273\321\203\321\207\320\265\320\275\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = twClaim->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("ClaimWindow", "\320\242\320\270\320\277 \321\200\320\265\320\272\320\273\320\260\320\274\320\260\321\206\320\270\320\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = twClaim->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("ClaimWindow", "\320\236\321\200\320\263\320\260\320\275\320\270\320\267\320\260\321\206\320\270\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = twClaim->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("ClaimWindow", "\320\236\320\261\321\212\320\265\320\272\321\202 \321\203\321\201\321\214\320\260\320\275\320\276\320\262\320\272\320\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = twClaim->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("ClaimWindow", "\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = twClaim->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("ClaimWindow", "\320\242\320\270\320\277 \320\272\320\276\320\274\320\277\320\273\320\265\320\272\321\202\321\203\321\216\321\211\320\270\321\205", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = twClaim->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("ClaimWindow", "\320\222\320\235\320\244\320\242", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = twClaim->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("ClaimWindow", "\320\242\320\270\320\277 \320\276\320\261\320\276\321\200\321\203\320\264\320\276\320\262\320\260\320\275\320\270\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = twClaim->horizontalHeaderItem(10);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("ClaimWindow", "\342\204\226 \320\274\320\276\320\264\321\203\320\273\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = twClaim->horizontalHeaderItem(11);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("ClaimWindow", "\342\204\226 \320\274\320\276\320\264\321\203\320\273\321\217 \320\267\320\260\320\274\320\265\320\275\321\213", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = twClaim->horizontalHeaderItem(12);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("ClaimWindow", "\342\204\226 \320\276\320\261\320\276\321\200\321\203\320\264\320\276\320\262\320\260\320\275\320\270\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = twClaim->horizontalHeaderItem(13);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("ClaimWindow", "\320\224\320\260\321\202\320\260 \320\276\321\202\320\263\321\200\321\203\320\267\320\272\320\270", nullptr));
        pbAdd->setText(QCoreApplication::translate("ClaimWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        pbEdit->setText(QCoreApplication::translate("ClaimWindow", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        pbDelete->setText(QCoreApplication::translate("ClaimWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        pbSelect->setText(QCoreApplication::translate("ClaimWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClaimWindow: public Ui_ClaimWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLAIMWINDOW_H
