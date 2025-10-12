/*
Exercise 1:
Write a program in which you define a constant of type long 
and define a pointer to this constant. Also define a constant 
pointer to the string "Hello". Print the values indicated by 
the pointers to the console.

Упражнение 1:
Напишите программу, в которой определите константу 
типа long и определите указатель на эту константу. 
Также определите константный указатель на строку "Hello". 
Выведите на консоль значения, на которые указывают указатели.
*/

#include <stdio.h>

int main(void)
{

    /*
    Указатель на константу
    Указатели также могут указывать на константы, но в этом случае 
    перед определением указателя также ставится слово const.

    Изменить значение по адресу, который хранится в указателе, 
    нельзя *pVar1 = 11.

    Переменную отдельно возможно изменять var1 = 11 (а заничит и 
    значение получаемое по указателю).

    Так же возможно присвоить указателю на константу адрес 
    любой другой переменной или константы.
    */
    const long var1 = 10;    
    const long * pVar1 = &var1;
    printf("Pointer var1: %p\n", (void*) pVar1);
    printf("Value var1: %d\n", *pVar1);

    /*
    Константные указатели
    Они не могут изменять адрес, который в них хранится 
    (указывают все время на одну и туже переменную), но 
    могут изменять значение по этому адресу.
    */
    //char var2[] = "Hello";
    //char * const pVar2 = &var2;
    /*
    Так как у нас строка:
    */
    //char * const pVar2 = var2;
    char * const pVar2 = "Hello";
    printf("Pointer var2: %p\n", (void*) pVar2);
    printf("Pointer var2: %d\n", (void*) pVar2);
    printf("Value var2: %s\n", pVar2);

    /*
    Константный указатель на константу
    Объединение обоих предыдущих случаев не позволяет 
    менять ни хранимый в нем адрес, ни значение по этому адресу.
    */
    
    const long var3 = 10;
    const long * const pVar3 = & var3;
    
    return 0;
}

//gcc exercise1.c -o exercise1 && ./exercise1
