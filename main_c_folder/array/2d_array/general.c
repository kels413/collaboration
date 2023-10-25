#include <stdio.h>
int main(void)
{

	// int arr[5][8] =
	// 	{
	// 		{5, 3, 2, 3, 4, 5, 3, 1},
	// 		{4, 3, 2, 4, 5, 5, 3, 1},
	// 		{2, 3, 2, 4, 5, 5, 3, 1},
	// 		{9, 2, 5, 4, 4, 5, 3, 1},
	// 		{4, 9, 2, 3, 4, 5, 3, 1},
	// 	};

	// int row_size = sizeof(arr) / sizeof(arr[0]);		  // row size;
	// int colunm_size = sizeof(arr[0]) / sizeof(arr[0][0]); //  column size.

	// printf("row size is == %d\n", row_size);
	// printf("column size is === %d\n", colunm_size);

	// //  PRINTING THE ARRAYS.

	// for (int i = 0; i < row_size; i++)
	// {
	// 	/* code */
	// 	for (int j = 0; j < colunm_size; j++)
	// 	{
	// 		/* code */
	// 		// printf("%d ", arr[i][j]);
	// 		printf("a[%d][%d] = %d\n", i, j, arr[i][j]);
	// 	}
	// 	printf("\n");
	// }

	// int arr_2[2][3] =
	// {
	// 	{3, 4, 2},
	// 	{4, 2, 2}
	// }
	// same as this
	// int arr_2[3][3] =
	// 	{
	// 		{1, 1, 1}};

	// for (int i = 0; i < 3; i++)
	// {
	// 	for (int j = 0; j < 3; j++)
	// 	{
	// 		printf("%d ", arr_2[i][j]);
	// 	}
	// 	printf("\n"); // Move to the next row
	// }

	// printf("%d\n", arr[3][7]); //  1 g
	// printf("%d\n", arr[3][6]); //  3  g
	// printf("%d\n", arr[2][3]); //  4  g
	// printf("%d\n", arr[1][6]); //  3  g
	// printf("%d\n", arr[4][2]); //  2 g
	// printf("%d\n", arr[2][4]); //  5  g
	// printf("%d\n", arr[3][3]); //  4  g

	// int *ptr = &arr_2[0][0];
	// printf("%d ", *ptr);

	// HOW TO GET THE LENGTH OF THE ELEMENTS.
	//    total size of the array ==  4 * 5 * 5 ==  100.
	//     size of row ==   4 *   5  =  20rows.
	// 	row lenght ===  100 / 20 ===    5row.
	//   column length ===  20 / 4 ====     5column.

	// ACCESSING THE ELEMENTS.

	// printf("%d\n", arr[1][1]); //

	int arr[3][5];

	int row_size = sizeof(arr) / sizeof(arr[0]);
	int column_size = sizeof(arr[0]) / sizeof(arr[0][0]);

	// accepting input from the user;
	int i, j;
	for (i = 0; i < row_size; i++)
	{
		/* code */
		for (j = 0; j < column_size; j++)
		{
			/* code */

			if (&arr[i][j] == -1 && arr[j][i] != 'c')
				break;
			else
			{
				printf("Enter numbers at position [%d, %d]: ", i, j);
				scanf("%d", &arr[i][j]);
			}
		}
		printf("\n");
	}

	printf("MATRIX\n");
	for (i = 0; i < row_size; i++)
	{
		/* code */
		for (j = 0; j < column_size; j++)
		{
			/* code */
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}

// | vertical line
// |
// |
// |
// |
// |
// |

// ________________________ horizontal line.
