/*
Exercise 1:

Упражнение 1:
*/

#include "exercise1.h"

int main(void) {
    print("test");
    return 0;
}

void print(char * text) {
    printf("out text: %s\n", text);
}

//gcc exercise1.c -o exercise1 && ./exercise1