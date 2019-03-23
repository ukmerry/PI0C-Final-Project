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

private slots:
    void on_toolButton_11_clicked();

    void on_toolButton_12_clicked();

    void on_toolButton_13_clicked();

    void on_toolButton_21_clicked();

    void on_toolButton_22_clicked();

    void on_toolButton_23_clicked();

    void on_toolButton_31_clicked();

    void on_toolButton_32_clicked();

    void on_toolButton_33_clicked();

private:
    Ui::TicTacToe *ui;

    bool flag;
    array <array<bool, dem>, dem> grid;
};

#endif // TICTACTOE_H
