#include <iostream>
#include "Player.h"
#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include "MoveFactory.h"

int main(){
    Player *Human1;

    Player *Human2;

    Referee * Referee1;

    Referee1 = new Referee();

    Human2 = new Human();

    Human1 = new Human();


    std::cout << Referee1 -> refGame(Human1, Human2) << std::endl;



    




}