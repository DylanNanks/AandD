#include "Referee.h"
#include <string>
#include <iostream>
#include <vector>
#include "MoveChecker.h"

using namespace std;

Referee::Referee(){

}

Player * Referee::refGame(Player * player1, Player * player2){

Move * comp1 = player1 -> makeMove();
Move * comp2 = player2 -> makeMove();

MoveChecker * movechecking;
movechecking = new MoveChecker();

if (movechecking -> MoveCheck(comp1,comp2) == 0){
    return NULL;
}else if(movechecking -> MoveCheck(comp1,comp2) == 1){
    return player1;
}else if(movechecking -> MoveCheck(comp1,comp2) == 2){
    return player2;
}
return NULL;



}
