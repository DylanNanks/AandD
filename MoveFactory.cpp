#include "MoveFactory.h"
#include "Rock.h"
#include "Scissors.h"
#include "Paper.h"
#include "Monkey.h"
#include "Zombie.h"
#include "Pirate.h"
#include "Ninja.h"
#include "Robot.h"

Move * MoveFactory::MoveMaker(std::string _move){
    std::string move = _move;
    Move * classMade;
    if(move == "Rock"){
        classMade = new Rock();
        return classMade;

    }else if(move == "Scissors"){
        classMade = new Scissors();
        return classMade;
    }else if(move == "Monkey"){
        classMade = new Monkey();
        return classMade;
    }else if(move == "Robot"){
        classMade = new Robot();
        return classMade;
    }else if(move == "Ninja"){
        classMade = new Ninja();
        return classMade;
    }else if(move == "Pirate"){
        classMade = new Pirate();
        return classMade;
    }else if(move == "Zombie"){
        classMade = new Zombie();
        return classMade;
    }else if(move == "Paper"){
        classMade = new Paper();
        return classMade;
    }
    return NULL;

}

MoveFactory::MoveFactory(){

}