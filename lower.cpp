#include <iostream>
#include "lower.h"


std::string lower(int length) {
    std::string result = "";
    for (int row = 1; row <= length; row++) {  
        for (int col = 1; col <= row; col++) { 
            std::cout << "*"; 
        }
        std::cout << "\n"; 
}
result += "\n";
return result;
}
