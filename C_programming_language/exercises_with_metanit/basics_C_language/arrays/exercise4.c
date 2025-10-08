/*
Exercise 4:
Write a program in which you define the following 
array of five numbers - {1, 2, 3, 4, 5}. Invert the 
array (so that the elements in the array are arranged 
in the opposite order - {5, 4, 3, 2, 1}).

Упражнение 4:
Напишите программу, в которой определите следующий массив 
из пяти чисел - {1, 2, 3, 4, 5}. Инвертируйте массив (чтобы 
в массиве элементы расположились в обраном порядке - 
{5, 4, 3, 2, 1}).
*/

#include <stdio.h>

typedef unsigned int ui;

int main(void)
{
    ui val1[] = {1, 2, 3, 4, 5, 6};

    ui length = sizeof(val1)/sizeof(val1[0]);
    ui halfLength = length / 2;

    //print before:

    printf("val1=[");
    
    for (ui i = 0; i < length; i++) {
        
        printf("%i", val1[i]);
        
        if ( i != (length-1) ) { 
            printf(", "); 
        }
    }

    printf("]\n");
    ui buff;

    for (ui i = 0; i < halfLength; i++) {

        buff = val1[i];

        ui left_border = length - i - 1;

        val1[i] = val1[ left_border ];

        val1[left_border] = buff;

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

//gcc exercise4.c -o exercise4 && ./exercise4
