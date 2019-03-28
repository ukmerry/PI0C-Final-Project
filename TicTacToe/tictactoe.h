#ifndef TICTACTOE_H
#define TICTACTOE_H

#include <QMainWindow>
#include <QPushButton>
#include <array>
#include <iterator>
#include <QSignalMapper>

using namespace std;

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
    bool win(size_t, size_t);
    void  score(const char&);
    bool array_full();
    void reset();

private slots:
    void boxClicked(const int&);

private:
    Ui::TicTacToe *ui;

    int player1_score;
    int player2_score;
    QFont font;
    QSignalMapper *signalMapper;
    QPushButton *Button[9];

    char flag;
    array<array<char, 3>, 3> grid;
};

#endif // TICTACTOE_H
