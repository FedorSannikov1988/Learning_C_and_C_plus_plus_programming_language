/*
Exercise 1:
Write a program in which you define an array 
of type int. Use the pointer to output the 
\array elements to the console.

Упражнение 1:
Напишите программу, в которой определите массив 
типа int. Используйте указатель для вывода 
элементов массива на консоль.
*/

#include <stdio.h>

typedef unsigned int ui;

int main(void)
{

    int array[] = {1, 2, 3, 4, 5};

    int * pArray = array;

    ui size = sizeof(array) / sizeof(*pArray);

    printf("size = %d\n", size);

    for (ui i = 0; i < size; i++) {

        printf("*(array + i) = %d \n", * (array + i));
        printf("array[i] = %d \n", array[i]);

    }
    
    return 0;
}

//gcc exercise1.c -o exercise1 && ./exercise1
