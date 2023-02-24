#include <iostream>
#include "box.h"
#include "checkerboard.h"
#include "cross.h"
#include "lower.h"
#include "upper.h"
#include "trapezoid.h"
#include "checkerboard3x3.h"

int main()
{
    std::cout << "TASK A \n";
    std::cout << "Box: width: 2, height :6 \n"
    << box(2,6) <<std::endl;
    std::cout << "-------------------------\n";

    std::cout << "TASK A \n";
    std::cout << "Box: width: 3, height :8 \n"
    << box(3,8) <<std::endl;
    std::cout << "-------------------------\n";

    std::cout << "TASK B \n";
    std::cout << "Checkerboard: width: 5, height :10 \n"
    << checkerboard(5,10) <<std::endl;
    std::cout << "-------------------------\n";

    std::cout << "TASK B \n";
    std::cout << "Checkerboard: width: 2, height :4 \n"
    << checkerboard(2,4) <<std::endl;
    std::cout << "-------------------------\n";
    std::cout << "TASK C \n";
    std::cout << "Cross size: 5 \n"
    << cross(5) <<std::endl;
    std::cout << "-------------------------\n";
    std::cout << "TASK C \n";
    std::cout << "Cross size: 8 \n"
    << cross(8) <<std::endl;
    std::cout << "-------------------------\n";

     std::cout << "TASK D \n";
    std::cout << "Lower length: 6 \n"
    << lower(6) <<std::endl;
    std::cout << "-------------------------\n";

    std::cout << "TASK D \n";
    std::cout << "Lower length: 10 \n"
    << lower(10) <<std::endl;
    std::cout << "-------------------------\n";
    
    std::cout << "TASK E \n";
    std::cout << "Side length: 10 \n"
    << upper(10) <<std::endl;
    std::cout << "-------------------------\n";

    std::cout << "TASK E \n";
    std::cout << "Side length: 13 \n"
    << upper(13) <<std::endl;
    std::cout << "-------------------------\n";
    
    std::cout << "TASK F \n";
    std::cout << "Width: 6 Length: 3 \n"
    << trapezoid(6,3) <<std::endl;
    std::cout << "-------------------------\n";
    
    std::cout << "TASK F \n";
    std::cout << "Width: 6 Length: 12 \n"
    << trapezoid(6,12) <<std::endl;
    std::cout << "-------------------------\n";

      
    std::cout << "TASK G  \n";
    std::cout << "Width: 3, Length: 6 \n"
    << checkerboard3x3(3,6) <<std::endl;
    std::cout << "-------------------------\n";

    std::cout << "TASK G  \n";
    std::cout << "Width: 9, Length: 6 \n"
    << checkerboard3x3(9,6) <<std::endl;
    std::cout << "-------------------------\n";

}