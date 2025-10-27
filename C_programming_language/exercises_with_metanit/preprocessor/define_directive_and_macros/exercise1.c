/*
Exercise 1:
Define a macro named N, which is replaced by the number 22. 
Define the variable that gets the macro value and output its 
value to the console. After using the macro, delete it using 
the #undef directive.

Упражнение 1:
Определите макрос с именем N, который заменяется на число 22. 
Определите переменную, которая получает значение макроса, и 
выведите ее значение на консоль. После использования макроса 
удалите его с помощью директивы #undef.
*/

#include <stdio.h>
#define N 22

int main(void) {
    int x = N;
    #undef N
    printf("Number: %d\n", x);
    return 0;
}

//gcc exercise1.c -o exercise1 && ./exercise1