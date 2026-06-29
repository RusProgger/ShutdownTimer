#include <iostream>
#include "header.hpp"
#include "color.hpp"

void header() {
       std::cout << "ShutdownTimer: ";
        colorInfo(10);
        std::cout << "v1.0001\n";
        colorInfo(7);

        std::cout << "Author: ";
        colorInfo(11);
        std::cout << "Ruslan Voronenko\n\n";
        colorInfo(7);
        std::cout << "-------------------------------------------------\n\n";
        
}
