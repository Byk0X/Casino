//
// Created by maciejl on 7/13/24.
//

#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <ctime>
#include <vector>
#include <cstdlib>


class Game {

private:
    int difficulty;
    int randomNumber;
    int money;
public:
    Game(int difficulty);
    void play();
    int generateRandomNumber(int lower, int upper);

    bool checkIfCorrectGuess(int guess);

};



#endif //GAME_H
