/*
Exercise 2:
Write a program in which you define a pointer 
to an array of characters (string). Use the 
pointer to print the line to the console.

Упражнение 2:
Напишите программу, в которой определите 
указатель на массив символов (строку). 
Используя указатель, выведите строку на консоль.
*/

#include <stdio.h>

int main(void)
{

    char str1[] = "test1";
    char * pStr1 = str1;

    char * pStr2 = "test2";

    printf("pStr1=%s, Adder pStr1=%p\n", pStr1, pStr1);
    printf("pStr2=%s, Adder pStr2=%p\n", pStr2, pStr2);

    
    return 0;
}

//gcc exercise2.c -o exercise2 && ./exercise2
