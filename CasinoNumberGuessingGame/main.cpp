#include <iostream>
#include <ctime>
#include <cstdlib>

#include "Game.h"

int main() {


    int difficulty;

    std::cout << "Set difficulty of game (1-easy 2-medium 3-hard): ";
    std::cin >> difficulty;

    Game newGame(difficulty);

    newGame.play();

    return 0;
}
