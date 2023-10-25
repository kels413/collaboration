// Write a C program to check whether a given number is a prime number and a palindrome at the same time. Use functions to check for primality and palindromicity. The program should take an integer input and output whether it's a prime palindrome or not.

#include <stdio.h>
int main(void)
{
	int prime = 1, i, num;
	printf("please enter a number to check: ");
		scanf("%d", &num);

	for(i = 2; i < num; i++ )
	{
		if (num % i == 0){
			prime = 0;
			break;
		}
	}

	if(prime)
		printf("%d is a prime number\n",num);
	else
		printf("%d is not a prime number\n",num);
	return 0;



}