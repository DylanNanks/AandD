#include "Truckloads.h"
#include <string>
#include <cmath>

int Truckloads::numTrucks(int numCrates, int loadSize){

 int counter = 1;
 int temp1 = 0;
 int temp2 = 0;

 if(numCrates % 2 == 0){
     temp1 = numCrates/2;
     temp2 = numCrates/2;
 }else{
    temp1 = numCrates/2;
     temp2 = (numCrates/2)+1;
 }
 
 if(numCrates <= loadSize){
        return 1;
    }


return  numTrucks(temp1,loadSize) + numTrucks(temp2,loadSize) ;

}