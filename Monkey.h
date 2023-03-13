#ifndef MONKEY_H
#define MONKEY_H

#include "Move.h"
#include <vector>
#include <string>


class Monkey: public Move{
    public:
    std::string MoveName = "Monkey";
    std::string getName();

    std::vector<std::string> Wins = {"Ninja", "Robot"};
    

};

#endif