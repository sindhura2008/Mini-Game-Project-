#ifndef TICTACTOE_H
#define TICTACTOE_H

class TicTacToe {
private:
    char board[3][3];       // 3x3 game board
    char currentPlayer;     // Tracks whose turn it is ('X' or 'O')
    int moveCount;          // Tracks number of moves made

    void initBoard();
    void displayBoard() const;
    bool getPlayerMove();
    bool checkWin() const;
    bool checkDraw() const;
    void switchPlayer();

public:
    TicTacToe();
    void play();
};

#endif // TICTACTOE_H
