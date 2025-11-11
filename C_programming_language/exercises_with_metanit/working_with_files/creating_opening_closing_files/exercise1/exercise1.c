/*
Exercise 1:
Write a program in which the user enters a file name in the console, 
and the program creates a file with the entered name and outputs 
the result to the console.

Упражнение 1:
Напишите программу, в которой пользователь вводит в консоли 
название файла, а программа создает файл с введенным именем и 
выводит на консоль результат.
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "exercise1.h"


int main(void) {

    char * name_file = input_data();
    printf("Enter name: %s\n", name_file);
    free(name_file);

    return 0;
}


char * input_data(void) {

    /*
    cпециально сделал так что бы 
    выделялась память динамически:
    */

    int n = 100;
    char buff[n];

    printf("Input name file: ");

    char *  p_buff = fgets(buff, n, stdin);

    if (p_buff == NULL) {
        printf("Fatal Error:Data was not read during the input!\n");
        return NULL;
    }

    /*
    так же можно заменить циклом 
    while для линейного прохода
    */
    size_t len = strcspn(buff, "\n");
    buff[len] = '\0';

    if (len == 0) {
        printf("Error:Empty line has been entered!\n");
        return NULL;
    }

    void *return_ptr = malloc(len+1);
    char *char_return_ptr = (char*) return_ptr;

    /*
    можно заменить на strcpy(result, buff);
    */

    int count = 0; 
    while (count <= len) {
        *(char_return_ptr + count) = *(p_buff + count);
        count ++;
    }

    return char_return_ptr;

}

//gcc exercise1.c -o exercise1 && ./exercise1
