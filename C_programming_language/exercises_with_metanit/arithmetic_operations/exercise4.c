/*
Exercise 4

Two numbers are given:

int a = 10;
int b = 5;

Write a program that outputs their sum and the arithmetic mean.

Упражнение 4

Даны два числа:

int a = 10;
int b = 5;

Напишите программу, которая выводит их сумму и среднее арифметическое.
*/

#include <stdio.h>

int main(void)
{

    int a = 10;
    int b = 4;

    int amount = a + b;
    
    float arithmeticMean = amount / 2.0f;

    printf("Amount %d + %d = %d\n", a, b, amount);

    printf("Arithmetic mean %d + %d / 2 = %2.2f\n", a, b, arithmeticMean);

    return 0;
}

//gcc exercise4.c -o exercise4 && ./exercise4