#include <stdio.h>
#include <stdlib.h>

/**
 * Certainly! Here's another beginner-friendly programming exercise:

**Exercise: Calculate the Sum of Numbers**

Write a C program that calculates the sum of a series of numbers entered by the user. The program should do the following:

1. Ask the user how many numbers they want to add together.
2. Prompt the user to enter each number one by one.
3. Calculate and display the sum of the entered numbers.

Here's a step-by-step breakdown of what you need to do:

1. Ask the user for the number of numbers they want to add.
2. Use dynamic memory allocation (`malloc`) to create an array of integers to store these numbers.
3. Prompt the user to input each number and store them in the dynamically allocated array.
4. Calculate the sum of the numbers.
5. Display the sum to the user.
6. Free the dynamically allocated memory to avoid memory leaks.

This exercise will help you practice user input, dynamic memory allocation, and basic arithmetic operations in C.
*/

int main(void)
{
    int sizeOfNumbers;
    printf("how many numbers you wanna calculate ? ");
    scanf("%d", &sizeOfNumbers);
    int sum = 0, i;


    int *result = (int *) malloc(sizeof(int) * sizeOfNumbers); // allocate memory.


    if(result == NULL || sizeOfNumbers <= 0){   // check if the pointer returned NULL POINTER
        printf("oh no 😭 memory allocation failed\n");
        return 1;
    }


    for (i = 0; i < sizeOfNumbers; i++)
    {
        printf("Please Enter the numbers to sum %d ", i + 1);
        /* code */
       int input =  scanf("%d", &result[i]);

        if(input != 1 || sizeOfNumbers <=0)
        {
            printf("sorry input a valid number\n");
            return 1;

        }

        sum += result[i];

    }
        printf("%d\n", sum);

    free(result);

    return 0;
    

}