#ifndef ROCK_H
#define ROCK_H

#include "Move.h"
#include <vector>
#include <string>


class Rock: public Move{
    public:
    std::string MoveName = "Rock";
    std::string getName();

    std::vector<std::string> Wins = {"Scissors"};
    

};

#endif