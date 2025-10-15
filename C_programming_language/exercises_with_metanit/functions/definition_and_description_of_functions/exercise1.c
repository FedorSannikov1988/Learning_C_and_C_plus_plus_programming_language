/*
Exercise 1:
Define and call a function called hello_world, 
which will output the string "Hello World!" 
to the console.

Упражнение 1:
Определите и вызовите функцию, которую назовите 
hello_world и которая будет выводить на консоль 
строку "Hello World!".
*/

#include <stdio.h>

void helloWorld(void) {
    
    printf("Hello World!\n");

}

int main(void) {

    helloWorld();

    return 0;
}

//gcc exercise1.c -o exercise1 && ./exercise1
