/*
Exercise 2:
Write a function that takes two numbers as a 
parameter and changes their values.

Упражнение 2:
Напишите функцию, которая в качестве параметра 
принимает два числа и меняет их значения.
*/

#include <stdio.h>


void swap(int *, int *);

int main(void) {

    int num1 = 10;
    int num2 = 20;
    
    printf("After swap num1=%d, num2=%d\n", num1, num2);

    swap(&num1, &num2);

    printf("Before swap num1=%d, num2=%d\n", num1, num2);

    return 0;
}

void swap(int * num1, int * num2) {

    int buff = * num1;
    * num1 = * num2;
    * num2 = buff;
}

//gcc exercise2.c -o exercise2 && ./exercise2
