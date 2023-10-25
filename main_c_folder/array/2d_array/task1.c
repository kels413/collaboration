// create a program that takes user input, organizes it into a 2D array, and then calculates the sum.

#include <stdio.h>
/**
 * total number of loops needed (9 loops i , j)
 *  declare two array.
 * find their size.
 * prompt the user for input.
 * use two for loop to get and store the inputs.
 * use another for loop to print the element.
 * then lastly a for loop to calc the sum.
 */
int main(void)
{
	int arr[3][3];
	int row_size = sizeof(arr) / sizeof(arr[0]);
	int column_size = sizeof(arr[0]) / sizeof(arr[0][0]);
	int sum = 0, i, j;

	// ACCEPTING INPUT FROM USER.
	printf("please enter 9 inputs, to display in 2D array and calc the sum\n");

	for (i = 0; i < row_size; i++)
	{
		for (j = 0; j < column_size; j++)
		{
			/* code */
			printf("Enter number at position [%d, %d]: ", i, j);
			scanf("%d", &arr[i][j]);
		}
		printf("\n");
	}

	// 	PRINTING THE ELEMENTS.
	printf("MATRIX\n");

	for (i = 0; i < row_size; i++)
	{

		for (j = 0; j < column_size; j++)
		{
			/* code */
			printf("%d ", arr[i][j]);
		}

		printf("\n");
	}
	printf("\n");

	//  CALCULATING THE SUM OF THE ELEMENTS.
	printf("2D ARRAY SUM\n");
	for (i = 0; i < row_size; i++)
	{
		for (j = 0; j < column_size; j++)
		{
			/* code */
			sum += arr[i][j];
		}
	}

	printf("%d ", sum);

	return 0;
}
