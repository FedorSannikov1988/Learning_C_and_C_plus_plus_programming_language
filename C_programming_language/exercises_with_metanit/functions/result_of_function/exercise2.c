/*
Exercise 2:
Take the calculate function from the previous 
tutorial and write its prototype.

Упражнение 2:
Возьмите из предыдущего управжнения функцию 
calculate и напишите ее прототип.
*/

#include <stdio.h>


//int calculate(int var1, int var2);
int calculate(int, int);

int main(void) {

    int res1 = calculate(2, 1);
    int res2 = calculate(1, 2);

    printf("The first time: %d\n", res1);
    printf("The second time: %d\n", res2);

    return 0;
}

int calculate(int var1, int var2) {

    int res;

    if (var1 > var2) {
        res = var1 - var2;
    } else if (var1 < var2) {
        res = var1 + var2;
    }

    return res;
}


//gcc exercise2.c -o exercise2 && ./exercise2
