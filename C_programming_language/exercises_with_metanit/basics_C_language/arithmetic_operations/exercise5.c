/*
Exercise 5

Write a program in which you define three variables of type int. 
In this case, the third variable is equal to the remainder of the 
division of the first variable by the second.

Упражнение 5

Напишите программу, в которой определите три переменных типа int. 
При этом третья переменная равна остатку от деления первой 
переменной на вторую.
*/

#include <stdio.h>

int main(void)
{

    int a = 10;
    int b = 4;
    int remainderDivision = a % b;
    
    printf("remainderDivision %d / %d = %d\n", a, b, remainderDivision);

    return 0;
}

//gcc exercise5.c -o exercise5 && ./exercise5