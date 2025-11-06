/*
Exercise 2:
Write a program that dynamically allocates memory for an 
array of five long numbers. Using the for loop, assign values 
to the array elements and output them to the console. After that, 
free up the memory.

Упражнение 2:
Напишите программу, которая динамически выделяет память для массива 
из пяти чисел типа long. Используя цикл for, присвойте значения 
элементами массива и выведите их на консоль. После этого освободите память.
*/
#include <stdio.h>
#include <stdlib.h>
#include "exercise2.h"

int main(void) {

    int n = 5;
    long *lptr = malloc(n *sizeof(*lptr));

    if(lptr != NULL) {

        for(int i = 0; i < n; i++) {
            /*
            lptr[i] = i + 1;
            printf("%ld \t", lptr[i]);
            */
            
            *(lptr + i) = i + 1;
            printf("%ld \t", *(lptr + i));

        }
        printf("\n");

    }
    free(lptr);

    return 0;
}

//gcc exercise2.c -o exercise2 && ./exercise2
