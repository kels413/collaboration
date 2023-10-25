#include <stdio.h>
// Problem 1: Swap two numbers using pointers without using a temporary variable.

int main (void)
{
	int num1 = 20;
	int num2 = 1000;

  	int *ptr = &num1;
  	int *btr = &num2;

//  basically add the pointers together and assign the result to any pointer you wish to.
	*ptr = *ptr + *btr;//  subtract the two pointers, then assign again tho the other pointe, that way the initial value of one is still not changed.

	*btr = *ptr - *btr;//  now take the unchange pointer and subtract the value of the the other pointer that is now having the value of the subtraction made.

	*ptr = *ptr - *btr;


	// print the pointers.
	printf("value of num1(*ptr) = %d\n", *ptr);
	printf("value of num2(*btr) = %d\n", *btr);

	return 0;





}