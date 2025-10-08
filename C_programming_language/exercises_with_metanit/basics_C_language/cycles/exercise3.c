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
    ui n = 9;

    for( ui row = 0; row < n; row++ ) {

        for( ui column = 0; column < n; column ++ ) {

            if( column == row || column == n - row - 1 ) {

                printf("*");

            } else {

                printf(" ");

            }

        }

        printf("\n");
    
    }

    return 0;

}

//gcc exercise3.c -o exercise3 && ./exercise3
