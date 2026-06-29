#include "color.hpp"
#include <windows.h>

void colorInfo(int colorInfo) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorInfo);
}