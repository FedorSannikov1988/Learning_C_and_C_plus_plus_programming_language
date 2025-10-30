/*
Exercise 1:
Define the structure, which you will name "employee". 
Define the following elements in the structure:
-name, which has the char type *;
-age, which is of type int;
-salary, which is of the double type;

In the main function, define a variable of this structure,
assign values to its elements, and display them on the screen
so that the console output of the program is as follows:

Name: Sam
Age: 23
Salary: 4500.00

Упражнение 1:

Определите структуру, которую назовите "employee". 
В структуре определите следующие элементы:
-name, который имеет тип char *;
-age, который имеет тип int;
-salary, который имеет тип double;

В функции main определите переменную данной структуры, 
присвойте ее элементам значения и выведите их на экран 
таким образом, чтобы консольный вывод программы был следующим:

Name: Sam
Age: 23
Salary: 4500.00
*/
#include <stdio.h>
#include "exercise1.h"

/*
struct employee {
    char * name;
    int age;
    double salary;
};
*/

int main(void) {

    //struct employee employee1 = {.name="Sam", .age=23, .salary=4500.00};
    //struct employee employee1 =  {"Sam", 23, 4500.00};
    //employee employee1 =  {"Sam", 23, 4500.00};

    employee employee1;
    employee1.name = "Sam";
    employee1.age=23;
    employee1.salary=4500.000;

    //printf("Name: %s, \t Age: %d \t Salary: %.2f\n", employee1.name, employee1.age, employee1.salary);
    printf("Name: %s\nAge: %d\nSalary: %.2f\n", employee1.name, employee1.age, employee1.salary);
    return 0;
}


//gcc exercise1.c -o exercise1 && ./exercise1
