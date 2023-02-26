# Tic-Tac-Toe :x: :o:
Create a class of TicTacToe which will act as a supervisor for a game.
It will keep the state of the game,
containing information about game board, whose turn it is, is game over or not.
It will also provide basic functionality for starting the game by initializing an empty game board and
giving first move permission to 'X'.
And of course functionality for writing 'X' or 'O' in a given cell of the board, with checks of player order,
board boundaries and emptiness of the cell.

***NOTE:*** Everything below is a guidance or a recommendation, not a rule.
Any implantation of the class counts, as long as it works properly and has all main functionalities.

## Data members :package:
* **board** - 3 x 3 matrix, which will contain current state of the game board,
every cell of which could be empty, contain 'X' or contain 'O', for example:
```c++
std::vector<std::string> board;
```
* **isXsTurn** - boolean value, for providing player order,
storing whose turn it is to play in a current state of the game, 'X' or 'O':
```c++
bool isXsTurn;
```
* **isGameOver** - boolean value, to suspend any action with the game after someone already won the match:
```c++
bool isOver;
```
***NOTE:*** All the data members may be private,
to make member functions the only possible way to work with data. :lock:

## Member functions :hammer_and_pick:
```c++
class TicTacToe {
    private: // hidden implementation
        bool isValidPosition(int x, int y) {...} // to check if given board cell is in (3 x 3) matrix range
        bool isPositionEmpty(int x, int y) {...} // to check if the given board cell contains 'X' or 'O'
        bool isGameOver() {...} // to check if match has ended with a draw or with a win of the players, set isOver variable to true
        
    public: // interface
        void init() {...} // initialize an empty game board, before starting the game
        void printBoard() {...} // print current state of the board in a console
        void setX(int x, int y) {...} // write 'X' in a given cell (x, y), with checks for validity and emptiness of the cell 
        void setO(int x, int y) {...} // write 'O' in a given cell (x, y), with checks for validity and emptiness of the cell
};
```
***NOTE:*** After using `setX` or `setO`, it should be checked if the match came to its end,
any action after that (except for `init` function) should be suspended.

## Example
#### Main function
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

#### Possible output
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
