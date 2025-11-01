/*
Exercise 1:
Define an enumeration called "color" that represents a color. 
In this enumeration, define three constants: RED, GREEN, and BLUE.

Define the variable of this enumeration in the main function. 
In the switch construction, depending on the value of this variable, 
output the color name to the console.

Упражнение 1:
Определите перечисление, которое называется "color" и которое 
представляет цвет. В этом перечислении определите три константы: 
RED, GREEN и BLUE.

Определите в функции main переменную этого перечисления. В 
конструкции switch в зависимости от значения этой переменной 
выведите на консоль название цвета.
*/
#include <stdio.h>
#include "exercise1.h"

int main(void) {
    /*
    enum color color = RED;
    */
    color color = RED;
    select_color(color);
    return 0;
}

void select_color(color color)
{
    switch(color) {
        case RED:
            printf("RED\n");
            break;
        case GREEN:
            printf("GREEN\n");
            break;
        case BLUE:
            printf("BLUE\n");
            break;
        /*
        default:
            printf("THERE IS NO SUCH COLOR IN THE PALETTE.\n");
            break;
        */
    }
}

//gcc exercise1.c -o exercise1 && ./exercise1
