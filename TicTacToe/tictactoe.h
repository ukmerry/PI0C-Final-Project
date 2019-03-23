#ifndef TICTACTOE_H
#define TICTACTOE_H

#include <QMainWindow>
#include <array>

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
    Ui::TicTacToe *ui;
    array <array<int, dem>, dem> grid;
};

#endif // TICTACTOE_H
