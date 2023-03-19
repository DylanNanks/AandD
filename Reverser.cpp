#include "Reverser.h"
#include <string>
#include <cmath>

int Reverser::reverseDigit(int value){

    
    if(value < 10){
        return value;
    }

    int temp = value;
    int counter = 0;

    while(temp > 10){
        counter++;
        temp = temp/10;
    }

   return  reverseDigit(value /10) + (value % 10)*pow(10,counter);


}

std::string Reverser::reverseString(std::string characters){


    if(characters.size() < 2){
        return characters;
    }
    return reverseString(characters.erase(0,1)) + characters[0];

}







