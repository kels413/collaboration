//  CALCULATE THE SUM OF TWO ARRAYS FROM THE USER AND STORE THEM IN ANOTHER ARRAY.

//   REMEMBER TO USE THIS AS TEACHING IN THE NEXT CLASS.
#include <stdio.h>

int main(void)
{
	int arr_1[2], arr_2[2], arr_3[10]; //declare array
	int arr_size = sizeof(arr_1) / sizeof(arr_1[0]);//
	// int arr_size_2 = sizeof(arr_2) / sizeof(arr_2[0]);//
	// int i;


	// while(i < arr_size)
	// {

	// 	printf("please enter element %d to count ", i + 1);
	// 	scanf("%d", &arr_1[i]);
	// 	i++;
	// }

	// i = 0; // RESET THE VALUE OF I TO 0 AGAIN CAUSE IT HAS BEEN CHANGED IN THE INITIAL WIHLE LOOP.
	// while(i < arr_size_2)
	// {

	// 	printf("please enter element %d to count ", i + 1);
	// 	scanf("%d", &arr_2[i]);
	// 	i++;
	// }

	// i = 0;
	// while(i < arr_size)
	// {

	// 	arr_3[i] = arr_1[i] + arr_2[i];
 	// 	printf("%d ",arr_3[i]);
	// 	i++;
	// }




//    USING FOR LOOP.

	int i;
	printf("please enter array element to count ");
	for(i = 0; i < arr_size;i++)
		scanf("%d",&arr_1[i]);

	for(i = 0; i < arr_size; i++)
		scanf("%d",&arr_2[i]);

	for(i = 0; i < arr_size; i++){
		arr_3[i]=arr_1[i]+arr_2[i];
		printf("%d",arr_3[i]);
	}

	return 0;
}