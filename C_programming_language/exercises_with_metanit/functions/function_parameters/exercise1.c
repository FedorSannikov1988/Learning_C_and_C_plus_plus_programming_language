/*
Exercise 1:
Define a function that takes one int parameter, 
increases its value by 5, and outputs it to the console.

Упражнение 1:
Определите функцию, которая принимает один параметр типа int, 
увеличивает его значение на 5 и выводит его на консоль.
*/

#include <stdio.h>

void increment(int var);

int main(void) {

    int x = 5;

    printf("before x=%d\n",x);
    
    increment(x);

    printf("after x=%d\n",x);
    
    return 0;
}

void increment(int var) {
    var = var + 5;
    printf("var=%d\n", var);
}

//gcc exercise1.c -o exercise1 && ./exercise1
