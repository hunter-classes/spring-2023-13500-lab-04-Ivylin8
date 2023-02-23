#include <iostream>
#include "trapezoid.h"

std::string trapezoid(int width, int height)
{
    if (height > width/2) {
        return "Impossible shape!\n";
    } else {
        std::string result;
        for (int i = height; i > 0; i--) {
            for (int j = 0; j < width; j++) {
                if (j < i - 1 || j > width - i) {
                    result += " ";
                } else {
                    result += "*";
                }
            }
            result += "\n";
        }
        return result;
    }
}