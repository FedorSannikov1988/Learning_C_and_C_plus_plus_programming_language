/*
Exercise 3:

Write a program that outputs the 
following to the console:

*     *
 *   * 
  * *  
   *   
  * *  
 *   * 
*     *

Упражнение 3:

Напишите программу, которая выводит 
на консоль следующее:

*     *
 *   * 
  * *  
   *   
  * *  
 *   * 
*     *
*/

#include <stdio.h>

typedef unsigned int ui;

int main(void)
{

    ui stop = 20;

    for (ui i = 11; i <= stop; i++) {

        if (i % 2 != 0) {
            printf("%d \t", i);
        }

    }

    printf("\n");

    return 0;

}

//gcc exercise3.c -o exercise3 && ./exercise3
