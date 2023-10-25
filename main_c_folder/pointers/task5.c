#include <stdio.h>
// Problem 3: Write a program that reads an array of integers using pointers and calculates the sum of its elements.


int main(void)
{
	int arr[5] = {3,2,1,5,6};
	int arr_size = sizeof(arr) / sizeof(arr[0]);


	int *ptr = arr;
	int total = 0, i = 0;

	while(i < arr_size)
	{
		total += *(ptr + i);
		i++;
	}

	printf("the sum of the array is === %d\n", total);
	return (0);

}