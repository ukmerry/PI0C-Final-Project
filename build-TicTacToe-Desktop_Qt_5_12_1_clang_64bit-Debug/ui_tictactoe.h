/********************************************************************************
** Form generated from reading UI file 'tictactoe.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TICTACTOE_H
#define UI_TICTACTOE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TicTacToe
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QToolButton *toolButton_31;
    QToolButton *toolButton_33;
    QToolButton *toolButton_32;
    QToolButton *toolButton_13;
    QToolButton *toolButton_23;
    QToolButton *toolButton_21;
    QToolButton *toolButton_11;
    QToolButton *toolButton_12;
    QToolButton *toolButton_22;
    QWidget *tab_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TicTacToe)
    {
        if (TicTacToe->objectName().isEmpty())
            TicTacToe->setObjectName(QString::fromUtf8("TicTacToe"));
        TicTacToe->resize(810, 551);
        centralWidget = new QWidget(TicTacToe);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(220, 90, 331, 311));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        toolButton_31 = new QToolButton(tab);
        toolButton_31->setObjectName(QString::fromUtf8("toolButton_31"));
        toolButton_31->setGeometry(QRect(30, 180, 91, 81));
        toolButton_33 = new QToolButton(tab);
        toolButton_33->setObjectName(QString::fromUtf8("toolButton_33"));
        toolButton_33->setGeometry(QRect(210, 180, 91, 81));
        toolButton_32 = new QToolButton(tab);
        toolButton_32->setObjectName(QString::fromUtf8("toolButton_32"));
        toolButton_32->setGeometry(QRect(120, 180, 91, 81));
        toolButton_13 = new QToolButton(tab);
        toolButton_13->setObjectName(QString::fromUtf8("toolButton_13"));
        toolButton_13->setGeometry(QRect(210, 10, 91, 91));
        toolButton_23 = new QToolButton(tab);
        toolButton_23->setObjectName(QString::fromUtf8("toolButton_23"));
        toolButton_23->setGeometry(QRect(210, 100, 91, 81));
        toolButton_21 = new QToolButton(tab);
        toolButton_21->setObjectName(QString::fromUtf8("toolButton_21"));
        toolButton_21->setGeometry(QRect(30, 100, 91, 81));
        toolButton_11 = new QToolButton(tab);
        toolButton_11->setObjectName(QString::fromUtf8("toolButton_11"));
        toolButton_11->setGeometry(QRect(30, 10, 91, 91));
        toolButton_12 = new QToolButton(tab);
        toolButton_12->setObjectName(QString::fromUtf8("toolButton_12"));
        toolButton_12->setGeometry(QRect(120, 10, 91, 91));
        toolButton_22 = new QToolButton(tab);
        toolButton_22->setObjectName(QString::fromUtf8("toolButton_22"));
        toolButton_22->setGeometry(QRect(120, 100, 91, 81));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        TicTacToe->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TicTacToe);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 810, 22));
        TicTacToe->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TicTacToe);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        TicTacToe->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TicTacToe);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        TicTacToe->setStatusBar(statusBar);

        retranslateUi(TicTacToe);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TicTacToe);
    } // setupUi

    void retranslateUi(QMainWindow *TicTacToe)
    {
        TicTacToe->setWindowTitle(QApplication::translate("TicTacToe", "TicTacToe", nullptr));
        toolButton_31->setText(QString());
        toolButton_33->setText(QString());
        toolButton_32->setText(QString());
        toolButton_13->setText(QString());
        toolButton_23->setText(QString());
        toolButton_21->setText(QString());
        toolButton_11->setText(QString());
        toolButton_12->setText(QString());
        toolButton_22->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("TicTacToe", "3X3", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("TicTacToe", "4X4", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TicTacToe: public Ui_TicTacToe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TICTACTOE_H
