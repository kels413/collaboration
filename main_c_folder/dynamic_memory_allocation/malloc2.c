#include <stdio.h>
#include <stdlib.h>


/**
 * Certainly! Here's a question that fits the provided solution:

**Question:**

Write a C program that allows a user to create a dynamically sized integer array. The program should:

1. Ask the user to input the size of the array.
2. Ensure that the input size is a positive number; if not, display an error message and terminate the program.
3. Dynamically allocate memory for the integer array based on the user's input size.
4. Prompt the user to enter integer elements for the array.
5. Display the entered array elements.
6. Free the dynamically allocated memory to avoid memory leaks.

Your program should allow users to create and populate arrays of varying sizes.

Feel free to use the provided code as a reference when implementing your solution.
*/

int main(void)
{
    int arraySize;
    printf("Enter the size of the array ");
    int input =  scanf("%d", &arraySize);

    if(input != 1 || arraySize <= 0)
    {   
        printf("please input a valid number");
        return 1;
    }

    int *result = (int *) malloc(sizeof(int) * arraySize);

//  CHECKING IF THE MEMORY WAS SUCCESSFULLY ALLOCATED;
    if(result == NULL)
    {
        printf("memory allocation failed\n");
        return 1;
    }

    //  collecting the array elements
    int arrayElement;
    for (int i = 0; i < arraySize; i++)
    {
        /* code */
        printf("please enter the array elements %d\n", i + 1);
        scanf("%d", &result[i]);
    }
    
    //  printing the elements 

    for (int i = 0; i < arraySize; i++)
    {
        /* code */

        printf(" the array elements are %d\n", result[i]);
    }

    free(result);

    return 0;
}