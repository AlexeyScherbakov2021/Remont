/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLineEdit *leSearch;
    QTableWidget *twProduct;
    QLabel *label_2;
    QToolButton *btSearch;
    QLabel *label_3;
    QTableWidget *twModul;
    QPushButton *pbClaim;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 40, 171, 16));
        leSearch = new QLineEdit(centralwidget);
        leSearch->setObjectName("leSearch");
        leSearch->setGeometry(QRect(230, 40, 190, 24));
        twProduct = new QTableWidget(centralwidget);
        if (twProduct->columnCount() < 2)
            twProduct->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        twProduct->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setForeground(brush);
        twProduct->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        twProduct->setObjectName("twProduct");
        twProduct->setGeometry(QRect(40, 120, 711, 201));
        twProduct->setAlternatingRowColors(true);
        twProduct->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
        twProduct->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 90, 131, 16));
        btSearch = new QToolButton(centralwidget);
        btSearch->setObjectName("btSearch");
        btSearch->setGeometry(QRect(420, 37, 30, 30));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 340, 131, 16));
        twModul = new QTableWidget(centralwidget);
        if (twModul->columnCount() < 2)
            twModul->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        twModul->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        twModul->setHorizontalHeaderItem(1, __qtablewidgetitem3);
        twModul->setObjectName("twModul");
        twModul->setGeometry(QRect(40, 360, 701, 192));
        twModul->setAlternatingRowColors(true);
        twModul->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
        twModul->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        pbClaim = new QPushButton(centralwidget);
        pbClaim->setObjectName("pbClaim");
        pbClaim->setGeometry(QRect(530, 40, 80, 24));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\271\321\202\320\270 \320\277\320\276 \321\201\320\265\321\200\320\270\320\271\320\275\320\276\320\274\321\203 \320\275\320\276\320\274\320\265\321\200\321\203", nullptr));
        QTableWidgetItem *___qtablewidgetitem = twProduct->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = twProduct->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "New Column", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\270\320\267\320\264\320\265\320\273\320\270\320\271", nullptr));
        btSearch->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\274\320\276\320\264\321\203\320\273\320\265\320\271", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = twModul->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = twModul->horizontalHeaderItem(1);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "New Column", nullptr));
        pbClaim->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\265\321\202\320\265\320\275\320\267\320\270\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
