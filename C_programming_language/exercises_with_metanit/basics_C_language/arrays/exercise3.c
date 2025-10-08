/*
Exercise 3:
Write a program in which you define an array 
of four numbers - {1, 2, 3, 4}. Double all the 
elements of the array. Print all the array 
elements to the console.

Упражнение 3:
Напишите программу, в которой определите массив из 
четырех чисел - {1, 2, 3, 4}. Увеличьте все элементы 
массива в два раза. Выведите все элементы массива на консоль.
*/

#include <stdio.h>

typedef unsigned int ui;

int main(void)
{
    ui val1[] = {1, 2, 3, 4};

    ui length = sizeof(val1)/sizeof(val1[0]);

    //print before:

    printf("val1= %d\n", val1);
    printf("val1[0]= %d\n", val1[0]);

    printf("val1=[");
    
    for (ui i = 0; i < length; i++) {
        
        printf("%i", val1[i]);
        
        if ( i != (length-1) ) { 
            printf(", "); 
        }
    }

    printf("]\n");
    
    length = sizeof(val1)/sizeof(val1[0]);

    for (ui i = 0; i < length; i++) {

        val1[i] = val1[i] * 2;

        //if (i == 0 || i == length -1) val1[i] = val1[i] * 2;

    }

    //print after:
    //неплохо было бы упаковать 
    //в функцию данный кусок кода:

    printf("val1=[");
    
    for (ui i = 0; i < length; i++) {
        
        printf("%i", val1[i]);
        
        if ( i != (length-1) ) { 
            printf(", "); 
        }
    }

    printf("]\n");
    

    return 0;
}

//gcc exercise3.c -o exercise3 && ./exercise3
