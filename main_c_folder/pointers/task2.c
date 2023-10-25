// Problem: Reverse an Array Using Pointers

// Write a C program that uses pointers to reverse the elements of an array. Your program should perform the following steps:

// Declare an array of integers with a fixed size (e.g., 5 elements) and initialize it with any values.
// Declare an integer pointer to point to the first element of the array.
// Declare another integer pointer to point to the last element of the array.
// Use pointers to swap the elements of the array in a way that the first element becomes the last element, the second element becomes the second-to-last element, and so on.
// Print the reversed array.
// Your program should demonstrate how pointers can be used to modify the elements of an array indirectly.




#include <stdio.h>

/**
firs let me do it using ordinary array and i will now try it using pointer may GOD help me Amen.
*/


int main(void)
{


	 int arr[] = {2,3,8,9,10,11,89,76,7,6,5,5,4,9,0};
	int arr_size = sizeof(arr) / sizeof(arr[0]);

	//  using regular array to solve it.
	// int start = 0;
	// int end = arr_size - 1;
	// // int new_arr[10];
	// while(start < end)
	// {
	// 	int temp;
	// 	temp = arr[start];
	// 	arr[start] = arr[end];
	// 	arr[end] = temp;
	// 	start++;
	// 	end--;
	// }
	// 	for(int i = 0; i < arr_size; i++)
	// 		printf("%d ", arr[i]);


			// USING POINTERS.
		int *arr_start = arr;
		int *arr_end = &arr[arr_size - 1];

			while(arr_start < arr_end)
			{
				int temp = *arr_start;
				*arr_start = *arr_end;
				*arr_end = temp;
				arr_start++;
				arr_end--;
			}

		for(int i = 0; i < arr_size; i++)
		printf("%d ",arr[i]);

		return 0;


}