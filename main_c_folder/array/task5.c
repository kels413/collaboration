#include <stdio.h>
// Create a C program to reverse the elements of an array in-place.
/**
Initialize start = 0 (points to the first element)
Initialize end = size - 1 (points to the last element)

While start < end
    Swap elements at arr[start] and arr[end]
    Increment start
    Decrement end
*/

int main(void)
{
	int arr[] = {1, 2, 3, 4, 8};
	int arr_size = sizeof(arr) / sizeof(arr[0]);

	int start = 0;
	int end = arr_size - 1;


	while(start < end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++; end--;

	}

	int i;
	printf("reversed arr: ");
	for( i = 0; i < arr_size; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}



