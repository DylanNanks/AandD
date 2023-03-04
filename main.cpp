#include <iostream>
#include "Player.h"
#include "Human.h"
#include "Computer.h"
#include "Referee.h"

int main(){
    Player *Human1;

    Player* Computer1;

    Player* Human2;

    Referee * Referee1;

    Referee1 = new Referee();

    Human2 = new Human();

    Human1 = new Human();
    Computer1 = new Computer();

    std::cout << Human1 -> getName() << std::endl;

    std::cout << Human2 -> makeMove() << std::endl;

    std::cout << Referee1 -> refGame(Human2, Computer1) << std::endl;



    




}