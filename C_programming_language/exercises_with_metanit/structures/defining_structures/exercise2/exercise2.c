/*
Exercise 2:
Take the program from the previous exercise and use the 
typedef operator to define the alias "employee" for the 
structure. Use this alias to define variables in this structure.

Упражнение 2:
Возьмите программу из предыдущего упражнения и определите с 
помощью оператора typedef для структуры псевдоним "employee". 
Используйте этот псевдоним для определения переменных этой структуры.
*/
#include <stdio.h>
#include "exercise2.h"

int main(void) {

    employee employee1;
    employee1.name = "Sam";
    employee1.age=23;
    employee1.salary=4500.000;

    printf("Name: %s\n", employee1.name);
    printf("Age: %d\n", employee1.age);
    printf("Salary: %.2f\n", employee1.salary);

    return 0;
}

//gcc exercise2.c -o exercise2 && ./exercise2