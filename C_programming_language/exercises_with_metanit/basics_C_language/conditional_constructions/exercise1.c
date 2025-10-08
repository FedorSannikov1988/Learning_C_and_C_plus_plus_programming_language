/*

Exercise 1:

Write a program that checks whether two 
variables are equal. If they are equal, it outputs 
"equal", and if they are not equal, it outputs "not equal".

Упражнение 1:

Напишите программу, которая проверят, 
равны ли две переменных. Если они равно, 
то выводит "equal", а если не равны, то выводит "not equal".

*/

#include <stdio.h>

int main(void)
{

    float var1 = 1.1f;
    float var2 = 1.0f;

    if(var1 == var2) printf("equal\n");
    if(var1 != var2) printf("not equal\n");

    // или

    if(var1 == var2) {

        printf("equal\n");

    } else {

        printf("not equal\n");

    }

    return 0;
}

//gcc exercise1.c -o exercise1 && ./exercise1
