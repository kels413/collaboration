#include <stdio.h>
#include <string.h>

int main()
{
	char arr[3][5][20]; // Array of characters to store strings
	int row_size = sizeof(arr) / sizeof(arr[0]);
	int column_size = sizeof(arr[0]) / sizeof(arr[0][0]);

	int i, j;
	for (i = 0; i < row_size; i++)
	{
		for (j = 0; j < column_size; j++)
		{
			printf("Enter number at position [%d, %d]: ", i, j);
			scanf("%s", arr[i][j]);

			// int num;
			// if (sscanf(arr[i][j], "%d", &num) == 1 && num >= 0)
			// {
			// 	continue;
			// }
			// else
			// {
			// 	break;
			// }
		}
		printf("\n");
	}

	printf("MATRIX\n");
	for (i = 0; i < row_size; i++)
	{
		for (j = 0; j < column_size; j++)
		{
			printf("%s ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}
