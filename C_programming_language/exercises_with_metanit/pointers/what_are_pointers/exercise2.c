/*
Exercise 2:
Write a program in which you define a variable of type 
int and a pointer that points to this variable. Use the 
pointer to change the value of this variable and display 
the value of the variable before and after the change on 
the console.

Упражнение 2:
Напишите программу, в которой определите переменную типа int 
и указатель, который указывает на эту переменную. Используя 
указатель, измените значение этой переменной и выведите на 
консоль значение переменной до и после изменения.
*/

#include <stdio.h>

int main(void)
{
    
    int var1;
    int * pVar1;
    
    var1 = 15;
    pVar1 = &var1;

    printf("Before:\n");
    printf("Value * pVar1 = %d \n",  *pVar1);
    printf("Pointer pVar1 = %p \n", (void*) pVar1);

    * pVar1 = 20;

    printf("After:\n");
    printf("Value * pVar1 = %d \n",  *pVar1);
    printf("Pointer pVar1 = %p \n", (void*) pVar1);

    return 0;
}

//gcc exercise2.c -o exercise2 && ./exercise2
