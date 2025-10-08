/*
Exercise 1:
Write a program in which you define an array of 
characters and output it to the console using the 
%s specifier.

Упражнение 1:
Напишите программу, в которой определите массив 
символов и выведите его на консоль с помощью 
спецификатора %s.
*/
#include <stdio.h>

int main(void)
{

    char val1[] = {'1', '2', '3', '4', '5', '\0'};
    char val2[] = {'1', '2', '3', '4', '5'};
    char val3[] = "12345";
    char val4[] = "12345\0";

    printf("val1=%s\n", val1);
    printf("---\n");
    printf("val2=%s\n", val2);
    printf("---\n");
    printf("val3=%s\n", val3);
    printf("---\n");
    printf("val4=%s\n", val4);
    printf("---\n");

    size_t length = sizeof(val1)/sizeof(char);
    printf("length val1 = %d\n", length);

    for (size_t i = 0; i < length; i++) {
        //printf("i=%d \t", i);
        printf("c=%c, \t", val1[i]);
    }
    printf("\n");
    
    length = sizeof(val2)/sizeof(val2[0]);
    printf("length val2 = %d\n", length);

    for (size_t i = 0; i < length; i++) {
        //printf("i=%d \t", i);
        printf("c=%c, \t", val2[i]);
    }
    printf("\n");

    length = sizeof(val3)/sizeof(val3[0]);
    printf("length val3 = %d\n", length);

    for (size_t i = 0; i < length; i++) {
        //printf("i=%d \t", i);
        printf("c=%c, \t", val3[i]);
    }
    printf("\n");

    length = sizeof(val4)/sizeof(val4[0]);
    printf("length val4 = %d\n", length);

    for (size_t i = 0; i < length; i++) {
        //printf("i=%d \t", i);
        printf("c=%c, \t", val4[i]);
    }
    printf("\n");

    return 0;
}

//gcc exercise1.c -o exercise1 && ./exercise1
