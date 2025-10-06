/*
Exercise 2:
Change the previous program so that the scanf() function 
is not used to read the data, but the fgets() function, 
which reads the string into the buffer, and the sscanf() 
function, which extracts data from the buffer into variables.

Упражнение 2:
Измените предыдущую программу таким образом, чтобы для считывания 
данных использовалась не функция scanf(), а функции fgets(), которая 
считывает строку в буфер, и функцию sscanf(), которая извлекает 
данные из буфера в переменные.
*/

#include <stdio.h>

int main(void)
{
    char * resultInput;
    char inputBuffer[1000];
    int recognitionResult;

    int var1;
    int var2;
    double var3;

    printf("Input var1: ");

    resultInput = fgets(inputBuffer, sizeof(inputBuffer), stdin);
    /*
    inputBuffer — буфер, куда будет записана строка.
    sizeof(inputBuffer) — максимальное количество символов 
    для чтения (включая завершающий \0).
    stdin — поток (например, stdin, stdout, файл).

    Возвращаемое значение:
    - Указатель на str при успехе.
    - NULL, если достигнут конец файла или произошла ошибка.
    */
    printf("resultInput=%d\n", resultInput);
    if (resultInput != NULL) {
        printf("Output var1: %s\n", inputBuffer);
        recognitionResult = sscanf(inputBuffer, "%d", &var1);
        //printf("recognitionResult= %d\n", recognitionResult);
        /*
        inputBuffer — строка, из которой читаются данные.
        %d — строка формата (как в scanf).
        &var1 — адреса переменных, куда записываются прочитанные значения.

        Возвращаемое значение:
        - Количество успешно считанных и присвоенных значений.
        - EOF, если ошибка или конец строки.
        */
        
        if (recognitionResult != 1) {
            printf("Введенное %s не удалось преобразовать в int.\n", inputBuffer);
        }

        /*
        if (recognitionResult == 0) {
            printf("Введенное %s не int.\n", inputBuffer);
        } else if (recognitionResult == EOF) {
            printf("Превышен размер буффера. Значение %s считано не до конца (не найден \0).\n", inputBuffer);
        }
        */

    }
    //printf("Repit output var1: %s\n", inputBuffer);
    
    printf("Input var2: ");
    resultInput = fgets(inputBuffer, sizeof(inputBuffer), stdin);
    //printf("resultInput=%d\n", resultInput);
    if (resultInput != NULL) {
        printf("Output var2: %s\n", inputBuffer);
        
        recognitionResult = sscanf(inputBuffer, "%d", &var2);

        if (recognitionResult != 1) {
            printf("Введенное %s не удалось преобразовать в int.\n", inputBuffer);
        }
        
    }
    //printf("Repit output var2: %s\n", inputBuffer);

    printf("Input var3: ");
    resultInput = fgets(inputBuffer, sizeof(inputBuffer), stdin);
    //printf("resultInput=%d\n", resultInput);
    if (resultInput != NULL) {
        printf("Output var3: %s\n", inputBuffer);

            recognitionResult = sscanf(inputBuffer, "%lf", &var3);

        if (recognitionResult != 1) {
            printf("Введенное %s не удалось преобразовать в int.\n", inputBuffer);
        }
    }
    //printf("Repit output var3: %s\n", inputBuffer);

    printf("var1 = %d, var2 = %d, var3 = %.3lf\n", var1, var2, var3);

    return 0;
}

//gcc exercise2.c -o exercise2 && ./exercise2
