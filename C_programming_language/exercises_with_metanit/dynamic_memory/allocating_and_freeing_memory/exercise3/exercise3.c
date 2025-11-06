/*
Exercise 3:
Write a program that dynamically allocates memory 
for an array of three long numbers. Using the for loop, 
assign values to the array elements and output them to the console.

Then use the realloc() function to increase the allocated memory 
to 5 long elements. Set the values for the new two long elements 
and output them to the console. After that, free up the memory.

Упражнение 3:
Напишите программу, которая динамически выделяет память для массива 
из трех чисел типа long. Используя цикл for, присвойте значения элементами 
массива и выведите их на консоль.

Затем с помощью функции realloc() увеличьте выделенную память до 
5 элементов типа long. Установите значения для новых двух элементов 
long и выведите их на консоль. После этого освободите память.
*/
#include <stdio.h>
#include <stdlib.h>
#include "exercise3.h"

int main(void) {

    int size = 3;
    long *lptr = malloc(size * sizeof(*lptr));

    if(lptr != NULL) {

        for(int i = 0; i < size; i++) {
            /*
            lptr[i] = i + 1;
            printf("%ld \t", lptr[i]);
            */
            
            *(lptr + i) = i + 1;
            printf("%ld \t", *(lptr + i));

        }
        printf("\n");

    }

    int new_size = 5;
    lptr = realloc(lptr, (new_size * sizeof(long)));

    if(lptr != NULL) {

        for(int i = 0; i < new_size; i++) {

            *(lptr + i) = i + 1;
            printf("%ld \t", *(lptr + i));
        
        }
        printf("\n");

    }

    if(lptr != NULL) {
        free(lptr);
    }
    
    

    return 0;
}

//gcc exercise3.c -o exercise3 && ./exercise3
