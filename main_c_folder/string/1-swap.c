/*Write a function that swaps the values of two integers.*/
#include <stdio.h>
#include "main.h"

/**
 * void swap_int(int *a, int *b) - a function that swaps the values of
 * two integers 
 * @a - the first parameter  
 * @b - the second parameter
 */

void swap_int(int *a, int *b)
{

    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;


    // printf("NUM1 = %d\n", *a);
    // printf("NUM2 = %d\n", *b);

}