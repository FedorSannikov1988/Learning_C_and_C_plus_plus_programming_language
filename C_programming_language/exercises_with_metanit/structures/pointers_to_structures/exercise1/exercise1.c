/*
Exercise 1:
Define the structure, which you will name "person". 
Define the following elements in the structure:
- name that has the char type *;
- age, which is of type int;
In the main function, define a variable of this structure 
and assign values to its elements. Also, define a pointer 
to this variable and use this pointer to output the values 
of the structure elements.

Упражнение 1:

Определите структуру, которую назовите "person".
В структуре определите следующие элементы:
- name, который имеет тип char *;
- age, который имеет тип int;
В функции main определите переменную данной структуры и присвойте ее 
элементам значения. Также определите указатель на эту переменную и 
через этот указатель выведите значения элементов структуры.
*/
#include <stdio.h>
#include "exercise1.h"


int main(void) {

    struct person testPerson = {.name="testPerson", .age=100};
    struct person * PointerTestPerson = &testPerson;

    printf("---\n");
    printf("name %s, age %d\n",testPerson.name, testPerson.age);

    //или

    printf("---\n");
    printf("name %s, age %d\n", PointerTestPerson -> name, PointerTestPerson -> age);

    //или

    printf("---\n");
    printf("name %s, age %d\n", (*PointerTestPerson).name, (*PointerTestPerson).age);

    PointerTestPerson -> name = "testPerson2";
    PointerTestPerson -> age = 101;

    printf("---\n");
    printf("name %s, age %d\n", PointerTestPerson -> name, PointerTestPerson -> age);

    return 0;
}

//gcc exercise1.c -o exercise1 && ./exercise1
