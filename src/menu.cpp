#include <iostream>
#include "menu.hpp"
#include "color.hpp"


void menu() {
    colorInfo(10);
    std::cout << "\n------------ MENU ------------\n\n";

    std::cout << "1 - Shut down now \n";
    std::cout << "2 - Set shutdown timer\n";
    std::cout << "3 - Exit\n\n";

    std::cout << "Enter your choice: ";

    colorInfo(7);
}