#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"
#include "MoveFactory.h"
#include <string>

class Human: public Player{
    public:
    Human();
    Human(std::string _Name);
    Move * makeMove( );
    std::string getName( );


};

#endif