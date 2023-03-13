#ifndef SCISSORS_H
#define SCISSORS_H

#include "Move.h"
#include <vector>
#include <string>


class Scissors: public Move{
    public:
    std::string MoveName = "Scissors";
    std::string getName();

    std::vector<std::string> Wins = {"Paper"};

};

#endif