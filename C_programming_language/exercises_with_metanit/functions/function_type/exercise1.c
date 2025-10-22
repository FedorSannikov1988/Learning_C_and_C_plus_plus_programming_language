/*
Exercise 1:

Упражнение 1:
Даны следующие две функции:

void print_person(char* name, int age)
{
    printf("Name: %s \t Age: %d \n", name, age);
}
void print_product(char* title, int price)
{
    printf("Title: %s \t Price: %d \n", title, price);
}

Первая принимает и выводит на консоль имя и возвраст 
человека, вторая - название и цену товара.

Определите указатель на эти функции и через указатель 
вызовите эти функции, передавая им различные параметры.
*/

#include <stdio.h>

/*
Используя определение функции - ее возвращаемый 
тип и типы параметров мы можем описать тип функций. 
Для этого применяется оператор typedef:

typedef возвращаемый_тип (название)(типы_параметров);

Определение типа функции упрощает применение указателей 
на функции. Возьмем простейший пример:
*/

void print_person(char* name, int age);
void print_product(char* title, int price);
typedef void (typeToFunc)(char*, int);

int main(void) {
    /*
    Определение указателя на функцию:
    Указатель на функцию представляет собой 
    выражение или переменную, которые используются 
    для представления адреса функции.
    тип (*имя_указателя) (типы_параметров);
    Например, определим указатель на функцию:
    void (*message) (void);
    При определении указателя стоит обратить внимание на 
    скобки вокруг имени. Так, использованное выше определение
    void (*message) (void);
    НЕ будет аналогично следующему определению:
    void *message (void);
    Во втором случае определен не указатель на функцию, а прототип 
    функции message, которая возвращает указатель типа void*.
    */
    void (*function)(char *, int);
    function = print_person;
    function("Test_Name_1", 100);

    function = print_product;
    function("Test_Name_Product_1", 200);

    /*
    Но если определил тип все проще:
    */
    typeToFunc * func1 = print_person;
    typeToFunc * func2 = print_product;
    func1("Test_Name_2", 300);
    func2("Test_Name_Product_2", 400);

    /*
    благодаря typedef void (typeToFunc)(char*, int);
    определение массива указателей на функцию 
    void (*array_function[2])(char *, int) = {print_person, print_product};
    можно заменить на 
    typeToFunc * arr_func[] = {print_person, print_product};
    */
    
    typeToFunc * arr_func[] = {print_person, print_product};

    int length = sizeof(arr_func)/sizeof(arr_func[0]);

    char * var1 = "Test_Name_3";
    int var2 = 1000;

    for(int i=0; i < length; i++) {
        arr_func[i](var1, var2);
        //(*(arr_func+i))(var1, var2);
    }

    return 0;
}

void print_person(char* name, int age) {
    printf("Name: %s \t Age: %d \n", name, age);
}

void print_product(char* title, int price) {
    printf("Title: %s \t Price: %d \n", title, price);
}

//gcc exercise1.c -o exercise1 && ./exercise1
