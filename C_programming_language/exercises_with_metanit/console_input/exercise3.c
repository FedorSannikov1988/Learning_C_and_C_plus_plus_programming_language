/*
Exercise 3:

The following program is given:

#include <stdio.h>
  
int main(void)
{
    int age;
    char name[20];
    // вводим возраст
    printf("Your age: ");
    scanf("%d", &age);
    // вводим имя
    printf("Your name: ");
    scanf("%20s", name);
     
    printf("Name: %s \t Age = %d",name,  age);
    return 0;
}

This program has a problem - when entering a name, 
only the first part of the name is placed in the 
name variable, which goes before the space:

Your age: 34
Your name: Tom Smith
Name: Tom        Age = 34

Fix the program so that it can accept 
space-separated strings as a name, 
for example, "Tom Smith".

Упражнение 3:

Дана следующая программа:
	
#include <stdio.h>
  
int main(void)
{
    int age;
    char name[20];
    // вводим возраст
    printf("Your age: ");
    scanf("%d", &age);
    // вводим имя
    printf("Your name: ");
    scanf("%20s", name);
     
    printf("Name: %s \t Age = %d",name,  age);
    return 0;
}

Эта программа имеет проблему - при вводе имени в переменную name 
помещается только первая часть имени, которая идет до пробела:

Your age: 34
Your name: Tom Smith
Name: Tom        Age = 34

Исправьте программу таким образом, чтобы она могла 
принимать в качестве имени строки, разделенные пробелом, 
например, "Tom Smith".
*/

#include <stdio.h>

int main(void)
{
    int age;
    char name[20];
    // вводим возраст
    printf("Your age: ");
    scanf("%d", &age);
    // вводим имя
    printf("Your name: ");
    scanf(" %20[^\n]", name);

    /*
    Пробел в формате говорит:
    «Сначала пропусти все пробельные символы 
    (включая \n, оставшийся от предыдущего ввода), 
    и только потом начинай читать по шаблону [^\n]».

    [^\n]- это спецификатор формата "скан-сет" (scan set).
    особый способ указать, какие символы читать из входного потока.
    Общий синтаксис: %[набор_символов]
    или
    %[^набор_символов]   ← с крышкой (^) — означает "всё, кроме"
    
    Конкретно: [^\n] 

    [ — начало скан-сета.
    ^ — инверсия: "читать всё, кроме следующих символов".
    \n — символ новой строки (newline).
    ] — конец скан-сета.
     
    */
     
    printf("Name: %s \t Age = %d\n",name,  age);
    return 0;
}

//gcc exercise3.c -o exercise3 && ./exercise3
