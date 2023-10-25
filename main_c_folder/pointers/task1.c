// Write a C program that uses pointers to swap the values of two integer variables. Your program should perform the following steps:

// Declare two integer variables, x and y, and initialize them with any values.
// Declare two integer pointers, ptrX and ptrY.
// Assign the addresses of x and y to ptrX and ptrY, respectively.
// Use pointers to swap the values of x and y without using a temporary variable.
// Print the values of x and y before and after the swap.
// Your program should demonstrate how pointers can be used to modify the values of variables indirectly. This assignment will help you practice the concepts of pointer assignment, dereferencing, and memory manipulation.

#include <stdio.h>

int main(void)
{

	int x = 10, y = 5;
	int *ptrX;
	int *ptrY;
	int *ptrQ;
    ptrX = &x;
	ptrY = &y;
	printf("the value of ptrX before swapping %d\n", *ptrX);
	printf("\nthe value  ptrY before swapping %d\n", *ptrY);

	// *ptrX = 5;
	// *ptrY = 10;
//  MODIFICATION

	*ptrX = *ptrX + *ptrY;
	*ptrY = *ptrX - *ptrY;
	*ptrX = *ptrX - *ptrY;
	printf("the value  of ptrX after swapping %d\n", *ptrX);
	printf("\nthe value of ptrY after swapping %d", *ptrY);


	return 0;



}



