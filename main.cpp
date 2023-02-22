#include <iostream>
#include "box.h"
#include "checkerboard.h"

int main()
{
    std::cout << "TASK A \n";
    std::cout << "Box width: 4, Box height: 8" <<'\n';
    std::string a=box(4,8);
    std::cout << "-------------------------\n";

    std::cout << "TASK B \n";
    std::cout << "Checkerbaord: width: 5, height :10 \n"
    << checkerboard(5,10) <<std::endl;
    std::cout << "-------------------------\n";


}