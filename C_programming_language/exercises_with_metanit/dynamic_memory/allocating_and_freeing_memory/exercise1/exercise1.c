/*
Exercise 1:
Write a program that allocates memory for one double 
object using the size of the type, and for one long 
object using the size of the pointer. Place the values 
in the allocated memory areas and output these values 
to the console. After that, free up the allocated memory.

Упражнение 1:
Напишите программу, которая выделяет память для одного 
объекта double, используя размер типа, и для одного объекта 
long, используя размер указателя. Поместите значения в выделенные 
участки памяти и выведите эти значения на консоль. После 
этого освободите выделенную память.
*/
#include <stdio.h>
#include <stdlib.h>
#include "exercise1.h"

int main(void) {

    // выделяем память для типа double
    void *vptr = malloc(sizeof(double));
    double *dptr = (double*) vptr;

    if(dptr != NULL) {
        *dptr = 13.14;
        printf("%.2f\n", *dptr);
    }
    free(dptr);

    // выделяем память для типа long с помощью указателя
    long *lptr = malloc(sizeof(*lptr));

    if(lptr != NULL) {
        *lptr = 1000;
        printf("%ld\n", *lptr);
    }
    free(lptr);

    return 0;
}

//gcc exercise1.c -o exercise1 && ./exercise1
