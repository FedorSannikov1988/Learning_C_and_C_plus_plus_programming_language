/*
Exercise 1:
Write a program in which values for two int variables 
and one double variable are entered from the console. 
Use the scanf function to enter data.

Упражнение 1:
Напишите программу, в которой с консоли вводятся значения 
для двух переменных типа int и одной переменной типа double. 
Для ввода данных используйте функцию scanf.
*/

#include <stdio.h>

int main(void)
{

    int var1;
    printf("input var1 type int:");
    scanf("%d", &var1);
    
    int var2;
    printf("input var2 type int:");
    scanf("%d", &var2);

    double var3;
    printf("input var3 type double:");
    scanf("%lf", &var3);

    printf("var1 = %d, var2 = %d, var3 = %.3lf\n", var1, var2, var3);
    
    return 0;
}

//gcc exercise1.c -o exercise1 && ./exercise1
