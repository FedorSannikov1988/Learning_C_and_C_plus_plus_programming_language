/*
Exercise 4:
Write a program that dynamically allocates memory 
for an array. In this case, the length of the array is 
unknown and is entered during the execution of the program 
by the user, and the values of all elements of the array are 
also entered by the user.

Упражнение 4:
Напишите программу, которая динамически выделяет память для массива. 
При этом длина массива неизвестна и вводится во время выполнения 
программы пользователем, и также значения всех элементов массива 
также вводятся пользователем.
*/
#include <stdio.h>
#include <stdlib.h>
#include "exercise4.h"


int main(void) {

    printf("Size array: ");
    int size = input_data();
    long *lptr = malloc(size * sizeof(*lptr));

    if(lptr != NULL) {

        //input
        for(int i = 0; i < size; i++) {

            printf("n#%d= ", i+1);
            *(lptr + i) = input_data();
        }

        //print
        for(int i = 0; i < size; i++) {
            printf("%d \t", *(lptr + i));
        }
        printf("\n");

        free(lptr);
    }
    

    return 0;
}

int input_data(void) {

    int n;
    char buff_for_read[10];

    if (fgets(buff_for_read, 10, stdin) != NULL) {
        sscanf(buff_for_read, "%d", &n);
    } else {
        printf("Fatal Error!\n");
    }
    return n;
}

//gcc exercise4.c -o exercise4 && ./exercise4
