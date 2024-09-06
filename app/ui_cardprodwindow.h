/********************************************************************************
** Form generated from reading UI file 'cardprodwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARDPRODWINDOW_H
#define UI_CARDPRODWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CardProdWindow
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QLineEdit *leDateOn;
    QLabel *label_8;
    QLabel *label;
    QLineEdit *leContract;
    QLineEdit *leObjectInstall;
    QLineEdit *leProduction;
    QLineEdit *leGarant;
    QLabel *label_2;
    QLineEdit *leDateCreate;
    QLabel *label_4;
    QLabel *label3;
    QLabel *label_5;
    QLineEdit *leNumber;
    QLineEdit *leCardOrder;
    QLabel *label_7;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *label_9;
    QLineEdit *leNumberUPD;
    QDateEdit *dDateUPD;
    QWidget *tab_2;
    QPushButton *pbAddRemont;
    QPushButton *pbEditStatus;
    QTreeWidget *trwRemont;
    QWidget *tab_4;
    QListWidget *lwInclude;
    QWidget *tab_3;
    QTreeWidget *treeWidget;
    QWidget *tab_5;
    QTableWidget *twHistory;

    void setupUi(QWidget *CardProdWindow)
    {
        if (CardProdWindow->objectName().isEmpty())
            CardProdWindow->setObjectName("CardProdWindow");
        CardProdWindow->resize(809, 497);
        tabWidget = new QTabWidget(CardProdWindow);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(20, 20, 751, 471));
        tab = new QWidget();
        tab->setObjectName("tab");
        leDateOn = new QLineEdit(tab);
        leDateOn->setObjectName("leDateOn");
        leDateOn->setGeometry(QRect(140, 250, 480, 20));
        label_8 = new QLabel(tab);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(30, 250, 111, 16));
        label = new QLabel(tab);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 40, 49, 16));
        leContract = new QLineEdit(tab);
        leContract->setObjectName("leContract");
        leContract->setGeometry(QRect(140, 160, 480, 20));
        leObjectInstall = new QLineEdit(tab);
        leObjectInstall->setObjectName("leObjectInstall");
        leObjectInstall->setGeometry(QRect(140, 220, 480, 20));
        leProduction = new QLineEdit(tab);
        leProduction->setObjectName("leProduction");
        leProduction->setGeometry(QRect(140, 190, 480, 20));
        leGarant = new QLineEdit(tab);
        leGarant->setObjectName("leGarant");
        leGarant->setGeometry(QRect(140, 100, 480, 20));
        label_2 = new QLabel(tab);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 70, 131, 16));
        leDateCreate = new QLineEdit(tab);
        leDateCreate->setObjectName("leDateCreate");
        leDateCreate->setGeometry(QRect(140, 70, 480, 20));
        label_4 = new QLabel(tab);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(30, 132, 91, 16));
        label3 = new QLabel(tab);
        label3->setObjectName("label3");
        label3->setGeometry(QRect(30, 190, 91, 16));
        label_5 = new QLabel(tab);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(30, 164, 49, 16));
        leNumber = new QLineEdit(tab);
        leNumber->setObjectName("leNumber");
        leNumber->setGeometry(QRect(140, 40, 480, 20));
        leCardOrder = new QLineEdit(tab);
        leCardOrder->setObjectName("leCardOrder");
        leCardOrder->setGeometry(QRect(140, 130, 480, 20));
        label_7 = new QLabel(tab);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(30, 220, 111, 16));
        label_3 = new QLabel(tab);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 101, 61, 16));
        label_6 = new QLabel(tab);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(30, 290, 49, 16));
        label_9 = new QLabel(tab);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(30, 320, 61, 16));
        label_9->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        leNumberUPD = new QLineEdit(tab);
        leNumberUPD->setObjectName("leNumberUPD");
        leNumberUPD->setGeometry(QRect(140, 280, 481, 24));
        dDateUPD = new QDateEdit(tab);
        dDateUPD->setObjectName("dDateUPD");
        dDateUPD->setGeometry(QRect(140, 313, 151, 25));
        dDateUPD->setCalendarPopup(true);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        pbAddRemont = new QPushButton(tab_2);
        pbAddRemont->setObjectName("pbAddRemont");
        pbAddRemont->setGeometry(QRect(10, 20, 121, 24));
        pbEditStatus = new QPushButton(tab_2);
        pbEditStatus->setObjectName("pbEditStatus");
        pbEditStatus->setGeometry(QRect(150, 20, 121, 24));
        trwRemont = new QTreeWidget(tab_2);
        trwRemont->setObjectName("trwRemont");
        trwRemont->setGeometry(QRect(10, 60, 721, 351));
        trwRemont->setAnimated(true);
        trwRemont->setWordWrap(true);
        trwRemont->header()->setHighlightSections(true);
        tabWidget->addTab(tab_2, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        lwInclude = new QListWidget(tab_4);
        lwInclude->setObjectName("lwInclude");
        lwInclude->setGeometry(QRect(20, 10, 481, 421));
        tabWidget->addTab(tab_4, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        treeWidget = new QTreeWidget(tab_3);
        treeWidget->setObjectName("treeWidget");
        treeWidget->setGeometry(QRect(20, 10, 561, 421));
        tabWidget->addTab(tab_3, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName("tab_5");
        twHistory = new QTableWidget(tab_5);
        if (twHistory->columnCount() < 3)
            twHistory->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        twHistory->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        twHistory->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        twHistory->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        twHistory->setObjectName("twHistory");
        twHistory->setGeometry(QRect(10, 10, 731, 421));
        twHistory->setAlternatingRowColors(true);
        twHistory->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
        twHistory->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        tabWidget->addTab(tab_5, QString());

        retranslateUi(CardProdWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CardProdWindow);
    } // setupUi

    void retranslateUi(QWidget *CardProdWindow)
    {
        CardProdWindow->setWindowTitle(QCoreApplication::translate("CardProdWindow", "\320\232\320\260\321\200\321\202\320\276\321\207\320\272\320\260 \320\270\320\267\320\264\320\265\320\273\320\270\321\217", nullptr));
        label_8->setText(QCoreApplication::translate("CardProdWindow", "\320\224\320\260\321\202\320\260 \320\262\320\272\320\273\321\216\321\207\320\265\320\275\320\270\321\217", nullptr));
        label->setText(QCoreApplication::translate("CardProdWindow", "\320\235\320\276\320\274\320\265\321\200", nullptr));
        label_2->setText(QCoreApplication::translate("CardProdWindow", "\320\224\320\260\321\202\320\260 \320\277\321\200\320\276\320\270\320\267\320\262\320\276\320\264\321\201\321\202\320\262\320\260", nullptr));
        label_4->setText(QCoreApplication::translate("CardProdWindow", "\320\232\320\260\321\200\321\202\320\260 \320\267\320\260\320\272\320\260\320\267\320\260", nullptr));
        label3->setText(QCoreApplication::translate("CardProdWindow", "\320\237\321\200\320\276\320\264\321\203\320\272\321\206\320\270\321\217", nullptr));
        label_5->setText(QCoreApplication::translate("CardProdWindow", "\320\224\320\276\320\263\320\276\320\262\320\276\321\200", nullptr));
        label_7->setText(QCoreApplication::translate("CardProdWindow", "\320\236\320\261\321\212\320\265\320\272\321\202 \321\203\321\201\321\202\320\260\320\275\320\276\320\262\320\272\320\270", nullptr));
        label_3->setText(QCoreApplication::translate("CardProdWindow", "\320\223\320\276\320\264\320\265\320\275 \320\264\320\276", nullptr));
        label_6->setText(QCoreApplication::translate("CardProdWindow", "\342\204\226 \320\243\320\237\320\224", nullptr));
        label_9->setText(QCoreApplication::translate("CardProdWindow", "\320\224\320\260\321\202\320\260 \320\243\320\237\320\224", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("CardProdWindow", "\320\232\320\260\321\200\321\202\320\276\321\207\320\272\320\260", nullptr));
        pbAddRemont->setText(QCoreApplication::translate("CardProdWindow", "\320\222\321\213\320\262\320\265\321\201\321\202\320\270 \320\262 \321\200\320\265\320\274\320\276\320\275\321\202", nullptr));
        pbEditStatus->setText(QCoreApplication::translate("CardProdWindow", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\241\321\202\320\260\321\202\321\203\321\201", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = trwRemont->headerItem();
        ___qtreewidgetitem->setText(7, QCoreApplication::translate("CardProdWindow", "\320\241\321\202\320\260\321\202\321\203\321\201", nullptr));
        ___qtreewidgetitem->setText(6, QCoreApplication::translate("CardProdWindow", "\320\227\320\260\320\274\320\265\321\207\320\260\320\275\320\270\320\265", nullptr));
        ___qtreewidgetitem->setText(5, QCoreApplication::translate("CardProdWindow", "\320\224\320\265\321\204\320\265\320\272\321\202", nullptr));
        ___qtreewidgetitem->setText(4, QCoreApplication::translate("CardProdWindow", "\320\224\320\265\320\271\321\201\321\202\320\262\320\270\320\265", nullptr));
        ___qtreewidgetitem->setText(3, QCoreApplication::translate("CardProdWindow", "\320\237\321\200\320\270\321\207\320\270\320\275\320\260", nullptr));
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("CardProdWindow", "\320\224\320\260\321\202\320\260 \320\276\320\272\320\276\320\275\321\207\320\260\320\275\320\270\321\217", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("CardProdWindow", "\320\224\320\260\321\202\320\260 \320\275\320\260\321\207\320\260\320\273\320\260", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("CardProdWindow", "\342\204\226 \321\200\320\265\320\272\320\273\320\260\320\274\320\260\321\206\320\270\320\270", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("CardProdWindow", "\320\241\320\265\321\200\320\262\320\270\321\201\320\275\320\276\320\265 \320\276\320\261\321\201\320\273\321\203\320\266\320\270\320\262\320\260\320\275\320\270\320\265", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("CardProdWindow", "\320\241\320\276\321\201\321\202\320\260\320\262 \320\270\320\267\320\264\320\265\320\273\320\270\321\217", nullptr));
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->headerItem();
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("CardProdWindow", "\320\235\320\260\320\261\320\276\321\200 \320\276\320\261\320\276\321\200\321\203\320\264\320\276\320\262\320\260\320\275\320\270\321\217", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("CardProdWindow", "\320\222 \321\201\320\276\321\201\321\202\320\260\320\262\320\265 \320\275\320\260\320\261\320\276\321\200\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem = twHistory->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("CardProdWindow", "\320\224\320\260\321\202\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = twHistory->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("CardProdWindow", "\320\241\321\202\320\260\321\202\321\203\321\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = twHistory->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("CardProdWindow", "\320\232\320\276\320\274\320\274\320\265\320\275\321\202\320\260\321\200\320\270\320\271", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("CardProdWindow", "\320\230\321\201\321\202\320\276\321\200\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CardProdWindow: public Ui_CardProdWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARDPRODWINDOW_H
