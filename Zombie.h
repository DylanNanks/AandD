#ifndef ZOMBIE_H
#define ZOMBIE_H

#include "Move.h"
#include <vector>
#include <string>


class Zombie: public Move{
    public:
    std::string MoveName = "Zombie";
    std::string getName();

    std::vector<std::string> Wins = {"Pirate", "Monkey"};

};

#endif