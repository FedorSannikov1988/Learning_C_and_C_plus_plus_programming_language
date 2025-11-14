/*
Exercise 2:

Упражнение 2:
*/
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>
#include "exercise2.h"


int main(void) {

    char simvol;
    char * name_file = "test.txt";

    FILE * fp = fopen(name_file, "r");

    if(fp == NULL) {
        
        fprintf(stderr, "File not open: %s. %s\n", name_file, strerror(errno));
        
    } else {

        // читаем:
        while(simvol != EOF) {
            simvol=getc(fp);
            printf("%c", simvol);
        }
        printf("\n");
        
        //закрываем:
        fclose(fp);
    }
    

    return 0;
}

//gcc exercise2.c -o exercise2 && ./exercise2
