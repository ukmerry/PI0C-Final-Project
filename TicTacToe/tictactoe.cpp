#include "tictactoe.h"
#include "ui_tictactoe.h"
#include <array>

using namespace std;

TicTacToe::TicTacToe(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TicTacToe)
{
    ui->setupUi(this);



    QObject::connect(ui->toolButton_11, SIGNAL(clicked()),
                       this, SLOT(grid[0][0] = value));
    QObject::connect(ui->toolButton_12, SIGNAL(clicked()),
                       this, SLOT(grid[0][1] = value));
    QObject::connect(ui->toolButton_13, SIGNAL(clicked()),
                       this, SLOT(grid[0][2] = value));
    QObject::connect(ui->toolButton_21, SIGNAL(clicked()),
                       this, SLOT(grid[1][0] = value));
    QObject::connect(ui->toolButton_22, SIGNAL(clicked()),
                       this, SLOT(grid[1][1] = value));
    QObject::connect(ui->toolButton_23, SIGNAL(clicked()),
                       this, SLOT(grid[1][2] = value));
    QObject::connect(ui->toolButton_31, SIGNAL(clicked()),
                       this, SLOT(grid[2][0] = value));
    QObject::connect(ui->toolButton_32, SIGNAL(clicked()),
                       this, SLOT(grid[2][1] = value));
    QObject::connect(ui->toolButton_33, SIGNAL(clicked()),
                       this, SLOT(grid[2][2] = value));
}

TicTacToe::~TicTacToe()
{
    delete ui;
}
