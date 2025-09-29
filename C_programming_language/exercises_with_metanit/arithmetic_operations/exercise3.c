/*
Exercise 3

In the previous exercise, the result of dividing the first variable,
which is 10, by the second, which is 4, was 2.
Correct the solution so that the result of the division was
2.5 instead of 2.

Упражнение 3

В предыдущем упражнении результат деления первой переменной, 
которая равна 10, на вторую, которая равна 4, был равен 2. 
Исправьте решение таким образом, чтобы результат деления был 
равен не 2, а 2.5.
*/

#include <stdio.h>

int main(void)
{

    /*
    Вероятно имеется следующее:

    При делении стоит быть внимательным, так как если в операции 
    участвуют два целых числа, то результат деления будет округляться 
    до целого числа, даже если результат присваивается переменной float.
    
    Чтобы результат представлял вещественное число, один из операндов также 
    должен представлять вещественное число.
    */
    
    /*
    float a = 10;
    int b = 4;

    float c  = a / b ;
    printf("%1.2f + %d = %1.2f\n", a, b, c);
    
    или
    */
   
    int a = 10;
    float b = 4;

    float c  = a / b ;
    printf("%d + %1.2f = %1.2f\n", a, b, c);

    return 0;
}

//gcc exercise3.c -o exercise3 && ./exercise3