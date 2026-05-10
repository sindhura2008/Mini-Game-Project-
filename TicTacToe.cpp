#include "TicTacToe.h"
#include <iostream>
#include <limits>

// Constructor: Initialize game state
TicTacToe::TicTacToe() {
    currentPlayer = 'X';
    moveCount = 0;
    initBoard();
}

// Initialize the board with numbers 1-9 as position guides
void TicTacToe::initBoard() {
    char num = '1';
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = num++;
        }
    }
}

// Display the current board state
void TicTacToe::displayBoard() const {
    std::cout << "\n";
    std::cout << "  +---+---+---+" << std::endl;
    for (int i = 0; i < 3; i++) {
        std::cout << "  | ";
        for (int j = 0; j < 3; j++) {
            std::cout << board[i][j] << " | ";
        }
        std::cout << std::endl;
        std::cout << "  +---+---+---+" << std::endl;
    }
    std::cout << std::endl;
}

// Get and validate player move; returns true if move is valid
bool TicTacToe::getPlayerMove() {
    int position;
    std::cout << "Player " << currentPlayer << ", enter your move (1-9): ";

    // Input validation: check if input is a number
    if (!(std::cin >> position)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid input! Please enter a number between 1 and 9." << std::endl;
        return false;
    }

    // Range check
    if (position < 1 || position > 9) {
        std::cout << "Invalid move! Choose a number between 1 and 9." << std::endl;
        return false;
    }

    // Convert position (1-9) to array indices
    int row = (position - 1) / 3;
    int col = (position - 1) % 3;

    // Check if cell is already taken
    if (board[row][col] == 'X' || board[row][col] == 'O') {
        std::cout << "That cell is already taken! Choose another." << std::endl;
        return false;
    }

    // Place player's mark on the board
    board[row][col] = currentPlayer;
    moveCount++;
    return true;
}

// Check if the current player has won
bool TicTacToe::checkWin() const {
    // Check rows
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == currentPlayer &&
            board[i][1] == currentPlayer &&
            board[i][2] == currentPlayer) {
            return true;
        }
    }

    // Check columns
    for (int j = 0; j < 3; j++) {
        if (board[0][j] == currentPlayer &&
            board[1][j] == currentPlayer &&
            board[2][j] == currentPlayer) {
            return true;
        }
    }

    // Check main diagonal (top-left to bottom-right)
    if (board[0][0] == currentPlayer &&
        board[1][1] == currentPlayer &&
        board[2][2] == currentPlayer) {
        return true;
    }

    // Check anti-diagonal (top-right to bottom-left)
    if (board[0][2] == currentPlayer &&
        board[1][1] == currentPlayer &&
        board[2][0] == currentPlayer) {
        return true;
    }

    return false;
}

// Check if the game is a draw (all 9 cells filled, no winner)
bool TicTacToe::checkDraw() const {
    return moveCount == 9;
}

// Switch current player from X to O or O to X
void TicTacToe::switchPlayer() {
    currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
}

// Main game loop
void TicTacToe::play() {
    std::cout << "\nGame Start! X goes first." << std::endl;
    std::cout << "Use the number pad positions below to make your move:\n";
    std::cout << "  +---+---+---+" << std::endl;
    std::cout << "  | 1 | 2 | 3 |" << std::endl;
    std::cout << "  +---+---+---+" << std::endl;
    std::cout << "  | 4 | 5 | 6 |" << std::endl;
    std::cout << "  +---+---+---+" << std::endl;
    std::cout << "  | 7 | 8 | 9 |" << std::endl;
    std::cout << "  +---+---+---+" << std::endl;

    while (true) {
        displayBoard();

        // Keep asking until a valid move is made
        while (!getPlayerMove()) {
            // Retry on invalid input
        }

        // Check for win condition
        if (checkWin()) {
            displayBoard();
            std::cout << "🎉 Congratulations! Player " << currentPlayer << " wins!" << std::endl;
            break;
        }

        // Check for draw condition
        if (checkDraw()) {
            displayBoard();
            std::cout << "It's a draw! Well played by both!" << std::endl;
            break;
        }

        // Switch to the other player
        switchPlayer();
    }
}
