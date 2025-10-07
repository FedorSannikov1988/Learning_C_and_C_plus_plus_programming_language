/*
Exercise 4:
Write a program in which the height and width 
of a rectangle are entered from the console, 
and its area is output.

Упражнение 4:
Напишите программу, в которой с консоли вводятся 
высота и ширина прямоугольника, а выводится его 
площадь.
*/

#include <stdio.h>

int main(void)
{
    double sideRectangle1;
    double sideRectangle2;
    double square;

    printf("Enter side rectangle one: ");
    scanf("%lf", &sideRectangle1);

    printf("Enter side rectangle two: ");
    scanf("%lf", &sideRectangle2);

    square = sideRectangle1 * sideRectangle2;
    printf("square=%.3lf \n", square);

    return 0;
}

//gcc exercise4.c -o exercise4 && ./exercise4
