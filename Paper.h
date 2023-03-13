#ifndef PAPER_H
#define PAPER_H

#include "Move.h"
#include <vector>
#include <string>


class Paper: public Move{
    public:
    std::string MoveName = "Paper";
    std::string getName();

    std::vector<std::string> Wins = {"Rock"};

};

#endif