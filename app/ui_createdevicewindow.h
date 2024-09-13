/********************************************************************************
** Form generated from reading UI file 'createdevicewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEDEVICEWINDOW_H
#define UI_CREATEDEVICEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateDeviceWindow
{
public:
    QPushButton *pbClose;
    QListWidget *lwModul;
    QLabel *label_2;
    QToolButton *tbDeleteModul;
    QFrame *frame;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QRadioButton *radioButton_2;
    QRadioButton *rbProd;
    QWidget *page_2;
    QLabel *label_8;
    QComboBox *cbProduct;
    QLineEdit *leNumProduct;
    QLabel *label_10;
    QLabel *label_12;
    QWidget *page_3;
    QLabel *label_9;
    QComboBox *cbModul;
    QLabel *lbDatePlate;
    QLabel *label_3;
    QLabel *lbNumberDocPlate;
    QLabel *lbVNFTPlate;
    QLabel *label_7;
    QLineEdit *leSearchPlate;
    QLabel *lbNumberFWPlate;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QToolButton *tbSearchPlate;
    QLabel *label_13;
    QLabel *label_21;
    QLabel *lbNumberPlate;
    QWidget *page_4;
    QLabel *label_11;
    QLineEdit *leNumModul;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *lbNumberDocPlate_2;
    QLabel *lbVNFTPlate_2;
    QLabel *label_16;
    QLabel *lbNumberFWPlate_2;
    QLabel *lbDatePlate_2;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *lbNumberPlate_2;
    QLabel *label_20;
    QLabel *lbTypeModul;
    QPushButton *pbPrev;
    QPushButton *pbNext;
    QLabel *label;
    QListWidget *lwProduct;
    QToolButton *tbDeleteProduct;

    void setupUi(QDialog *CreateDeviceWindow)
    {
        if (CreateDeviceWindow->objectName().isEmpty())
            CreateDeviceWindow->setObjectName("CreateDeviceWindow");
        CreateDeviceWindow->resize(771, 407);
        pbClose = new QPushButton(CreateDeviceWindow);
        pbClose->setObjectName("pbClose");
        pbClose->setGeometry(QRect(670, 370, 80, 24));
        lwModul = new QListWidget(CreateDeviceWindow);
        lwModul->setObjectName("lwModul");
        lwModul->setGeometry(QRect(540, 30, 220, 321));
        label_2 = new QLabel(CreateDeviceWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(540, 10, 141, 16));
        tbDeleteModul = new QToolButton(CreateDeviceWindow);
        tbDeleteModul->setObjectName("tbDeleteModul");
        tbDeleteModul->setGeometry(QRect(730, 4, 23, 23));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        tbDeleteModul->setFont(font);
        frame = new QFrame(CreateDeviceWindow);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(10, 10, 291, 340));
        frame->setFrameShape(QFrame::Shape::Box);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        stackedWidget = new QStackedWidget(frame);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(4, 10, 281, 281));
        page = new QWidget();
        page->setObjectName("page");
        radioButton_2 = new QRadioButton(page);
        radioButton_2->setObjectName("radioButton_2");
        radioButton_2->setGeometry(QRect(60, 110, 91, 22));
        rbProd = new QRadioButton(page);
        rbProd->setObjectName("rbProd");
        rbProd->setGeometry(QRect(60, 80, 91, 22));
        rbProd->setChecked(true);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        label_8 = new QLabel(page_2);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(60, 50, 91, 16));
        cbProduct = new QComboBox(page_2);
        cbProduct->setObjectName("cbProduct");
        cbProduct->setGeometry(QRect(40, 80, 220, 24));
        leNumProduct = new QLineEdit(page_2);
        leNumProduct->setObjectName("leNumProduct");
        leNumProduct->setGeometry(QRect(40, 140, 221, 24));
        label_10 = new QLabel(page_2);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(40, 120, 111, 16));
        label_12 = new QLabel(page_2);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(30, 0, 241, 31));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        label_12->setFont(font1);
        label_12->setAlignment(Qt::AlignmentFlag::AlignCenter);
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        label_9 = new QLabel(page_3);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(20, 60, 101, 16));
        cbModul = new QComboBox(page_3);
        cbModul->setObjectName("cbModul");
        cbModul->setGeometry(QRect(20, 90, 220, 24));
        lbDatePlate = new QLabel(page_3);
        lbDatePlate->setObjectName("lbDatePlate");
        lbDatePlate->setGeometry(QRect(120, 266, 140, 16));
        QFont font2;
        font2.setBold(true);
        lbDatePlate->setFont(font2);
        label_3 = new QLabel(page_3);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(25, 126, 191, 16));
        lbNumberDocPlate = new QLabel(page_3);
        lbNumberDocPlate->setObjectName("lbNumberDocPlate");
        lbNumberDocPlate->setGeometry(QRect(120, 222, 140, 16));
        lbNumberDocPlate->setFont(font2);
        lbVNFTPlate = new QLabel(page_3);
        lbVNFTPlate->setObjectName("lbVNFTPlate");
        lbVNFTPlate->setGeometry(QRect(120, 244, 140, 16));
        lbVNFTPlate->setFont(font2);
        label_7 = new QLabel(page_3);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(25, 265, 80, 16));
        leSearchPlate = new QLineEdit(page_3);
        leSearchPlate->setObjectName("leSearchPlate");
        leSearchPlate->setGeometry(QRect(25, 145, 201, 24));
        lbNumberFWPlate = new QLabel(page_3);
        lbNumberFWPlate->setObjectName("lbNumberFWPlate");
        lbNumberFWPlate->setGeometry(QRect(120, 199, 140, 16));
        lbNumberFWPlate->setFont(font2);
        label_4 = new QLabel(page_3);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(25, 199, 80, 16));
        label_5 = new QLabel(page_3);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(25, 222, 80, 16));
        label_6 = new QLabel(page_3);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(25, 245, 80, 16));
        tbSearchPlate = new QToolButton(page_3);
        tbSearchPlate->setObjectName("tbSearchPlate");
        tbSearchPlate->setGeometry(QRect(226, 145, 23, 23));
        label_13 = new QLabel(page_3);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(20, 0, 241, 31));
        label_13->setFont(font1);
        label_13->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_21 = new QLabel(page_3);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(26, 177, 81, 16));
        lbNumberPlate = new QLabel(page_3);
        lbNumberPlate->setObjectName("lbNumberPlate");
        lbNumberPlate->setGeometry(QRect(117, 178, 140, 16));
        lbNumberPlate->setFont(font2);
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        label_11 = new QLabel(page_4);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(24, 210, 131, 16));
        leNumModul = new QLineEdit(page_4);
        leNumModul->setObjectName("leNumModul");
        leNumModul->setGeometry(QRect(24, 230, 211, 24));
        label_14 = new QLabel(page_4);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(20, 0, 241, 31));
        label_14->setFont(font1);
        label_14->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_15 = new QLabel(page_4);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(20, 40, 101, 16));
        lbNumberDocPlate_2 = new QLabel(page_4);
        lbNumberDocPlate_2->setObjectName("lbNumberDocPlate_2");
        lbNumberDocPlate_2->setGeometry(QRect(130, 123, 150, 16));
        lbNumberDocPlate_2->setFont(font2);
        lbVNFTPlate_2 = new QLabel(page_4);
        lbVNFTPlate_2->setObjectName("lbVNFTPlate_2");
        lbVNFTPlate_2->setGeometry(QRect(130, 147, 150, 16));
        lbVNFTPlate_2->setFont(font2);
        label_16 = new QLabel(page_4);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(20, 170, 80, 16));
        lbNumberFWPlate_2 = new QLabel(page_4);
        lbNumberFWPlate_2->setObjectName("lbNumberFWPlate_2");
        lbNumberFWPlate_2->setGeometry(QRect(130, 100, 150, 16));
        lbNumberFWPlate_2->setFont(font2);
        lbDatePlate_2 = new QLabel(page_4);
        lbDatePlate_2->setObjectName("lbDatePlate_2");
        lbDatePlate_2->setGeometry(QRect(130, 170, 150, 16));
        lbDatePlate_2->setFont(font2);
        label_17 = new QLabel(page_4);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(20, 100, 80, 16));
        label_18 = new QLabel(page_4);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(20, 123, 80, 16));
        label_19 = new QLabel(page_4);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(20, 147, 80, 16));
        lbNumberPlate_2 = new QLabel(page_4);
        lbNumberPlate_2->setObjectName("lbNumberPlate_2");
        lbNumberPlate_2->setGeometry(QRect(130, 73, 150, 16));
        lbNumberPlate_2->setFont(font2);
        label_20 = new QLabel(page_4);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(20, 73, 80, 16));
        lbTypeModul = new QLabel(page_4);
        lbTypeModul->setObjectName("lbTypeModul");
        lbTypeModul->setGeometry(QRect(130, 40, 150, 16));
        lbTypeModul->setFont(font2);
        stackedWidget->addWidget(page_4);
        pbPrev = new QPushButton(frame);
        pbPrev->setObjectName("pbPrev");
        pbPrev->setGeometry(QRect(100, 305, 80, 24));
        pbNext = new QPushButton(frame);
        pbNext->setObjectName("pbNext");
        pbNext->setGeometry(QRect(190, 305, 80, 24));
        label = new QLabel(CreateDeviceWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(310, 10, 141, 16));
        lwProduct = new QListWidget(CreateDeviceWindow);
        lwProduct->setObjectName("lwProduct");
        lwProduct->setGeometry(QRect(310, 30, 220, 321));
        tbDeleteProduct = new QToolButton(CreateDeviceWindow);
        tbDeleteProduct->setObjectName("tbDeleteProduct");
        tbDeleteProduct->setGeometry(QRect(500, 4, 23, 23));

        retranslateUi(CreateDeviceWindow);
        QObject::connect(pbClose, &QPushButton::clicked, CreateDeviceWindow, qOverload<>(&QDialog::close));

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CreateDeviceWindow);
    } // setupUi

    void retranslateUi(QDialog *CreateDeviceWindow)
    {
        CreateDeviceWindow->setWindowTitle(QCoreApplication::translate("CreateDeviceWindow", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217 \321\203\321\201\321\202\321\200\320\276\320\271\321\201\321\202\320\262\320\260", nullptr));
        pbClose->setText(QCoreApplication::translate("CreateDeviceWindow", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
        label_2->setText(QCoreApplication::translate("CreateDeviceWindow", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\275\321\213\320\265 \320\274\320\276\320\264\321\203\320\273\320\270", nullptr));
        tbDeleteModul->setText(QCoreApplication::translate("CreateDeviceWindow", "-", nullptr));
        radioButton_2->setText(QCoreApplication::translate("CreateDeviceWindow", "\320\234\320\276\320\264\321\203\320\273\321\214", nullptr));
        rbProd->setText(QCoreApplication::translate("CreateDeviceWindow", "\320\230\320\267\320\264\320\265\320\273\320\270\320\265", nullptr));
        label_8->setText(QCoreApplication::translate("CreateDeviceWindow", "\320\242\320\270\320\277 \320\270\320\267\320\264\320\265\320\273\320\270\321\217", nullptr));
        label_10->setText(QCoreApplication::translate("CreateDeviceWindow", "\320\241\320\265\321\200\320\270\320\271\320\275\321\213\320\271 \320\275\320\276\320\274\320\265\321\200", nullptr));
        label_12->setText(QCoreApplication::translate("CreateDeviceWindow", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217 \320\270\320\267\320\264\320\265\320\273\320\270\321\217", nullptr));
        label_9->setText(QCoreApplication::translate("CreateDeviceWindow", "\320\242\320\270\320\277 \320\274\320\276\320\264\321\203\320\273\321\217", nullptr));
        lbDatePlate->setText(QString());
        label_3->setText(QCoreApplication::translate("CreateDeviceWindow", "\320\237\321\200\320\270\320\262\321\217\320\267\320\260\321\202\321\214 \320\277\320\273\320\260\321\202\321\203 \321\201 \321\201\320\265\321\200\320\270\320\271\320\275\321\213\320\274 \342\204\226", nullptr));
        lbNumberDocPlate->setText(QString());
        lbVNFTPlate->setText(QString());
        label_7->setText(QCoreApplication::translate("CreateDeviceWindow", "\320\224\320\260\321\202\320\260 \321\201\320\276\320\267\320\264\320\260\320\275\320\270\321\217", nullptr));
        lbNumberFWPlate->setText(QString());
        label_4->setText(QCoreApplication::translate("CreateDeviceWindow", "\342\204\226 \320\277\321\200\320\276\321\210\320\270\320\262\320\272\320\270", nullptr));
        label_5->setText(QCoreApplication::translate("CreateDeviceWindow", "\342\204\226 \320\275\320\260\320\272\320\273\320\260\320\264\320\275\320\276\320\271", nullptr));
        label_6->setText(QCoreApplication::translate("CreateDeviceWindow", "\320\222\320\235\320\244\320\242", nullptr));
        tbSearchPlate->setText(QCoreApplication::translate("CreateDeviceWindow", "...", nullptr));
        label_13->setText(QCoreApplication::translate("CreateDeviceWindow", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217 \320\274\320\276\320\264\321\203\320\273\321\217", nullptr));
        label_21->setText(QCoreApplication::translate("CreateDeviceWindow", "\320\241\320\265\321\200\320\270\320\271\320\275\321\213\320\271 \342\204\226", nullptr));
        lbNumberPlate->setText(QString());
        label_11->setText(QCoreApplication::translate("CreateDeviceWindow", "\320\241\320\265\321\200\320\270\320\271\320\275\321\213\320\271 \320\275\320\276\320\274\320\265\321\200", nullptr));
        label_14->setText(QCoreApplication::translate("CreateDeviceWindow", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217 \320\274\320\276\320\264\321\203\320\273\321\217", nullptr));
        label_15->setText(QCoreApplication::translate("CreateDeviceWindow", "\320\242\320\270\320\277 \320\274\320\276\320\264\321\203\320\273\321\217", nullptr));
        lbNumberDocPlate_2->setText(QString());
        lbVNFTPlate_2->setText(QString());
        label_16->setText(QCoreApplication::translate("CreateDeviceWindow", "\320\224\320\260\321\202\320\260 \321\201\320\276\320\267\320\264\320\260\320\275\320\270\321\217", nullptr));
        lbNumberFWPlate_2->setText(QString());
        lbDatePlate_2->setText(QString());
        label_17->setText(QCoreApplication::translate("CreateDeviceWindow", "\342\204\226 \320\277\321\200\320\276\321\210\320\270\320\262\320\272\320\270", nullptr));
        label_18->setText(QCoreApplication::translate("CreateDeviceWindow", "\342\204\226 \320\275\320\260\320\272\320\273\320\260\320\264\320\275\320\276\320\271", nullptr));
        label_19->setText(QCoreApplication::translate("CreateDeviceWindow", "\320\222\320\235\320\244\320\242", nullptr));
        lbNumberPlate_2->setText(QString());
        label_20->setText(QCoreApplication::translate("CreateDeviceWindow", "\342\204\226 \320\277\320\273\320\260\321\202\321\213", nullptr));
        lbTypeModul->setText(QString());
        pbPrev->setText(QCoreApplication::translate("CreateDeviceWindow", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        pbNext->setText(QCoreApplication::translate("CreateDeviceWindow", "\320\224\320\260\320\273\320\265\320\265", nullptr));
        label->setText(QCoreApplication::translate("CreateDeviceWindow", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\275\321\213\320\265 \320\270\320\267\320\264\320\265\320\273\320\270\321\217", nullptr));
        tbDeleteProduct->setText(QCoreApplication::translate("CreateDeviceWindow", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateDeviceWindow: public Ui_CreateDeviceWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEDEVICEWINDOW_H
