/*
Exercise 5:
There are 3,281 feet in one meter. Write a 
program in which the size in feet is entered 
from the console, and the size in meters is output.

Упражнение 5:
В одном метре 3.281 фут. Напишите программу, в 
которой с консоли вводится размер в футах, а 
выводится размер в метрах.
*/

#include <stdio.h>

int main(void)
{
    
    char * resultInput;
    char inputBuffer[1000];
    int recognitionResult;

    double var1;
    double var2;

    printf("Input feet: ");

    resultInput = fgets(inputBuffer, sizeof(inputBuffer), stdin);

    if (resultInput != NULL) {

        recognitionResult = sscanf(inputBuffer, "%lf", &var1);
        
        if (recognitionResult != 1) {
            printf("Введенное %s не удалось преобразовать в double.\n", inputBuffer);
        }

    }

    //var2 = var1 * 0.3048;
    var2 = var1 / 3.281;
    printf("Output meter: %lf\n", var2);

    return 0;
}

//gcc exercise5.c -o exercise5 && ./exercise5
