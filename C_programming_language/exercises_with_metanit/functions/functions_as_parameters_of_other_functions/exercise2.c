/*
Exercise 2:

Упражнение 2:
*/

#include <stdio.h>

typedef int (typeToFunc)(int, int);

int sum(int x, int y);
int subtract(int x, int y);
int operation(typeToFunc *, int a, int b);

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

int operation(typeToFunc * func, int a, int b) {
    return func(a, b);
}

//gcc exercise2.c -o exercise2 && ./exercise2
