/*
Exercise 1:
Write a function that accepts two int type parameters. 
If the first parameter is greater than the second, the 
function returns the difference of the parameters. And if 
the first parameter is less than the second, the function 
returns the sum of the parameters.
In the main function, call the above defined function several 
times, passing it different arguments.

Упражнение 1:
Напишите функцию, которая принимает два параметра типа int. 
Если первый параметр больше второго, то функция возвращает 
разность параметров. А если первый параметр меньше второго, 
то функция возвращает сумму параметров.
В функции main вызовите выше определенную функцию несколько 
раз, передавая ей разные аргументы.
*/

#include <stdio.h>


int calculate(int var1, int var2) {

    int res;

    if (var1 > var2) {
        res = var1 - var2;
    } else if (var1 < var2) {
        res = var1 + var2;
    }

    return res;
}

int main(void) {

    printf("The first time: %d\n", calculate(2, 1));
    printf("The second time: %d\n", calculate(1, 2));

    return 0;
}


//gcc exercise1.c -o exercise1 && ./exercise1
