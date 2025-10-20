/*
Exercise 1:
Write a function that accepts a string as a parameter 
and outputs it to the console. In the main function, 
call the above defined function several times, passing 
it different strings.

Упражнение 1:
Напишите функцию, которая в качестве параметра принимает 
строку и выводит ее на консоль. В функции main вызовите 
выше определенную функцию несколько раз, передавая ей 
разные строки.
*/

#include <stdio.h>

//void print(char * str);
void print(char str[]);

int main(void) {

    print("print1");
    print("print2");
    print("print3");

    return 0;
}

/*
void print(char * str) {
    printf("%s\n", str);
}
*/

void print(char str[]) {
    printf("%s\n", str);
}

//gcc exercise1.c -o exercise1 && ./exercise1
