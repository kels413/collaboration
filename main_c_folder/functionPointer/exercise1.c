#include <stdio.h>
/**Basic Function Pointer Declaration and Usage:*/

/**Define a function pointer named operation that can point to a function taking two integers as arguments and returning an integer. Create two functions, add and subtract, which match this signature. Write a program that uses the operation function pointer to perform addition and subtraction based on user input.*/

typedef int((*operation)(int, int));

int calcSum(int num1, int num2)
{
    return num1 + num2;
}

int calcSub(int num1, int num2)
{
    return num1 - num2;
}


int result(i(*operation) (int, int))
{
    int total = operation(calcSum, calcSub);

    operation done;

    return total;
}

int main(int argc, char** argv)
{

    int num1, num2;
    printf("write two numbers to calc the sum and difference ");

    scanf("%d %d", &num1, &num2);

    int result = operation(num1, num2);

    printf("%d\n", result);


    return (0);
}

