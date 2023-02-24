#include <iostream>
#include "upper.h"

std::string upper(int length) {
    std::string result = "";

    for (int row = 0; row < length; row++) {
        for (int i = 0; i < row; i++) {
            result += " ";
        }
        for (int i = 0; i < length - row; i++) {
            result += "*";
        }
        result += "\n";
    }
    return result;
}