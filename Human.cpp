#include "Human.h"
#include "MoveFactory.h"
#include "Move.h"
#include <string>
#include <iostream>

using namespace std;

Human::Human(){
    Name = "Human";
}

Human::Human(std::string _Name){
    Name = _Name;
}

Move * Human::makeMove(){
    string moveMade;
    cout << "Enter move: ";
    cin >> moveMade;

    MoveFactory* movefac1 = new MoveFactory();

    return movefac1 -> MoveMaker(moveMade);
}

string Human::getName(){
    return Name;

}