// #include <stdio.h>
// // Problem 4: Implement a function that takes an array of integers and its size as arguments and returns the maximum and minimum values using pointers.

// int max_min(int arr[],int size);

// int main(void)
// {
// int arr[5] = {3,3,5,4,1};
// size = sizeof(arr) / sizeof(arr[0]);
// // printf("max min: %d",max_min(arr,size)));

// int value = max_min(arr, size);

// printf("the max element is %d\n", *maxtr);
// printf("the min of element is %d\n", *mintr);

// return 0;
// }

// int max_min(int arr[], int size)
// {
// 	int max = arr[0], min = arr[0];
// 	size = sizeof(arr) / sizeof(arr[0]);

// 	int i = 0;

// 	int *maxtr = &max;
// 	int *mintr = &min;

// 	while(i < size)
// 	{
// 		if(arr[i] > maxtr)
// 			*maxtr = arr[i];

// 		if(arr[i] < mintr)
// 			*mintr = arr[i];
// 		i++;
// 	}

// 	return max , min;
// }


#include <stdio.h>

int max_min(int arr[], int size, int *maxtr, int *mintr);

int main(void) {
    int arr[5] = {3, 3, 59, 4, 0};
    int size = sizeof(arr) / sizeof(arr[0]); // Declare 'size' and calculate it

    int max, min; // Declare variables to hold max and min values

    int value = max_min(arr, size, max, min); // Pass max and min as pointers


    return 0;
}

int max_min(int arr[], int size, int *maxtr, int *mintr) {
    *maxtr = arr[0]; // Initialize max and min with the first element
    *mintr = arr[0];

    int i = 1; // Start from the second element

    while (i < size) {
        if (arr[i] > *maxtr)
            *maxtr = arr[i];

        if (arr[i] < *mintr)
            *mintr = arr[i];

        i++;
    }

 	printf("The max element is %d\n", *maxtr);
    printf("The min element is %d\n", *mintr);
    return *maxtr; // Return the max value.


}


// #include <stdio.h>

// void max_min(int arr[], int size, int *maxtr, int *mintr);

// int main(void) {
//     int arr[5] = {3, 3, 5, 4, 1};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     int max, min;

//     max_min(arr, size, &max, &min);

//     printf("The max element is %d\n", max);
//     printf("The min element is %d\n", min);

//     return 0;
// }

// void max_min(int arr[], int size, int *maxtr, int *mintr)
// {
//     *maxtr = arr[0];
//     *mintr = arr[0];

//     for (int i = 1; i < size; i++) {
//         if (arr[i] > *maxtr)
//             *maxtr = arr[i];

//         if (arr[i] < *mintr)
//             *mintr = arr[i];
//     }
// }
