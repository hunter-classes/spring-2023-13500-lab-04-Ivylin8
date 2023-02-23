#include <iostream>
#include "box.h"
#include "checkerboard.h"
#include "cross.h"
#include "lower.h"
#include "upper.h"
#include "trapezoid.h"
#include "checkerboard3x3"

int main()
{
    std::cout << "TASK A \n";
    std::cout << "Box width: 4, Box height: 8" <<'\n';
    std::string a=box(4,8);
    std::cout << "-------------------------\n";

    std::cout << "TASK B \n";
    std::cout << "Checkerboard: width: 5, height :10 \n"
    << checkerboard(5,10) <<std::endl;
    std::cout << "-------------------------\n";

    std::cout << "TASK C \n";
    std::cout << "Cross size: 5 \n"
    << cross(5) <<std::endl;
    std::cout << "-------------------------\n";

     std::cout << "TASK D \n";
    std::cout << "Lower length: 6 \n"
    << lower(6) <<std::endl;
    std::cout << "-------------------------\n";
    
    std::cout << "TASK E \n";
    std::cout << "Side length: 10 \n"
    << upper(10) <<std::endl;
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
    

}