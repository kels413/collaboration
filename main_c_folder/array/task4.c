#include <stdio.h>
// Given an array, write a program to calculate the average of its elements.

int main(void)
{

float sum = 0, average;
int i;
float arr[] = { 4.4, 4.3, 4.5, 6.4, 7.5, 5.7, 8.6, 4.52 };
int size = sizeof(arr) / sizeof(arr[0]);

	for(i = 0; i < size; i++)
			sum += arr[i];
		average = sum / size;

		printf("sum is %.2f\n", sum);
		printf("\nAverage is %.2f\n", average);

	return 0;

}