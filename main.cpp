#include "Reverser.h"
#include "Truckloads.h"
#include <iostream>
#include <cmath>
int main(){

    Truckloads t;

    int numCrates = 717;


    std::cout << t.numTrucks(15,5) << std::endl;

 int temp1 = 0;
 int temp2 = 0;

 if(numCrates % 2 == 0){
     temp1 = numCrates/2;
     temp2 = numCrates/2;
 }else{
    temp1 = numCrates/2;
     temp2 = (numCrates/2)+1;


 }

 std::cout << temp1 << std::endl;
 std::cout << temp2 << std::endl;




    return 0;
}