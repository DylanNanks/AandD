#include "Computer.h"
#include <string>
#include <iostream>
#include "MoveFactory.h"

using namespace std;

Computer::Computer(){
    Name = "Computer";
}


Move * Computer::makeMove(){

    string moveMade = "Rock";

    MoveFactory* movefac1 = new MoveFactory();

    return movefac1 -> MoveMaker(moveMade);
}

string Computer::getName(){
    return Name;

}