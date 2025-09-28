/*
Exercise 1

Write a program for exchanging the values of two 
variables of type int. Use 4 ways to exchange values:

- Exchange via a third variable
- Exchange without a third variable
- Exchange via XOR operation
- Exchange using a single expression


Упражнение 1

Напишите программу обмена значений двух переменных типа int. 
Для обмена значениями используйте 4 способа:

- Обмен через третью переменную
- Обмен без третьей переменной
- Обмен через операцию XOR
- Обмен с помощью одного выражения

*/

#include <stdio.h>

int main(void)
{

    // Обмен через третью переменную:
    printf("Exchange via a third variable:\n");

    int var01 = 1;
    int var02 = 2;

    printf("Before exchange var1= %d var2= %d\n", var01, var02);

    int var3 = var01;
    var01 = var02;
    var02 = var3;

    printf("After exchange var1= %d var2= %d\n", var01, var02);

    // Обмен без третьей переменной
    printf("\nExchange without a third variable:\n");

    int var11 = 1;
    int var12 = -1;

    printf("Before exchange var1= %d var2= %d\n", var11, var12);

    var11 = var11 + var12;
    var12 = var11 - var12;
    var11 = var11 - var12;

    printf("After exchange var1= %d var2= %d\n", var11, var12);

    // Обмен через операцию XOR
    printf("\nExchange via XOR operation:\n");

    int var21 = 1;
    int var22 = -2;

    printf("Before exchange var1= %d var2= %d\n", var21, var22);

    var21 = var21 ^ var22;
    var22 = var21 ^ var22;
    var21 = var21 ^ var22;

    printf("After exchange var1= %d var2= %d\n", var21, var22);


    // Обмен с помощью одного выражения
    /*
    Так точно делать не надо.
    Три выше приведенных способа приемлемы то этот точно нет 
    так как компилятор может не скомпелировать правильно !!!
    мотеж быть как unspecified behavior так и 
    undefined behavior (в старых стандартах)
    */
    printf("\nExchange using a single expression:\n");

    int var31 = 1;
    int var32 = -2;

    printf("Before exchange var1= %d var2= %d\n", var31, var32);

    var31 = var31 + var32 - ( var32 = var31 );

    printf("After exchange var1= %d var2= %d\n", var31, var32);

    return 0;
}

//gcc exercise1.c -o exercise1 && ./exercise1
