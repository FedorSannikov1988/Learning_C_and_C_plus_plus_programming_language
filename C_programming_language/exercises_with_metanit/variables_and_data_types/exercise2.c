/*
Exercise 2
Write a program in which you define four variables 
of types char, int, float and double

Упражнение 2
Напишите программу, в которой определите четыре переменных 
типов char, int, float и double
*/

#include <stdio.h>

int main(void)
{

    char charTypeOne = 'A';
    char charTypeTwo = 65;

    printf("charTypeOne i: %i \n", charTypeOne);
    printf("charTypeOne d: %d \n", charTypeOne);
    printf("charTypeOne c: %c \n", charTypeOne);

    int intTypeOne = 1;
    int intTypeTwo = 2;

    printf("intTypeOne i: %i \n", intTypeOne);
    printf("intTypeOne d: %d \n", intTypeTwo);

    float floatType = 1.11f;
    
    printf("floatType 1.3f %1.3f\n", floatType);

    double doubleType = 1.11;
    
    printf("doubleType 1.2f %1.2f\n", doubleType);

    return 0;
}

//gcc exercise2.c -o exercise2 && ./exercise2
