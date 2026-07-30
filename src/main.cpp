#include <iostream>
#include "color.hpp"
#include "header.hpp"
#include "menu.hpp"

int main() {

    header();
    menu();

    int choice;

    switch(choice) {
        case 1:
            colorInfo(12);
            std::cout << "Shutdown PC...\n";
            colorInfo(7);
            break;
        case 2:
            colorInfo(12);
            std::cout << "Set shutdown timer: \n";
            colorInfo(7);
            break;
        case 3:
            colorInfo(12);
            std::cout << "e: \n";
            colorInfo(7);
            break;    
    }
    

    // pause 
    std::cin.get();
    return 0;
}