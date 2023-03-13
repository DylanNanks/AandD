#ifndef NINJA_H
#define NINJA_H

#include "Move.h"
#include <vector>
#include <string>


class Ninja: public Move{
    public:
    std::string MoveName = "Ninja";
    std::string getName();

    std::vector<std::string> Wins = {"Pirate", "Zombie"};

};

#endif