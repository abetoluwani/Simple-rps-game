#include "headers/utils.h"
#include <ctime>
#include <cstdlib>
using namespace std;
#include <vector>
#include <string>

string getRandomChoice() {
     vector< string> choices = {"rock", "paper", "scissors"};
    srand(static_cast<unsigned int>(time(0)));
    int randomIndex = rand() % choices.size();
    return choices[randomIndex];
}

 string determineWinner(const  string& playerChoice, const  string& computerChoice) {
    if (playerChoice == computerChoice) {
        return "It's a tie!";
    }

    if ((playerChoice == "rock" && computerChoice == "scissors") ||
        (playerChoice == "paper" && computerChoice == "rock") ||
        (playerChoice == "scissors" && computerChoice == "paper")) {
        return "You win!";
    } else {
        return "You lose!";
    }
}
