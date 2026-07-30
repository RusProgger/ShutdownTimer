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
        
        colorInfo(11);
        std::cout << "A lightweight C++ console application that automatically shuts down the computer after a specified time. \nThe program starts a countdown and executes the system shutdown command when the timer expires. It is fast, simple, and easy to use.\n\n";
        colorInfo(7);
}
