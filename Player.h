#include <string>

#ifndef PLAYER_H
#define PLAYER_H

class Player{
    public:
    std::string Name;
    char Move;
virtual char makeMove( ) = 0;
virtual std::string getName( ) = 0;

};

#endif