/*
Exercise 2:
Define a function that accepts a single int parameter and outputs 
its doubled value to the console. In this case, the parameter must 
be constant so that its value cannot be changed in the function.

Упражнение 2:
Определите функцию, которая принимает один параметр типа int 
и выводит на консоль его удвоенное значение. При этом параметр 
должен быть константным, чтобы его значение нельзя было 
изменить в функции.
*/

#include <stdio.h>

void increment(const int var);

int main(void) {

    int x = 5;

    printf("before increment x=%d\n",x);
    
    increment(x);

    printf("after increment x=%d\n",x);
    
    return 0;
}

void increment(const int var) {
    int newVar = var * 2;
    printf("increment:\n");
    printf("newVar=%d\n", newVar);
}

//gcc exercise2.c -o exercise2 && ./exercise2
