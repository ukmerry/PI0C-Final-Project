#include "tictactoe.h"
#include "ui_tictactoe.h"
#include <string>
#include <sstream>
#include <QMessageBox>

using namespace std;

TicTacToe::TicTacToe(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TicTacToe), flag(int())
{
    ui->setupUi(this);
    signalMapper = new QSignalMapper(this);

    connect(ui->pushButton_1, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushButton_1, "0,0");

    connect(ui->pushButton_2, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushButton_2, "0,1");

    connect(ui->pushButton_3, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushButton_3, "0,2");

    connect(ui->pushButton_4, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushButton_4, "1,0");

    connect(ui->pushButton_5, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushButton_5, "1,1");

    connect(ui->pushButton_6, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushButton_6, "1,2");

    connect(ui->pushButton_7, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushButton_7, "2,0");

    connect(ui->pushButton_8, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushButton_8, "2,1");

    connect(ui->pushButton_9, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushButton_9, "2,2");

    connect(signalMapper, SIGNAL(mapped(const QString&)), this, SLOT(digitClicked(const QString&)));

}

void TicTacToe::digitClicked(const QString& id)
{
    int i = id.split(",").at(0).toInt();
    int j = id.split(",").at(1).toInt();
    ui->lcdNumber->display(i);
}

void TicTacToe::text_initializer()
{
    ui->label->setAlignment(Qt::AlignCenter);
    QFont f("", 50);
    QFontMetrics fm(f);
    ui->label->setFont(f);
    ui->label->setText("<font color='blue'>Blue Turn</font>");
}

TicTacToe::~TicTacToe()
{
    delete ui;
}
