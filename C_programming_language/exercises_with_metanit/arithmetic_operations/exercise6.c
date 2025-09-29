/*
Exercise 6

Write a program in which you define three float variables. 
The first variable is 10, the second is 3.
And the third is the result of dividing the first variable by the second. 
Print the value of the third variable to the console, and only three 
decimal places should be output to the console.

Упражнение 6

Напишите программу, в которой определите три переменных типа float. 
Первая переменная равна 10, вторая равна 3. 
А третья равна результату деления первой переменной на вторую. 
Выведите на консоль значение третьей переменной, при этом при выводе 
на консоль должно выводиться только три знака после запятой.
*/

#include <stdio.h>

int main(void)
{

    float a = 10;
    float b = 4;
    float c = a / b;

    printf("%.3f / %.3f = %.3f\n", a, b, c);
    
    return 0;
}

//gcc exercise6.c -o exercise6 && ./exercise6