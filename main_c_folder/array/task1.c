#include <stdio.h>
// Write a C program to find the sum of all elements in an array.

int main(void){

int i, sum = 0;
int arr[] = {20, 22, 12, 72, 3};
int arr_size = sizeof(arr) / sizeof(arr[0]);

	for(i = 0; i < arr_size; i++)
	{
		sum += arr[i];
	}

	printf("the sum of the arr is %d", sum);
	return 0;

}