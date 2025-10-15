/*
Exercise 2:
Change the previous program so that only the prototype 
of the hello_world function is defined before the main 
function, and its definition is located after the main 
function. Define and call a function called hello_world, 
which will output the string "Hello World!" to the console.

Упражнение 2:
Измените предыдущую программу таким образом, 
чтобы до функции main был определен только прототип 
функции hello_world, а после функции main располагалось 
ее определение. Определите и вызове функцию, которую 
назовите hello_world и которая будет выводить на 
консоль строку "Hello World!".
*/

#include <stdio.h>

void helloWorld(void);

void callHelloWorld(void);

int main(void) {

    printf("helloWorld:\n");
    
    helloWorld();

    printf("callHelloWorld:\n");
    
    callHelloWorld();

    return 0;
}

void helloWorld(void) {
    printf("Hello World!\n");
}

void callHelloWorld(void) {
    helloWorld();
}

//gcc exercise2.c -o exercise2 && ./exercise2
