#include <iostream>
#include "checkerboard3x3.h"

std::string checkerboard3x3(int width, int height)
{
    std::string result = "";
       for (int row = 0; row < height; row++){
        for (int col = 0; col <width; col++){
            if ((row / 3)%2 == 0){
                result += "*";
            } else{
                result += " ";
            }
            
            if((col /3)%2 == 0 ){
                result += "*";
            } else {
                result += " ";
            }
        }
        result += "\n";
    }
    
    return result;
}