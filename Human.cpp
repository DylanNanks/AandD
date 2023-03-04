#include "Human.h"
#include <string>
#include <iostream>

using namespace std;

Human::Human(){
    Name = "Human";
}

Human::Human(std::string _Name){
    Name = _Name;
}

char Human::makeMove(){
    char moveMade;
    cout << "Enter move: ";
    cin >> moveMade;
    Move = moveMade;


    return moveMade;
}

string Human::getName(){
    return Name;

}