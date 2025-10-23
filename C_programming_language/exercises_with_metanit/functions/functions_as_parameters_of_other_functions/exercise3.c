/*
Exercise 3:

Упражнение 3:
*/

#include <stdio.h>

typedef int (typeToFunc)(int);

int isEven(int x);
int isPositive(int x);
void action(typeToFunc *, int numbers[], int n);

int main(void)
{
int nums[] = {-5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5};
    int n = sizeof(nums)/sizeof(nums[0]);
     
    printf("Even numbers: ");
    action(isEven, nums, n);
    printf("Positive numbers: ");
    action(isPositive, nums, n);
    return 0;
}

void action(typeToFunc * func, int numbers[], int n) {
    for(int i=0; i<n; i++){

        if( func(numbers[i])!=0 ){
            printf("%d \t", numbers[i]);
        }

    }
    
    printf("\n");
}

int isPositive(int x) {
    return x>0;
}

int isEven(int x) {
    return x%2==0;
}