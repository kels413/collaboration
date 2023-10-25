#include <stdio.h>

int main(void) {
    int min1, min2, i;
    int arr[] = {0, 1, 4, 2, 6, 7, 8, 9, 3, 9, 9};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    // Set initial values of min1 and min2 as the first two elements
min1 = arr[0] < arr[1] ? arr[0] : arr[1];
min2 = min1;


    for (i = 2; i < arr_size; i++) {
        if (arr[i] < min1) {
            min2 = min1; // Update min2 to the previous min1
            min1 = arr[i]; // Update min1 to the new value
        } else if (arr[i] < min2 && arr[i] != min1) {
            min2 = arr[i]; // Update min2 to the new value
        }
    }

    printf("The second smallest value is %d\n", min2);
    return 0;
}
