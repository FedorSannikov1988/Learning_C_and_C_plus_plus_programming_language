/*
Exercise 1:
Write a program that uses for and while loops to 
output the string "Hello Work" five times to the 
console.

Упражнение 1:
Напишите программу, которая c помощью циклов 
for и while выводит на консоль пять раз строку 
"Hello Work".
*/

#include <stdio.h>

int main(void)
{
    printf("for:\n");

    typedef unsigned int ui;

    //unsigned int stop = 5;
    
    ui stop = 5;

    for (ui i = 1; i <= stop; i++) {

    //size_t stop = 5;

    //for (size_t i = 1; i <= stop; i++) {

        printf("N%i Hello Work\n", i);

    }

    printf("---\n");

    printf("while:\n");

    unsigned int count = 1;

    while ( count <= stop ) {

        printf("N%i Hello Work\n", count);

        count ++;
    }

    printf("---\n");
    
    return 0;
}

//gcc exercise1.c -o exercise1 && ./exercise1
