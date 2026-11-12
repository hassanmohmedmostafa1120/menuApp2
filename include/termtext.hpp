#pragma once
#include "employee.hpp"

namespace advancedPrint {

enum class Color {
    Black, Red, Green, Yellow, White
};



struct menu
{
    const char *text;
    int x;
    int y;

    int selected ;
};
void moveTo(int row, int col);
void clear();

void setColor(Color c);
void resetColor();
void displayMenu(menu arr[10], int size);
int moveMenuArrow();
void runMenu(menu menuArray[], int size, Employee emp[10], int &empCount);

}