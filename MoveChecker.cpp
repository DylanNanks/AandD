#include "MoveChecker.h"

int MoveChecker::MoveCheck(Move * num1, Move * num2){
    if(num1 ->getName() == "Rock" && num2 ->getName() == "Rock" ){
        return 0;
    }else if(num1 ->getName() == "Rock" && num2 ->getName() == "Scissors"){
        return 1;
    }else if(num1 ->getName() == "Rock" && num2 ->getName() == "Paper"){
        return 2;
    }else if(num1 ->getName() == "Paper" && num2 ->getName() == "Scissors"){
        return 2;
    }else if(num1 ->getName() == "Paper" && num2 ->getName() == "Paper"){
        return 0; 
    }else if(num1 ->getName() == "Paper" && num2 ->getName() == "Rock"){
        return 1;
    }else if(num1 ->getName() == "Scissors" && num2 ->getName() == "Scissors"){
        return 0;
    }else if(num1 ->getName() == "Scissors" && num2 ->getName() == "Paper"){
        return 1;
    }else if(num1 ->getName() == "Scissors" && num2 ->getName() == "Rock"){
        return 2;
    }else if(num1 ->getName() == "Monkey" && num2 ->getName() == "Monkey"){
        return 0;
    }else if(num1 ->getName() == "Monkey" && num2 ->getName() == "Ninja"){
        return 1;
    }else if(num1 ->getName() == "Monkey" && num2 ->getName() == "Robot"){
        return 1;
    }else if(num1 ->getName() == "Monkey" && num2 ->getName() == "Zombie"){
        return 2;
    }else if(num1 ->getName() == "Monkey" && num2 ->getName() == "Pirate"){
        return 2;
    }else if(num1 ->getName() == "Robot" && num2 ->getName() == "Robot"){
        return 0;
    }else if(num1 ->getName() == "Robot" && num2 ->getName() == "Ninja"){
        return 1;
    }else if(num1 ->getName() == "Robot" && num2 ->getName() == "Zombie"){
        return 1;
    }else if(num1 ->getName() == "Robot" && num2 ->getName() == "Monkey"){
        return 2;
    }else if(num1 ->getName() == "Robot" && num2 ->getName() == "Pirate"){
        return 2;
    }else if(num1 ->getName() == "Pirate" && num2 ->getName() == "Pirate"){
        return 0;
    }else if(num1 ->getName() == "Pirate" && num2 ->getName() == "Robot"){
        return 1;
    }else if(num1 ->getName() == "Pirate" && num2 ->getName() == "Monkey"){
        return 1;
    }else if(num1 ->getName() == "Pirate" && num2 ->getName() == "Zombie"){
        return 2;
    }else if(num1 ->getName() == "Pirate" && num2 ->getName() == "Ninja"){
        return 2;
    }else if(num1 ->getName() == "Ninja" && num2 ->getName() == "Ninja"){
        return 0;
    }else if(num1 ->getName() == "Ninja" && num2 ->getName() == "Zombie"){
        return 1;
    }else if(num1 ->getName() == "Ninja" && num2 ->getName() == "Pirate"){
        return 1;
    }else if(num1 ->getName() == "Ninja" && num2 ->getName() == "Monkey"){
        return 2;
    }else if(num1 ->getName() == "Ninja" && num2 ->getName() == "Robot"){
        return 2;
    }else if(num1 ->getName() == "Zombie" && num2 ->getName() == "Zombie"){
        return 0;
    }else if(num1 ->getName() == "Zombie" && num2 ->getName() == "Pirate"){
        return 1;
    }else if(num1 ->getName() == "Zombie" && num2 ->getName() == "Monkey"){
        return 1;
    }else if(num1 ->getName() == "Zombie" && num2 ->getName() == "Ninja"){
        return 2;
    }else if(num1 ->getName() == "Zombie" && num2 ->getName() == "Robot"){
        return 2;
    }
    
    return 0;
}
