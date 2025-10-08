/*
Exercise 2

Let the program define two variables:

int a = 10;
int b = 4;

Write a program in which you define the third variable,
which is equal to the result of dividing the first variable by the second.

Упражнение 2

Пусть в программе определены две переменных:

int a = 10;
int b = 4;

Напишите программу, в которой определите третью переменную, 
которая равна результату деления перевой переменной на вторую.
*/

#include <stdio.h>

int main(void)
{

    /*
    Вероятно имеется следующее:

    При делении стоит быть внимательным, так как если в операции 
    участвуют два целых числа, то результат деления будет округляться 
    до целого числа, даже если результат присваивается переменной float.
    
    Чтобы результат представлял вещественное число, один из операндов также 
    должен представлять вещественное число.
    */
    int a = 10;
    int b = 4;

    //float c  = a / b ;
    //printf("%d + %d = %1.2f\n", a, b, c);

    int c  = a / b ;
    printf("%d + %d = %d\n", a, b, c);
    
    return 0;
}

//gcc exercise2.c -o exercise2 && ./exercise2
