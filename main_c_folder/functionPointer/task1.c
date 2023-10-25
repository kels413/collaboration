#include <stdio.h>

// FUNCTION POINTERS.

/**
 * calcSum - function to calcsum of two numbers.
 *
 * @num1: - first parameter.
 * @num2: - second parameter.
 * @return: - sum.
 */

int calcSum(int, int);

int main(int argc, char** argv)
{


    // FUNCTION POINTER.
    int num1 = 10, num2 = 20, sum;
    int (*ptr)(int, int) = &calcSum;

   sum =  (*ptr)(num1, num2);

    printf("%d\n", sum);

    return (0);
}

int calcSum(int num1, int num2)
{
    return num1 + num2;
}

