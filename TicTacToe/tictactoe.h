#ifndef TICTACTOE_H
#define TICTACTOE_H

#include <QMainWindow>

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
};

#endif // TICTACTOE_H
