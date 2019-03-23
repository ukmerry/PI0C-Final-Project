# My Other Repository
Please go check them out
\
Assignment 3: https://github.com/ukmerry/PIC10C-Assignment-3.git
\
Assignment 2:
\
Assignment 1: https://github.com/ukmerry/PIC-10C-Assignment1.git

# Tic-Tac-Toe

THE GAME:
* Tic-tac-toe (American English), noughts and crosses (British English) or Xs and Os, is a paper-and-pencil game for two players, X and O, who take turns marking the spaces in a 3×3 grid. The player who succeeds in placing three of their marks in a horizontal, vertical, or diagonal row wins the game.

INSTRUCTION:
* The project is coded by using Qt creater. Players take turn to mark 'X' or 'O' on the grid until a winner is found and reward the winner with one score. Whenever a winner is found or the grid is full, the program will promt the user to continue or not.

# Guide

To start with, a two dimension array is created to store the 'X' and 'O'. The array is set to NULL as default indicating that it is waiting for input.

```c++
array<array<char, 3>, 3> grid;
```

Since we are having multiple signals that connect to similar slot, signalMapper is a good approach to handle all the signals and slots
.Group all the object button in an array so that we can identify which button is called

```c++
QPushButton *Button[9];
Button[0] = ui->pushButton_1;
Button[1] = ui->pushButton_2;
...
Button[8] = ui->pushButton_9;
```
Connect the signals and assign id's to each object button
```c++
connect(Button[0], SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(Button[0], 0);
connect(Button[1], SIGNAL(clicked()), signalMapper, SLOT(map()));
   signalMapper->setMapping(Button[1], 1);
...
connect(Button[8], SIGNAL(clicked()), signalMapper, SLOT(map()));
   signalMapper->setMapping(Button[8], 8);
```
Whenever signals of those buttons are caught, the function boxCliced( ) will be called
```c++
 connect(signalMapper, SIGNAL(mapped(const int&)), this, SLOT(boxClicked(const int&)));
``` 
\
*BoxClicked function*
\=========================================================================\
Save the value to the grid, then set flag to 'X' or 'O' depending on its previos value.
```c++
grid[i][j] = flag;
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
```
Once all the value is set, find if there is a winner or if it ends in a draw.
```c++
Button[id]->setEnabled(false);

    if(array_full())
       endgame();
    else if(win(i,j))
       score(flag);
```

\=========================================================================\
*Determine a winner*
\=========================================================================\
Traverse the array to see if the values are same
```c++
bool TicTacToe::win(size_t i, size_t j)
{
    char mark = grid[i][j];

//horizontal
    if (grid[i][0] == mark && grid[i][1] == mark && grid[i][2] == mark)
       return true;
//vertical
    if (grid[0][j] == mark && grid[1][j] == mark && grid[2][j] == mark)
       return true;
//diagonal
    if (grid[0][0] == mark && grid[1][1] == mark && grid[2][2] == mark)
       return true;
//diagonal
    if (grid[0][2] == mark && grid[1][1] == mark && grid[2][0] == mark)
       return true;

    return false;
}
```
\=========================================================================\
*reset function*
\=========================================================================\
The reset function clear the grid and enable all the buttons.
```c++
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
```
# Comment
There are other helper functions that I did not mention because their syntax is simple. Also, I've done some of the stylesheet of my widgets. For instance, if you place your cursor on the grid, it will change to a hand shape cursor. The app is ready. If you are using Windows, there is a shortcut in the first page of the repository that you can lauch the app directly or you can go into [folder](build-TicTacToe-Desktop_Qt_5_6_2_MinGW_32bit-Release/release) to find the .exe file.\
Codes are maily done in [tictactoe.h](TicTacToe/tictactoe.h) and [tictactoe.cpp](TicTacToe/tictactoe.cpp). Please check those two files.

# Sample Output
![](Capture.PNG)
