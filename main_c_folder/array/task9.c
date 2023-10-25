#include <stdio.h>

/**
 * write a program that sorts an array in ascending order
*/


int main(void)
{
    int arr[10] = {2,3,4,10,5,32,5,9,10,4};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    int start = arr[0];
    int end = arr[1];

    int i = 1;

    while (i < arr_size)
    {
        /* code */

        if(start > end)
        {
            
            int temp = start;
            start = end;
            end = temp;

        }

        printf("%d\n", arr[i]);
        i++;
    }


    return 0;
}