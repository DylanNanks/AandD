
#include <string>
#include <cmath>
#include <iostream>

int main(){

    int test = 2645000;
    int temp = test;
    int counter = 1;

    while(temp > 10){
        counter++;
        temp = temp/10;
    }

    std::cout << counter << std::endl;

    return 0;
}