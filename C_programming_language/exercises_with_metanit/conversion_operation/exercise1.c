/*
Exercise 1:
How to convert/cast from one type to another.

Упражнение 1:
Как преобразовывать/кастовать из одного типа в другой.
*/

#include <stdio.h>

int main(void)
{
    int number = 70;
    char symbol = (char) number;

    printf("------\n");
    printf("number = %i \n", number);
    printf("symbol = %c \n", symbol);
    printf("symbol (int code) = %d \n", symbol);
    
    return 0;
}

//gcc exercise2.c -o exercise2 && ./exercise2
