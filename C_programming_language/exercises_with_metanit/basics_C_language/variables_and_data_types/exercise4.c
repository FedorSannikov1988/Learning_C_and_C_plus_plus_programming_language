/*
Exercise 4

Print the values of the variables defined in the previous exercise to the console.

Упражнение 4

Выведите на консоль значения переменных, определенных в предыдущем упражнении.
*/

#include <stdio.h>

int main(void)
{

    char charTypeOne = 'F';
    printf("charTypeOne i: %i \n", charTypeOne);
    printf("charTypeOne d: %d \n", charTypeOne);
    printf("charTypeOne c: %c \n", charTypeOne);

    int intTypeOne = 10;
    printf("intTypeOne i: %i \n", intTypeOne);
    printf("intTypeOne d: %d \n", intTypeOne);

    float floatType = 3.14f;
    printf("floatType 1.3f %1.3f\n", floatType);

    double doubleType = 3.14159f;
    printf("doubleType 1.6f %1.6f\n", doubleType);

    return 0;

}

//gcc exercise4.c -o exercise4 && ./exercise4
