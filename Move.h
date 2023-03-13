#ifndef MOVE_H
#define MOVE_H

#include <vector>
#include <string>

class Move{
    public:
    std::string MoveName;
    virtual std::string getName();
};


#endif