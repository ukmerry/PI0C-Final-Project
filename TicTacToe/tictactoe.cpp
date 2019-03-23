#include "tictactoe.h"
#include "ui_tictactoe.h"
#include <QColor>

using namespace std;

TicTacToe::TicTacToe(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TicTacToe), flag(int())
{
    ui->setupUi(this);
    text_initializer();
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

void TicTacToe::on_toolButton_11_clicked()
{
    grid[0][0] = flag;

       if (flag == 1)
       {
           ui->toolButton_11->setPalette(Qt::red);
           ui->toolButton_11->setAutoFillBackground(true);
           flag = 0;
           ui->label->setText("<font color = 'blue'>Blue Turn</font>");
       }
       else if(flag == 0)
       {
           ui->toolButton_11->setPalette(Qt::blue);
           ui->toolButton_11->setAutoFillBackground(true);
           flag = 1;
           ui->label->setText("<font color = 'red'>Red Turn</font>");
       }

    ui->toolButton_11->setEnabled(false);
}

void TicTacToe::on_toolButton_12_clicked()
{
    grid[0][1] = flag;

    if (flag == 1)
    {
        ui->toolButton_12->setPalette(Qt::red);
        ui->toolButton_12->setAutoFillBackground(true);
        flag = 0;
        ui->label->setText("<font color = 'blue'>Blue Turn</font>");
    }
    else if(flag == 0)
    {
        ui->toolButton_12->setPalette(Qt::blue);
        ui->toolButton_12->setAutoFillBackground(true);
        flag = 1;
        ui->label->setText("<font color = 'red'>Red Turn</font>");
    }

    ui->toolButton_12->setEnabled(false);
}

void TicTacToe::on_toolButton_13_clicked()
{
    grid[0][2] = flag;

    if (flag == 1)
    {
        ui->toolButton_13->setPalette(Qt::red);
        ui->toolButton_13->setAutoFillBackground(true);
        flag = 0;
        ui->label->setText("<font color = 'blue'>Blue Turn</font>");
    }
    else if(flag == 0)
    {
        ui->toolButton_13->setPalette(Qt::blue);
        ui->toolButton_13->setAutoFillBackground(true);
        flag = 1;
        ui->label->setText("<font color = 'red'>Red Turn</font>");
    }

    ui->toolButton_13->setEnabled(false);
}

void TicTacToe::on_toolButton_21_clicked()
{
    grid[1][0] = flag;

    if (flag == 1)
    {
        ui->toolButton_21->setPalette(Qt::red);
        ui->toolButton_21->setAutoFillBackground(true);
        flag = 0;
        ui->label->setText("<font color = 'blue'>Blue Turn</font>");
    }
    else if(flag == 0)
    {
        ui->toolButton_21->setPalette(Qt::blue);
        ui->toolButton_21->setAutoFillBackground(true);
        flag = 1;
        ui->label->setText("<font color = 'red'>Red Turn</font>");
    }

    ui->toolButton_21->setEnabled(false);
}

void TicTacToe::on_toolButton_22_clicked()
{
    grid[1][1] = flag;

    if (flag == 1)
    {
        ui->toolButton_22->setPalette(Qt::red);
        ui->toolButton_22->setAutoFillBackground(true);
        flag = 0;
        ui->label->setText("<font color = 'blue'>Blue Turn</font>");
    }
    else if(flag == 0)
    {
        ui->toolButton_22->setPalette(Qt::blue);
        ui->toolButton_22->setAutoFillBackground(true);
        flag = 1;
        ui->label->setText("<font color = 'red'>Red Turn</font>");
    }

    ui->toolButton_22->setEnabled(false);
}

void TicTacToe::on_toolButton_23_clicked()
{
    grid[1][2] = flag;

    if (flag == 1)
    {
        ui->toolButton_23->setPalette(Qt::red);
        ui->toolButton_23->setAutoFillBackground(true);
        flag = 0;
        ui->label->setText("<font color = 'blue'>Blue Turn</font>");
    }
    else if(flag == 0)
    {
        ui->toolButton_23->setPalette(Qt::blue);
        ui->toolButton_23->setAutoFillBackground(true);
        flag = 1;
        ui->label->setText("<font color = 'red'>Red Turn</font>");
    }

    ui->toolButton_23->setEnabled(false);
}

void TicTacToe::on_toolButton_31_clicked()
{
    grid[2][0] = flag;

    if (flag == 1)
    {
        ui->toolButton_31->setPalette(Qt::red);
        ui->toolButton_31->setAutoFillBackground(true);
        flag = 0;
        ui->label->setText("<font color = 'blue'>Blue Turn</font>");
    }
    else if(flag == 0)
    {
        ui->toolButton_31->setPalette(Qt::blue);
        ui->toolButton_31->setAutoFillBackground(true);
        flag = 1;
        ui->label->setText("<font color = 'red'>Red Turn</font>");
    }

    ui->toolButton_31->setEnabled(false);
}

void TicTacToe::on_toolButton_32_clicked()
{
    grid[2][1] = flag;

    if (flag == 1)
    {
        ui->toolButton_32->setPalette(Qt::red);
        ui->toolButton_32->setAutoFillBackground(true);
        flag = 0;
        ui->label->setText("<font color = 'blue'>Blue Turn</font>");
    }
    else if(flag == 0)
    {
        ui->toolButton_32->setPalette(Qt::blue);
        ui->toolButton_32->setAutoFillBackground(true);
        flag = 1;
        ui->label->setText("<font color = 'red'>Red Turn</font>");
    }

    ui->toolButton_32->setEnabled(false);
}

void TicTacToe::on_toolButton_33_clicked()
{
    grid[2][2] = flag;

    if (flag == 1)
    {
        ui->toolButton_33->setPalette(Qt::red);
        ui->toolButton_33->setAutoFillBackground(true);
        flag = 0;
        ui->label->setText("<font color = 'blue'>Blue Turn</font>");
    }
    else if(flag == 0)
    {
        ui->toolButton_33->setPalette(Qt::blue);
        ui->toolButton_33->setAutoFillBackground(true);
        flag = 1;
        ui->label->setText("<font color = 'red'>Red Turn</font>");
    }

    ui->toolButton_33->setEnabled(false);
}
