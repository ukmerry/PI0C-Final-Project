#ifndef TICTACTOE_H
#define TICTACTOE_H

#include <QMainWindow>
#include <QToolButton>
#include <QPushButton>
#include <array>
#include <QSignalMapper>

using namespace std;

const int dem = 3;

namespace Ui {
class TicTacToe;
}

class TicTacToe : public QMainWindow
{
    Q_OBJECT

public:
    explicit TicTacToe(QWidget *parent = nullptr);
    ~TicTacToe();

private:
    void text_initializer();

private slots:
    void boxClicked(const int&);

private:
    Ui::TicTacToe *ui;

    QFont font;
    QSignalMapper *signalMapper;
    QPushButton *Button[9];

    int flag;
    array <array<int, dem>, dem> grid;
};

#endif // TICTACTOE_H
