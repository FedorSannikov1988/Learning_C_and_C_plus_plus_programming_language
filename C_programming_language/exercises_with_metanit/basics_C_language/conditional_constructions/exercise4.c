/*

Exercise 4:

Write a program that defines an int variable with a value of 5. 
Use the switch construction..a case for checking that the value 
of a variable is equal to one of the values from the set [4, 5, 6].

Упражнение 4:

Напишите программу, которая определяет переменную типа int 
со значением 5. Используйте конструкцию switch..case для 
проверки, что значение переменной равно одному из значений 
из набора [4, 5, 6].

*/

#include <stdio.h>

int main(void)
{

    int var = 5;
     
    switch(var)
    {
        case 4:

            //printf("var = %d \n", var);
            printf("var = 4 \n", var);
            break;
        
        case 5:

            //printf("var = %d \n", var);
            printf("var = 5 \n", var);
            break;
        
        case 6:

            //printf("var = %d \n", var);
            printf("var = 6 \n", var);
            break;
            
        default:

            printf("var not in [4, 6]\n");
            break;
    }

    return 0;
}

//gcc exercise4.c -o exercise4 && ./exercise4