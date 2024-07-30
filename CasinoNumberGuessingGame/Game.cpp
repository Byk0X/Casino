//
// Created by maciejl on 7/13/24.
//

#include "Game.h"


Game::Game(int difficulty ) : difficulty(difficulty), money(100) {

    std::srand(time(0));
    this->randomNumber = generateRandomNumber(1, difficulty * 10);
}


void Game::play() {

    std::string input;
    int guess;
    int stake;


    std::cout << "Let's be a financial irresponsible\n"
                 "Rule number 1: If you run out of money, you out\n"
                 "Rule number 2: If you win, you will gain some money depends on difficulty\n"
                 "Rule number 3: You start with 100$\n"
                 "If you doesn't have balls just leave pressing 'Q'\n";

    while(this->money >= 0) {
        std::cout << "You have " << this->money << "$\n";
        std::cout << "Place your bet: ";

        do {
            std::cin >> input;

            if(input == "Q") {
                std::cout << "Meh\n";
                exit(69);
            }

            stake = std::stoi(input);

            if(stake > money) {
                std::cout << "You don't enough money to place this big stake\n";
                std::cout << "Place your bet: ";
            }

        }while(stake > this->money);

        this->money -= stake;

        std::cout << "Guess the number between 1 and " << difficulty * 10 << ":\n";

        std::cin >> guess;

        if(checkIfCorrectGuess(guess) == true) {
            this->money += stake + stake * difficulty;
            std::cout << "Congratulations you won " <<  stake + stake * difficulty << "$\n";
        }
        else {
            std::cout << "You are mere skibidi toilet the number was " << this->randomNumber << "\n";
            std::cout << "Randomizing new number *brrrrr*\n";
            this->randomNumber =  this->generateRandomNumber(1, this->difficulty * 10);
        }
    }

}

int Game::generateRandomNumber(int lower, int upper) {
    return std::rand() % (upper - lower + 1) + lower;
}

bool Game::checkIfCorrectGuess(int guess) {

    if(guess == randomNumber)
        return true;

    return false;
}

