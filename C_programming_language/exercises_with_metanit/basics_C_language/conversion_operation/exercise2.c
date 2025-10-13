/*
Exercise 2:


Упражнение 2:
*/

#include <stdio.h>

int main(void)
{
    int a = 10;
    int b = 4;

    int c = a / b;                      // 2
    double d = a / b;                   // 2.00000
    double e = (double)a / (double)b;   // 2.50000

    printf("---\n");
    printf("c = %d \n", c);
    printf("d = %f \n", d);
    printf("e = %f \n", e);

    return 0;
}

//gcc exercise2.c -o exercise2 && ./exercise2
