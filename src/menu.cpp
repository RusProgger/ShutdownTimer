#include <iostream>
#include "menu.hpp"
#include "color.hpp"


void menu() {
    colorInfo(11);
    std::cout << "\n------------ MENU ------------\n\n";

    std::cout << "1 - Shut down now \n";
    std::cout << "2 - Set shutdown timer\n";
    std::cout << "3 - Exit\n";

    
    colorInfo(7);
}