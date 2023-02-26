# Tic-Tac-Toe :x: :o:
Create a class of TicTacToe which will work as a supervisor for a game.
It will keep the current state of the game,
containing information about game board, whose turn it is, is game over or not.
It will also provide basic functionality for starting the game by initializing an empty game board,
writing 'X' or 'O' in a given position, with checking whose turn it is,
board boundaries and checking if board cell is empty.

***NOTE:*** Everything below is to be a guidance or a recommendation, not a rule.
Any implantation of the class counts, as long as it works properly and has all main functionalities. :coin:

## Data members :package:
* **board** - 3 x 3 matrix, which will contain current state of the game, for example:
```c++
std::vector<std::string> board;
```
* **isXsTurn** - boolean value, for knowing whose turn it is in a current state of the game:
```c++
bool isXsTurn
```
***NOTE:*** All the data members may be private,
to make member functions the only possible way to work with data members. :lock:

## Member functions :hammer_and_pick:
```c++
private:
    bool isValidPosition(int x, int y) {...}
    bool isEmptyPosition(int x, int y) {...}
public:
    void startGame() {...}
    void printBoard() {...}
    void setX(int x, int y) {...}
    void setO(int x, int y) {...}
```