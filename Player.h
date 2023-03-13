#include <string>
#include "Move.h"


#ifndef PLAYER_H
#define PLAYER_H

class Player{
    public:
    std::string Name;
    char _Move;
virtual Move * makeMove( ) = 0;
virtual std::string getName( ) = 0;

};

#endif