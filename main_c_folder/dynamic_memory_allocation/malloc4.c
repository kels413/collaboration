#include <stdio.h>
#include <stdlib.h>

/**
 * Certainly! Here's another beginner-friendly programming exercise for you:

**Exercise: Find the Maximum Number**

Write a C program that finds the maximum number from a list of numbers entered by the user. The program should do the following:

1. Ask the user how many numbers they want to compare.
2. Prompt the user to enter each number one by one.
3. Calculate and display the maximum number among the entered numbers.

Here's a step-by-step breakdown of what you need to do:

1. Ask the user for the number of numbers they want to compare.
2. Use dynamic memory allocation (`malloc`) to create an array of integers to store these numbers.
3. Prompt the user to input each number and store them in the dynamically allocated array.
4. Find the maximum number among the entered numbers.
5. Display the maximum number to the user.
6. Free the dynamically allocated memory to avoid memory leaks.

This exercise will help you practice user input, dynamic memory allocation, and basic comparison operations in C.
*/

int main(void)
{
    int sizeOfNumbers, i , *ptr;
    printf("please enter the size of number ");
   int inputNum = scanf("%d", &sizeOfNumbers);

    ptr = (int *) malloc(sizeof(int) * sizeOfNumbers);

    if(ptr == NULL || sizeOfNumbers <= 0 || inputNum != 1)
    {
        printf("oh no 😭 memory allocation failed\n");
        return 1;

    }


    for ( i = 0; i < sizeOfNumbers; i++)
    {
        /* code */
        printf("please enter the individual numbers [%d] ", i + 1);
        int input = scanf("%d", &ptr[i]);

       if(input != 1)
            break;
    }

    int max = ptr[0];  // ASING THE MAX TO THE FIRST ELEMENT.
    int min = ptr[0];   // ASING THE MIN TO THE SECOND ELELMENT.

    for ( i = 1; i < sizeOfNumbers; i++)
    {
        /* code */

        if(ptr[i] > max)
            max = ptr[i];
            if(ptr[i] < min)
                min = ptr[i];
                
    }
    
    printf("the max is %d\n", max);
    printf("the min is %d\n", min);

    free(ptr);  // FREE THE MEMORY.

    return 0;
    
}