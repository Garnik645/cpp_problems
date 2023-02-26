# Tic-Tac-Toe :x: :o:
Create a class of TicTacToe which will work as a supervisor for a game.
It will keep the current state of the game,
containing information about game board, whose turn it is, is game over or not.
It will also provide basic functionality for starting the game by initializing an empty game board and
giving first move permission to 'X',
functionality for writing 'X' or 'O' in a given position, with checking whose turn it is,
board boundaries and checking if board cell is empty.

***NOTE:*** Everything below is a guidance or a recommendation, not a rule.
Any implantation of the class counts, as long as it works properly and has all main functionalities. :coin:

## Data members :package:
* **board** - 3 x 3 matrix, which will contain current state of the game board, for example:
```c++
std::vector<std::string> board;
```
* **isXsTurn** - boolean value, for knowing whose turn it is in a current state of the game:
```c++
bool isXsTurn
```
***NOTE:*** All the data members may be private,
to make member functions the only possible way to work with data. :lock:

## Member functions :hammer_and_pick:
```c++
class TicTacToe {
    private: // hidden implementation
        bool isValidPosition(int x, int y) {...} // check given board cells ranges to be in {1, 2, 3} x {1, 2, 3}
        bool isPositionEmpty(int x, int y) {...} // check if the given board cell contains 'X' or 'O' in it
    
    public: // interface
        void startGame() {...} // initialize an empty game board, before starting the game
        void printBoard() {...} // print current state of the board in a console
        void setX(int x, int y) {...} // write 'X' in a given cell, with checks for validity and emptiness
        void setO(int x, int y) {...} // write 'O' in a given cell, with checks for validity and emptiness
};
```
