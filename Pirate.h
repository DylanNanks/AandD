#ifndef PIRATE_H
#define PIRATE_H

#include "Move.h"
#include <vector>
#include <string>


class Pirate: public Move{
    public:
    std::string MoveName = "Pirate";
    std::string getName();

    std::vector<std::string> Wins = {"Robot", "Monkey"};

};

#endif