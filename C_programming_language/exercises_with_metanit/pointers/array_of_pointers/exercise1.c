/*
Exercise 1:
Define an array of pointers that contains the 
following three elements: {"Tom", "Bob", "Sam"}. 
Print all these lines to the console.

Упражнение 1:
Определите массив указателей, который содержит 
три следующих элемента: {"Tom", "Bob", "Sam"}. 
Выведите все эти строки на консоль.
*/

#include <stdio.h>

int main(void)
{
    //массив указателей
    
    char * array[] = {"Tom", "Bob", "Sam"};


    //первый вариант

    for (size_t i = 0; i < sizeof(array)/sizeof(array[0]); i++){
        printf("%s ",* (array + i));
    }

    printf("\n");

    //второй вариант

    for (size_t i = 0; i < sizeof(array)/sizeof(array[0]); i++) {
        printf("%s ", array[i]);
    }

    printf("\n");
    

    return 0;
}

//gcc exercise1.c -o exercise1 && ./exercise1
