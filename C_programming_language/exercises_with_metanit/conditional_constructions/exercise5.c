/*

Exercise 5:

Write a program that defines three int variables and outputs 
the variable with the highest value to the console.

Упражнение 5:

Напишите программу, которая определяет три переменных типа int и 
выводит на консоль переменную с наибольшим значением.
*/

#include <stdio.h>

int main(void)
{

    int var1 = 1, var2 = 20, var3 = 3;
    int max;

    printf("var1 = %d, var2 = %d, var3 = %d\n", var1, var2, var3);

    if (var1 > var2 && var1 > var3) {

        max = var1;

    } 
    else if (var2 > var1 && var2 > var3) {

        max = var2;

    }
    else {

        max = var3;

    }

    printf("Max = %d\n", max);

    return 0;
}

//gcc exercise5.c -o exercise5 && ./exercise5