/********************************************************************************
** Form generated from reading UI file 'ARP_Hunter.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARP_HUNTER_H
#define UI_ARP_HUNTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ARP_HunterClass
{
public:
    QWidget *centralWidget;
    QComboBox *comboBox;
    QPushButton *startButton;
    QPushButton *stopButton;
    QPushButton *clearButton;
    QLabel *label;
    QTableWidget *tableWidget;
    QPlainTextEdit *plainTextEdit;
    QLabel *label_2;
    QListWidget *listWidget;
    QLabel *label_3;
    QStatusBar *statusBar;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *ARP_HunterClass)
    {
        if (ARP_HunterClass->objectName().isEmpty())
            ARP_HunterClass->setObjectName(QString::fromUtf8("ARP_HunterClass"));
        ARP_HunterClass->resize(700, 525);
        QFont font;
        font.setFamily(QString::fromUtf8("Consolas"));
        ARP_HunterClass->setFont(font);
        centralWidget = new QWidget(ARP_HunterClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(20, 50, 661, 22));
        startButton = new QPushButton(centralWidget);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setGeometry(QRect(20, 90, 81, 23));
        startButton->setFocusPolicy(Qt::ClickFocus);
        stopButton = new QPushButton(centralWidget);
        stopButton->setObjectName(QString::fromUtf8("stopButton"));
        stopButton->setGeometry(QRect(130, 90, 81, 23));
        stopButton->setFocusPolicy(Qt::ClickFocus);
        clearButton = new QPushButton(centralWidget);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
        clearButton->setGeometry(QRect(240, 90, 81, 23));
        clearButton->setFocusPolicy(Qt::ClickFocus);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 221, 31));
        QFont font1;
        font1.setPointSize(12);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        tableWidget = new QTableWidget(centralWidget);
        if (tableWidget->columnCount() < 7)
            tableWidget->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem->setFont(font);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem1->setFont(font);
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem2->setFont(font);
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem3->setFont(font);
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem4->setFont(font);
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem5->setFont(font);
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem6->setFont(font);
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(20, 130, 661, 161));
        tableWidget->setFont(font);
        tableWidget->setFocusPolicy(Qt::NoFocus);
        tableWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        tableWidget->horizontalHeader()->setVisible(true);
        tableWidget->horizontalHeader()->setMinimumSectionSize(20);
        tableWidget->verticalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setDefaultSectionSize(22);
        plainTextEdit = new QPlainTextEdit(centralWidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(490, 340, 191, 141));
        plainTextEdit->setFocusPolicy(Qt::NoFocus);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(490, 310, 51, 21));
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(20, 340, 451, 141));
        listWidget->setFont(font);
        listWidget->setFocusPolicy(Qt::NoFocus);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 310, 71, 21));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);
        ARP_HunterClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(ARP_HunterClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        statusBar->setFont(font);
        ARP_HunterClass->setStatusBar(statusBar);
        menuBar = new QMenuBar(ARP_HunterClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 700, 20));
        menuBar->setFont(font);
        ARP_HunterClass->setMenuBar(menuBar);

        retranslateUi(ARP_HunterClass);

        QMetaObject::connectSlotsByName(ARP_HunterClass);
    } // setupUi

    void retranslateUi(QMainWindow *ARP_HunterClass)
    {
        ARP_HunterClass->setWindowTitle(QCoreApplication::translate("ARP_HunterClass", "ARP_Hunter", nullptr));
        startButton->setText(QCoreApplication::translate("ARP_HunterClass", "Start", nullptr));
        stopButton->setText(QCoreApplication::translate("ARP_HunterClass", "Stop", nullptr));
        clearButton->setText(QCoreApplication::translate("ARP_HunterClass", "Clear", nullptr));
        label->setText(QCoreApplication::translate("ARP_HunterClass", "Please choose a device", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("ARP_HunterClass", "No.", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("ARP_HunterClass", "Time", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("ARP_HunterClass", "Length", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("ARP_HunterClass", "Source", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("ARP_HunterClass", "Destination", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("ARP_HunterClass", "Protocol", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("ARP_HunterClass", "Frame", nullptr));
        plainTextEdit->setPlainText(QString());
        label_2->setText(QCoreApplication::translate("ARP_HunterClass", "Frame", nullptr));
        label_3->setText(QCoreApplication::translate("ARP_HunterClass", "Analyze", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ARP_HunterClass: public Ui_ARP_HunterClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARP_HUNTER_H
