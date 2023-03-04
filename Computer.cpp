#include "Computer.h"
#include <string>
#include <iostream>

using namespace std;

Computer::Computer(){
    Name = "Computer";
    Move = 'R';
}


char Computer::makeMove(){

    char moveMade;
    cout << "Enter move:";
    cin >> moveMade;
    Move = moveMade;


    return moveMade;
}

string Computer::getName(){
    return Name;

}