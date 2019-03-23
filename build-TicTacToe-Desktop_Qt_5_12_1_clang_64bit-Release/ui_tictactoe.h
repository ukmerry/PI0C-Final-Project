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
#include <QtWidgets/QFrame>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TicTacToe
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLCDNumber *lcdNumber_2;
    QFrame *frame;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_4;
    QFrame *line_5;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLCDNumber *lcdNumber_1;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TicTacToe)
    {
        if (TicTacToe->objectName().isEmpty())
            TicTacToe->setObjectName(QString::fromUtf8("TicTacToe"));
        TicTacToe->resize(537, 647);
        TicTacToe->setTabShape(QTabWidget::Rounded);
        centralWidget = new QWidget(TicTacToe);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(250, 20, 261, 71));
        label->setLayoutDirection(Qt::LeftToRight);
        label->setTextFormat(Qt::AutoText);
        label->setScaledContents(false);
        label->setWordWrap(false);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(140, 0, 111, 111));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_3->addWidget(label_3);

        lcdNumber_2 = new QLCDNumber(layoutWidget);
        lcdNumber_2->setObjectName(QString::fromUtf8("lcdNumber_2"));

        verticalLayout_3->addWidget(lcdNumber_2);

        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setEnabled(true);
        frame->setGeometry(QRect(30, 120, 481, 451));
        frame->setCursor(QCursor(Qt::PointingHandCursor));
        frame->setStyleSheet(QString::fromUtf8(""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Sunken);
        frame->setLineWidth(2);
        pushButton_1 = new QPushButton(frame);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(10, 10, 141, 131));
        pushButton_1->setCursor(QCursor(Qt::ArrowCursor));
        pushButton_1->setMouseTracking(false);
        pushButton_1->setAutoFillBackground(false);
        pushButton_1->setStyleSheet(QString::fromUtf8("border:none"));
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(170, 10, 141, 131));
        pushButton_2->setStyleSheet(QString::fromUtf8("border:none"));
        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(330, 10, 141, 131));
        pushButton_3->setStyleSheet(QString::fromUtf8("border:none"));
        pushButton_4 = new QPushButton(frame);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(10, 150, 141, 131));
        pushButton_4->setStyleSheet(QString::fromUtf8("border:none"));
        pushButton_5 = new QPushButton(frame);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(170, 150, 141, 131));
        pushButton_5->setStyleSheet(QString::fromUtf8("border:none"));
        pushButton_6 = new QPushButton(frame);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(330, 150, 141, 131));
        pushButton_6->setStyleSheet(QString::fromUtf8("border:none"));
        pushButton_7 = new QPushButton(frame);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(10, 290, 141, 141));
        pushButton_7->setStyleSheet(QString::fromUtf8("border:none"));
        pushButton_8 = new QPushButton(frame);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(170, 290, 141, 141));
        pushButton_8->setStyleSheet(QString::fromUtf8("border:none"));
        pushButton_9 = new QPushButton(frame);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(330, 290, 141, 141));
        pushButton_9->setStyleSheet(QString::fromUtf8("border:none"));
        line = new QFrame(frame);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(20, 140, 441, 16));
        line->setLineWidth(2);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(frame);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(20, 280, 441, 16));
        line_2->setLineWidth(2);
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(frame);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(310, 20, 20, 421));
        line_4->setStyleSheet(QString::fromUtf8("b"));
        line_4->setLineWidth(2);
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(frame);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(140, 20, 20, 421));
        line_5->setStyleSheet(QString::fromUtf8("b"));
        line_5->setLineWidth(2);
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);
        line_4->raise();
        line->raise();
        line_2->raise();
        pushButton_1->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        pushButton_4->raise();
        pushButton_5->raise();
        pushButton_6->raise();
        pushButton_7->raise();
        pushButton_8->raise();
        pushButton_9->raise();
        line_5->raise();
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 0, 111, 111));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        lcdNumber_1 = new QLCDNumber(widget);
        lcdNumber_1->setObjectName(QString::fromUtf8("lcdNumber_1"));

        verticalLayout_2->addWidget(lcdNumber_1);

        TicTacToe->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TicTacToe);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 537, 22));
        TicTacToe->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TicTacToe);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        TicTacToe->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TicTacToe);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        TicTacToe->setStatusBar(statusBar);

        retranslateUi(TicTacToe);

        QMetaObject::connectSlotsByName(TicTacToe);
    } // setupUi

    void retranslateUi(QMainWindow *TicTacToe)
    {
        TicTacToe->setWindowTitle(QApplication::translate("TicTacToe", "TicTacToe", nullptr));
        label->setText(QString());
        label_3->setText(QApplication::translate("TicTacToe", "    Player X", nullptr));
        pushButton_1->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
        pushButton_7->setText(QString());
        pushButton_8->setText(QString());
        pushButton_9->setText(QString());
        label_2->setText(QApplication::translate("TicTacToe", "    Player O", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TicTacToe: public Ui_TicTacToe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TICTACTOE_H
