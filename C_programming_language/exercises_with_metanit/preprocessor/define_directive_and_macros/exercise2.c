/*
Exercise 2:
Define a macro that accepts two numbers and returns 
the maximum of these numbers. Use a macro in the program.

Упражнение 2:
Определите макрос, который принимает два числа и возвращает 
максимальное из этих чисел. Используйте макрос в программе.
*/
#include <stdio.h>
#define max(var1, var2) var1>var2?var1:var2

int main(void) {

    int x1 = 5;
    int x2 = 3;
    printf("max: %d\n", max(x1,x2));
    return 0;
}

//gcc exercise2.c -o exercise2 && ./exercise2