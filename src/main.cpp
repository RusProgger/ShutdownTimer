#include <iostream>
#include "color.hpp"
#include "header.hpp"
#include "menu.hpp"

int main() {

    header();
    menu();

    int choice;

    if(choice == 1) {
        system("shutdown /s /t 0");
    } else if (choice == 0) {
        std::cout << "Exit...\n";
        return 0;
    }
    

    // pause 
    std::cin.get();
    return 0;
}