#ifndef ROBOT_H
#define ROBOT_H

#include "Move.h"
#include <vector>
#include <string>


class Robot: public Move{
    public:
    std::string MoveName = "Robot";
    std::string getName();

    std::vector<std::string> Wins = {"Ninja", "Zombie"};

};

#endif