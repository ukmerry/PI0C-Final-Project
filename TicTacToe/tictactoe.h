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
    void digitClicked(const QString&);

private:
    Ui::TicTacToe *ui;
    QSignalMapper *signalMapper;

    int flag;
    array <array<int, dem>, dem> grid;
};

#endif // TICTACTOE_H
