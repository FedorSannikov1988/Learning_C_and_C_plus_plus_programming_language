/*
Exercise 1 

Write a program in which two int variables are defined and initialized. 
And their sum is assigned to the third variable of type int. Print the 
value of the third variable (i.e. the sum of the first two variables) to the console.

Упражнение 1

Напишите программу, в которой определяются и инициализируются две переменных 
типа int. И их сумма присваивается третьей переменной типа int. Выведите значение 
третьей переменной (то есть суммы первых двух переменных) на консоль.
*/

#include <stdio.h>

int main(void)
{

    int variableOne = 1;
    int variableTwo = 2;
    int variableThree = variableOne + variableTwo;
    
    printf("%d + %d = %d\n", variableOne, variableTwo, variableThree);

    return 0;
}

//gcc exercise1.c -o exercise1 && ./exercise1
