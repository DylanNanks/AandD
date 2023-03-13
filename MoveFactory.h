#ifndef MOVEFACTORY_H
#define MOVEFACTORY_H

#include "Move.h"

class MoveFactory{
    public:
    Move * MoveMaker(std::string _move);
    MoveFactory();
};

#endif