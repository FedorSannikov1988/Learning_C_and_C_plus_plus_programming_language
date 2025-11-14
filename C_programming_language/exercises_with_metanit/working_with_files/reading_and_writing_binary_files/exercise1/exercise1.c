/*
Exercise 1:

Упражнение 1:
*/
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>
#include "exercise1.h"


int main(void) {

    char simvol;
    char * test_text = "test text\nline1\nline2\n";
    char * name_file = input_data();
    

    if(name_file == NULL) {

        //printf("File name is not entered");
        //perror("File name is not entered");
        fprintf(stderr, "File name is not entered: %s\n", strerror(errno));
    
    } else {

        printf("Enter name: %s\n", name_file);

        FILE * fp = fopen(name_file, "a+");

        if(fp == NULL) {

            //perror("File has not been created");
            //printf("File has not been created: %s\n", name_file);
            fprintf(stderr, "File has not been created: %s. %s\n", name_file, strerror(errno));
            
        } else {

            size_t len = strlen(test_text);

            // записываем:
            for(int i=0; i < len; i++) {
                putc(*(test_text+i), fp);
            }
            
            // читаем:
            while(simvol != EOF) {
                simvol=getc(fp);
                printf("%c", simvol);
            }
            printf("\n");
            
            //закрываем:
            fclose(fp);
            free(name_file);
        }
    }

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
