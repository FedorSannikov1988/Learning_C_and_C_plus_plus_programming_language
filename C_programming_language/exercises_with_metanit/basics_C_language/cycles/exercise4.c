/*
Exercise 4:

Write a program that outputs the 
following to the console:

*******
 *   * 
  * *  
   *   
  * *  
 *   * 
*******

Упражнение 4:

Напишите программу, которая выводит 
на консоль следующее:

*******
 *   * 
  * *  
   *   
  * *  
 *   * 
*******
*/

#include <stdio.h>

typedef unsigned int ui;

int main(void)
{
    ui n = 9;

    for( ui row = 0; row < n; row++ ) {

        for( ui column = 0; column < n; column ++ ) {
            
            //if( row == 0 || row == n - 1 || column == row || column == n - row - 1 ) {

            if( column == 0 || column == n - 1 || column == row || column == n - row - 1 ) {

                printf("*");

            } else {

                printf(" ");

            }

        }

        printf("\n");
    
    }

    return 0;

}

//gcc exercise4.c -o exercise4 && ./exercise4
