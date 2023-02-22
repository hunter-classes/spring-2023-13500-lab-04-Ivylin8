#include <iostream>
#include "checkerboard.h"

std::string checkerboard(int width, int height){
    std::string result = "";
    for (int row = 0; row < height; row++){
        for (int col = 0; col < width; col++){
            if ((row + col) % 2 == 0){
                result += "*";
            } else {
                result += " ";
            }
        }
        result += "\n";
    }
    return result;
}
