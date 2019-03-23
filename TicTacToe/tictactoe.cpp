#include "tictactoe.h"
#include "ui_tictactoe.h"
#include <string>
#include <sstream>
#include <QMessageBox>

using namespace std;

TicTacToe::TicTacToe(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TicTacToe), flag(0)
{
    ui->setupUi(this);
    signalMapper = new QSignalMapper(this);

    text_initializer();

    Button[0] = ui->pushButton_1;
    Button[1] = ui->pushButton_2;
    Button[2] = ui->pushButton_3;
    Button[3] = ui->pushButton_4;
    Button[4] = ui->pushButton_5;
    Button[5] = ui->pushButton_6;
    Button[6] = ui->pushButton_7;
    Button[7] = ui->pushButton_8;
    Button[8] = ui->pushButton_9;

    connect(Button[0], SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(Button[0], 0);

    connect(Button[1], SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(Button[1], 1);

    connect(Button[2], SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(Button[2], 2);

    connect(Button[3], SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(Button[3], 3);

    connect(Button[4], SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(Button[4], 4);

    connect(Button[5], SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(Button[5], 5);

    connect(Button[6], SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(Button[6], 6);

    connect(Button[7], SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(Button[7], 7);

    connect(Button[8], SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(Button[8], 8);

    connect(signalMapper, SIGNAL(mapped(const int&)), this, SLOT(boxClicked(const int&)));
}

void TicTacToe::boxClicked(const int& id)
{
     font = Button[id]->font();
     font.setPointSize(140);
     Button[id]->setFont(font);

    int i, j;
    switch(id)
    {
       case 0: i=0;j=0; break;
       case 1: i=0;j=1; break;
       case 2: i=0;j=2; break;
       case 3: i=1;j=0; break;
       case 4: i=1;j=1; break;
       case 5: i=1;j=2; break;
       case 6: i=2;j=0; break;
       case 7: i=2;j=1; break;
       case 8: i=2;j=2; break;
    }

    grid[i][j] = flag;

    if (flag == 1 || flag == 0)
    {
        ui->label->setText("O Turn");
        Button[id]->setText("X");
        flag = 2;
    }
    else if(flag == 2 || flag == 0)
    {
        ui->label->setText("X Turn");
        Button[id]->setText("O");
        flag = 1;
    }

    Button[id]->setEnabled(false);
}

void TicTacToe::text_initializer()
{
    ui->label->setAlignment(Qt::AlignCenter);
    QFont f("", 50);
    QFontMetrics fm(f);
    ui->label->setFont(f);
    ui->label->setText("X Turn");
}

TicTacToe::~TicTacToe()
{
    delete ui;
}
