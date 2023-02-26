# Tic-Tac-Toe :x: :o:
Create a class which will act as a supervisor for a game of TicTacToe.
It will keep the state of the game,
containing information about (3 x 3) board, player turn order, is game over or not.
It will also provide basic functionality for starting the game by initializing an empty game board and
giving first move permission to 'X'.
And of course functionality for writing 'X' or 'O' in a given cell of the board, with checks for player order,
board boundaries and emptiness of the cell.

***NOTE:*** Everything below is a guidance or a recommendation, not a rule.
Any implantation of the class counts, as long as it works properly and has all main functionalities.

## Data members :package:
* **board** - 3 x 3 matrix, which will contain the state of the game board,
every cell of which could be empty, contain 'X' or contain 'O', for example:
```c++
std::vector<std::string> board;
```
* **isXsTurn** - boolean value, for providing player order,
storing whose turn it is to play in a current state of the game, 'X' or 'O':
```c++
bool isXsTurn;
```
* **isOver** - boolean value, to suspend any action with the game, after someone won the match, or it came to a draw:
```c++
bool isOver;
```
***NOTE:*** All the data members may be private,
to make member functions the only possible way to work with the data. :lock:

## Member functions :hammer_and_pick:
```c++
class TicTacToe {
    private: // hidden implementation
        bool isValidPosition(int x, int y) {...} // check if the given board cell is in (3 x 3) matrix range
        bool isPositionEmpty(int x, int y) {...} // check if the given board cell is empty and doesn't contain an 'X' or an 'O'
        bool isGameOver() {...} // check if the match has ended with a draw or with a win of the players, set isOver variable to true
        
    public: // interface
        void init() {...} // initialize an empty game board, before starting the game
        void printBoard() {...} // print current state of the board
        void setX(int x, int y) {...} // write an 'X' in a given cell (x, y), with checks for validity and emptiness of the cell 
        void setO(int x, int y) {...} // write an 'O' in a given cell (x, y), with checks for validity and emptiness of the cell
};
```
***NOTE:*** After using functions `setX` or `setO`, it should be checked if the match came to its end with the function `isGameOver`,
any action after that (except for `init` function) should be suspended.

## Examples :game_die:
### Main function 1
```c++
int main() {
    TicTacToe game;
    game.init();
    game.printBoard();
    game.setX(2, 2);
    game.setO(1, 3);
    game.setX(3, 3);
    game.printBoard();
    return 0;
}
```

### Possible output 1
```
Game was initialized!
Printing current state...
|...|
|...|
|...|
X set in (2, 2) cell
O set in (1, 3) cell
X set in (3, 3) cell
Printing current state...
|O.X|
|.X.|
|...|
```

### Main function 2
```c++
int main() {
    TicTacToe game;
    game.init();
    game.printBoard();
    game.setO(1, 2);
    game.setX(5, 9);
    game.setX(2, 2);
    game.setO(2, 2);
    game.printBoard();
    return 0;
}
```

### Possible output 2
```
Game was initialized!
Printing current state...
|...|
|...|
|...|
It's not O's turn!
Cell (5, 9) is out of range!
X set in (2, 2) cell
Cell (2, 2) is not empty!
Printing current state...
|...|
|.X.|
|...|
```
