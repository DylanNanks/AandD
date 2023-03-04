#include "Referee.h"
#include <string>
#include <iostream>

using namespace std;

Referee::Referee(){

}

Player * Referee::refGame(Player * player1, Player * player2){

    if(player1 -> Move == 'R' && player2 -> Move == 'S'){
        return player1;
    }else if(player1 -> Move == 'R' && player2 -> Move == 'P'){
        return player2;
    }else if(player1 -> Move == 'R' && player2 -> Move == 'R'){
        return NULL;
    }else if(player1 -> Move == 'P' && player2 -> Move == 'R'){
        return player1;
    }else if(player1 -> Move == 'P' && player2 -> Move == 'S'){
        return player2;
    }else if(player1 -> Move == 'P' && player2 -> Move == 'P'){
        return NULL;
    }else if(player1 -> Move == 'S' && player2 -> Move == 'P'){
        return player1;
    }else if(player1 -> Move == 'S' && player2 -> Move == 'R'){
        return player2;
    }else if(player1 -> Move == 'S' && player2 -> Move == 'S'){
        return NULL;

    }

    return NULL;
}
