/*
Exercise 3:
Write a program in which you define an array of 
five numbers {3, 4, 5, 6, 7}. Using pointer arithmetic, 
refer to the third and fourth elements of the array 
and output the value to the console.

Упражнение 3:
Напишите программу, в которой определите массив из пяти 
чисел {3, 4, 5, 6, 7}. Используя арифметику указателей, 
обратитесь к третьему и четвертому элементу массива и 
выведите из значение на консоль.
*/

#include <stdio.h>

int main(void)
{

    int array[] = {3, 4, 5, 6, 7};
    printf("array[2]=%d\n", *(array + 2));
    printf("array[3]=%i\n", *(array + 3));

    return 0;
}

//gcc exercise3.c -o exercise3 && ./exercise3
