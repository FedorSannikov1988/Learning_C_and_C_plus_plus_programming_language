/*
Exercise 2:

Упражнение 2:
*/

#include <stdio.h>

int main(void)
{

    int array[] = {1, 2, 3};

    // указатель на массив:
    int (*pa)[3] = &array;  
    
    // массив указателей:
    int *pb[] = { &array[2], &array[1], &array[0] };
    
    // перебираем массив через указатель на массив
    printf("Pointer to Array\n");
    for(size_t i = 0; i < sizeof(*pa)/sizeof(*pa[0]); i++){
        printf("%d\n", (*pa)[i]);
    }

    // перебираем массив указателей
    printf("Array of Pointers\n");
    for(size_t i = 0; i < sizeof(pb)/sizeof(pb[0]); i++){
        printf("%d\n", *pb[i]);
    }

    // указатель и массив строк
    char *fruit[] = {"apricot", "apple", "banana", "lemon", "orange"};
    for(int i=0; i < 5; i++){
        printf("%s \n", fruit[i]);
    }

    int  x = 22;
    int *px = &x;       // указатель px хранит адрес переменной x
    int **ppx = &px;    // указатель ppx хранит адрес указателя px
         
    printf("Address of px: %p \n", (void *)ppx);
    printf("Address of x: %p \n", (void *)*ppx);
    printf("Value of x: %d \n", **ppx);
    
    /*
    int arr1[3] = {10, 20, 30};
    int arr2[3] = {40, 50, 60};

    int (*p)[3] = &arr1;
    p++; // Теперь p указывает на arr2 
    (если они идут подряд в памяти)
    p++ сдвигает указатель на 3 × sizeof(int) байт — то есть 
    на целый массив, а не на один элемент.

    Это особенно полезно при работе с двумерными массивами:

    int matrix[2][3] = {{1,2,3}, {4,5,6}};
    int (*row)[3] = matrix; // matrix == &matrix[0]

    printf("%d\n", (*row)[1]); // 2
    row++;                     // переходим ко второй строке
    printf("%d\n", (*row)[1]); // 5
    */

    /*
    Указатель на массив int (*)[N] позволяет:

    Обращаться к элементам через (*p)[i].
    Правильно двигаться по памяти (p++ → следующий массив).
    Работать с двумерными массивами построчно.
    Передавать массивы в функции без потери информации о размере.

    Всё это возможно благодаря тому, что размер N — часть типа указателя. 
    */

    return 0;
}

//gcc exercise2.c -o exercise2 && ./exercise2
