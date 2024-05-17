#include "headers/game.h"
#include "headers/utils.h"
#include <iostream>
#include <limits>

std::string getRandomChoice();
std::string determineWinner(const std::string&, const std::string&);

void Game::play() {
    std::string playerChoice, computerChoice;
    char playAgain = 'y';

    while (playAgain == 'y') {
        std::cout << "Enter your choice (rock, paper, or scissors): ";
        std::cin >> playerChoice;

        if (!std::cin) {
            std::cerr << "Invalid input. Please enter a valid choice.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        computerChoice = getRandomChoice();
        std::cout << "Computer chose: " << computerChoice << std::endl;

        std::string result = determineWinner(playerChoice, computerChoice);
        std::cout << result << std::endl;

        std::cout << "Do you want to play again? (y/n): ";
        std::cin >> playAgain;

        if (!std::cin) {
            std::cerr << "Invalid input. Please enter a valid choice.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
}

