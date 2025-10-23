/*
Exercise 1:

Упражнение 1:
*/

#include <stdio.h>

int sum(int x, int y);
int subtract(int x, int y);
int operation(int (*op)(int, int), int a, int b);

int main(void)
{
    int a = 10;
    int b = 5;
    int result;
    result = operation(sum, a, b);
    printf("result = %d \n", result);
    result = operation(subtract, a, b);
    printf("result = %d \n", result);
    return 0;
}

int sum(int x, int y) {
    return x+y;
}

int subtract(int x, int y) {
    return x-y;
}

int operation(int (*op)(int, int), int a, int b) {
    return op(a, b);
}

//gcc exercise1.c -o exercise1 && ./exercise1
