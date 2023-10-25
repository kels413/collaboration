#include <stdio.h>
// Write a function to count the number of even  and odd number in an array.

int main(void){

	int arr[] = { 4, 4, 5, 6, 9, 8, 0, 0, 2, 4, 9, 4, 5, 0, 5, 3 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int even, odd, i;
		for(i = 0; i < size; i++){
				if( arr[i] % 2 == 0)
						even++;
				else
						odd++;
		}
	printf("The number of the even number is %d\n",even);
	printf("\nThe number of the odd number is %d\n",odd);

	return 0;
}