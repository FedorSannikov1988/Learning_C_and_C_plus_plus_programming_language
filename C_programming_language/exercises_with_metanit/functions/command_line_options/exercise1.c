/*
Exercise 1:

Упражнение 1:
*/
#include <stdio.h>

/*
Функция main позволяет получать извне при запуске 
некоторые значения. Для этого она имеет следующую 
сигнатуру: int main(int argc, char *argv[])

char *argv[] - массив указателей:

char *fruit[] = {"apricot", "apple", "banana", "lemon", "orange"};
for(int i=0; i < 5; i++)
{
    printf("%s \n", fruit[i]);
}
return 0;
*/

int main(int argc, char *argv[]) {

    printf("int argc: %d \n", argc);
    printf("char *argv[]:\n");
    
    for (int i = 0; i < argc; i++) {
        printf("%s \n", argv[i]);
    }

    return 0;

}

//gcc exercise1.c -o exercise1 && ./exercise1