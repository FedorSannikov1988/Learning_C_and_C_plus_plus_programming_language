/*
Exercise 2:
Write a program that uses a for loop to output 
all the odd numbers from 11 to 20 in one line.

Упражнение 2:
Напишите программу, которая с помощью цикла for 
выводит в одну строку все нечетные числа от 11 до 20.
*/

#include <stdio.h>

typedef unsigned int ui;

int main(void)
{

    ui stop = 20;

    for (ui i = 11; i <= stop; i++) {

        if (i % 2 != 0) {
            printf("%d \t", i);
        }

    }

    printf("\n");

    return 0;

}

//gcc exercise2.c -o exercise2 && ./exercise2
