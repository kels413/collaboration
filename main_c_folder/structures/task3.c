#include <stdio.h>
#include <stdlib.h>
// #define SIZE 5
int calcSum(int num1, int num2);
// JUST A CHECK IF I STILL KNOW AW TO SOLVE MALLOC QUESTIONS.
// DRIVERS CODE.
int main(void)
{
    int num1 = 4, num2 = 4;
    int num, *ptr, i;
    printf("please enter the number of the array ");
    scanf("%d", &num);

    ptr = (int *)malloc(sizeof(int) * num);

    if(ptr == NULL)
        return 1;

    int arr[num];
    for (i = 0; i < num; i++)
    {
        /* code */

        printf(" please enter the array %d\n", i + 1);

        scanf("%d", &arr[i]);
    }


    for (i = 0; i < num; i++)
    {
        /* code */

        printf("%d\n", arr[i]);
    }

    int total = calcSum(num1, num2);

            

    printf("%d\n", total);

    free(ptr);
    return 0;
}

int calcSum(int num1, int num2)
{
    return num1 + num2;
}

