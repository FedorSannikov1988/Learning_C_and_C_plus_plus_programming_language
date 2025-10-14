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
    for(int i=0; i < 5; i++)
    {
        printf("%s \n", fruit[i]);
    }
    
    int  x = 22;
    int *px = &x;       // указатель px хранит адрес переменной x
    int **ppx = &px;    // указатель ppx хранит адрес указателя px
         
    printf("Address of px: %p \n", (void *)ppx);
    printf("Address of x: %p \n", (void *)*ppx);
    printf("Value of x: %d \n", **ppx);

    return 0;
}

//gcc exercise2.c -o exercise2 && ./exercise2
