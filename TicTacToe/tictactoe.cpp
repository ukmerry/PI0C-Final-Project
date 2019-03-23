#include "tictactoe.h"
#include "ui_tictactoe.h"
#include <QMessageBox>

using namespace std;

TicTacToe::TicTacToe(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TicTacToe), flag(NULL), player1_score(0), player2_score(0)
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

void TicTacToe::endgame()
{
    QMessageBox::StandardButton reply = QMessageBox::question(this, "We have a result", tr("Do you want to continue?"), QMessageBox::Yes|QMessageBox::No);
    if(reply == QMessageBox::Yes)
        reset();
    if(reply == QMessageBox::No)
        QApplication::quit();
}

bool TicTacToe::win(size_t i, size_t j)
{
    char mark = grid[i][j];

    if (grid[i][0] == mark && grid[i][1] == mark && grid[i][2] == mark)
       return true;

    if (grid[0][j] == mark && grid[1][j] == mark && grid[2][j] == mark)
       return true;

    if (grid[0][0] == mark && grid[1][1] == mark && grid[2][2] == mark)
       return true;

    if (grid[0][2] == mark && grid[1][1] == mark && grid[2][0] == mark)
       return true;

    return false;
}

void TicTacToe::boxClicked(const int& id)
{
     font = Button[id]->font();
     font.setPointSize(100);
     Button[id]->setFont(font);

    size_t i, j;
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

    if (flag == 'X' || flag == 0)
    {
        ui->label->setText("O Turn");
        Button[id]->setText("X");
        flag = 'O';
    }
    else if(flag == 'O' || flag == 0)
    {
        ui->label->setText("X Turn");
        Button[id]->setText("O");
        flag = 'X';
    }

    grid[i][j] = flag;

    Button[id]->setEnabled(false);

    if(array_full())
       endgame();
    else if(win(i,j))
       score(flag);
}

bool TicTacToe::array_full()
{
    for (size_t i = 0; i < 3; ++i)
    {
        for (size_t j = 0; j < 3; ++j)
        {
            if(grid[i][j] == NULL)
            return false;
        }
    }

    return true;
}

void TicTacToe::reset()
{
    for (size_t i = 0; i < 3; i++)
        for(size_t j = 0; j < 3; j++)
            grid[i][j] = NULL;

    for(size_t i = 0; i < 9; i++)
    {
        Button[i]->setEnabled(true);
        Button[i]->setText("");
    }
}

bool TicTacToe::score(const char& winner)
{
    if(winner == 'X')
       player1_score++;
    else if(winner == 'O')
       player2_score++;

    ui->lcdNumber_1->display(player1_score);
    ui->lcdNumber_2->display(player2_score);

    endgame();
}

void TicTacToe::text_initializer()
{
    ui->label->setAlignment(Qt::AlignCenter);
    QFont f("", 50);
    QFont g("", 20);
    QFontMetrics fm(f);
    QFontMetrics gm(g);

    ui->label_2->setFont(g);
    ui->label_3->setFont(g);
    ui->label->setFont(f);
    ui->label->setText("X Turn");
}

TicTacToe::~TicTacToe()
{
    delete ui;
}
