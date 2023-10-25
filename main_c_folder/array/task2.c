#include <stdio.h>
// Create a program to find the largest element in an array of integers.

int main(void){

int arr[] = {4, 5, 6, 6, 4, 9, 8};
int size = sizeof(arr) / sizeof(arr[0]);
int i, largest_arr = arr[0];

for(i = 1; i < size; i++)

	if(arr[i] > largest_arr)
			largest_arr = arr[i];

	printf("the largest number is %d\n", largest_arr);
	return 0;
}