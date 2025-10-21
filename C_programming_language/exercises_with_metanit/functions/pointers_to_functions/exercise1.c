/*
Exercise 1:
The following two functions are given:

void print_person(char* name, int age)
{
    printf("Name: %s \t Age: %d \n", name, age);
}
void print_product(char* title, int price)
{
    printf("Title: %s \t Price: %d \n", title, price);
}

The first accepts and outputs to the console the name and age 
of the person, the second - the name and price of the product.

Define a pointer to these functions and use the pointer to call 
these functions, passing them various parameters.

Упражнение 1:
Даны следующие две функции:

void print_person(char* name, int age)
{
    printf("Name: %s \t Age: %d \n", name, age);
}
void print_product(char* title, int price)
{
    printf("Title: %s \t Price: %d \n", title, price);
}

Первая принимает и выводит на консоль имя и возвраст 
человека, вторая - название и цену товара.

Определите указатель на эти функции и через указатель 
вызовите эти функции, передавая им различные параметры.
*/

#include <stdio.h>

void print_person(char *, int);
void print_product(char *, int);

int main(void) {
    /*
    void (*function)(char *, int);

    function = print_person;
    function("Test_Name", 100);

    function = print_product;
    function("Test_Name_Product", 200);
    */
    void (*array_function[2])(char *, int) = {print_person, print_product};

    int length = sizeof(array_function)/sizeof(array_function[0]);

    char * var1 = "Test_Name_2";
    int var2 = 1000;

    for(int i=0; i < length; i++) {
        array_function[i](var1, var2);
        //(*(array_function+i))(var1, var2);
    }

    return 0;
}

void print_person(char* name, int age) {
    printf("Name: %s \t Age: %d \n", name, age);
}

void print_product(char* title, int price) {
    printf("Title: %s \t Price: %d \n", title, price);
}

//gcc exercise1.c -o exercise1 && ./exercise1
