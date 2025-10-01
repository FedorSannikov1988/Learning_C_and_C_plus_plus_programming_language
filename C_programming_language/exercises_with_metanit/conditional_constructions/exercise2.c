/*

Exercise 2:

Write a program that defines an int variable and 
checks its value. If the value of the variable is 
greater than 4 and at the same time less than 14, 
then "within range (4..14)" is displayed on the console. 
In all other cases, let "out of range" be output to the console.

Упражнение 2:

Напишите программу, которая определяет переменную типа int и 
проверяет ее значение. Если значение переменной больше 4 и 
одновременно меньше 14, то на консоль выводится "within range (4..14)". 
В остальных случаях пусть на консоль выводится "out of range".

*/

#include <stdio.h>

int main(void)
{

    int var1 = 10;

    if(4 < var1 && var1 < 14) {
    
    //if(4 < var1 < 14) { //<- ошибка !!!
    /*
    В C операторы сравнения (например, <) левоассоциативны, 
    то есть выражение: 4 < var1 < 14
    интерпретируется как: (4 < var1) < 14
    Сначала вычисляется 4 < var1. Это выражение возвращает 0 (если ложно) 
    или 1 (если истинно).
    Затем результат (0 или 1) сравнивается с 14: 0 < 14 или 1 < 14.
    */
        printf("within range (4..14)\n");

    } else {

        printf("out of range\n");

    }

    return 0;
}

//gcc exercise2.c -o exercise2 && ./exercise2
