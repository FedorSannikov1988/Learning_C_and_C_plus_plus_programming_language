/*
Exercise 3:
Write a function that calculates the factorial of a number. 
The factorial of the number N is calculated using the formula 
N! = 1 * 2 * 3 ...* N. For example, the factorial of the number 
5 is 5! = 120 (that is 1*2*3*4*5 =120)

Упражнение 3:
Напишите функцию, которая вычисляет факториал числа. 
Факториал числа N вычисляется по формуле N! = 1 * 2 * 3 ...* N. 
Например, факториал числа 5 равен 5! = 120 (то есть 1*2*3*4*5 =120)
*/
#include <stdio.h>

int factorial(int);

int main(void) {

    int val = 5;
    int res = factorial(val);

    printf("factorial(%d)=%d\n", val, res);

    return 0;
}

int factorial(int n)
{
    //recursion:
    /*
    if (n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
    */
    
    // cycle:
    int result = 1;

    for(int i=1; i<=n; i++) {
      result *= i;
    }
    
    return result;
}

//gcc exercise3.c -o exercise3 && ./exercise3
