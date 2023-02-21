#include <iostream>
#include "box.h"

std::string box(int width, int height)
{
    std::string result = "";
        for (int row = 0; row < height; row++) {
            for (int col = 0; col < width; col++) {
                std::cout << "*";
    }
    std::cout << std::endl;
}
    
}
