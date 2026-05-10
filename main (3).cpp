#include "TicTacToe.h"
#include <iostream>
#include <limits>

int main() {
    std::cout << "==============================" << std::endl;
    std::cout << "   Welcome to Tic Tac Toe!   " << std::endl;
    std::cout << "==============================" << std::endl;

    char playAgain = 'y';

    while (playAgain == 'y' || playAgain == 'Y') {
        TicTacToe game;
        game.play();

        std::cout << "\nDo you want to play again? (y/n): ";
        std::cin >> playAgain;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << std::endl;
    }

    std::cout << "Thanks for playing! Goodbye!" << std::endl;
    return 0;
}
