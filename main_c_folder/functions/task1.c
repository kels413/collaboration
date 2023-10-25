#include <stdio.h>
// Array Manipulation:
//Create functions to find the sum, average, maximum, and minimum value in an array of integers.

// void find(int arr[],int size, int sum, float average,int max, int min);
// int main(void)
// {
//     int arr[5] = {1, 2, 3, 4, 5};
//     int size, max, min, sum;
//     float average;
//     find(arr,size,sum,average,max,min);
//     printf("sum : %d\n average: %f\nmax:%d\nmin:%d\n",sum, average,max,min);
//     return 0;
    
// }


// void find(int arr[],int size, int sum, float average,int max, int min)
// {
//     size= sizeof(arr) / sizeof(arr[0]);
//     max = arr[0];
//     min = arr[0];
//     sum = 0;
//     int i;
    
//     for (i = 1; i < size; i++)
//     {
//         /* code */
//         if(arr[i] > max)
//             max = arr[i];
//             if(arr[i] < min)
//                 min = arr[i];
//         sum += arr[i];
//     }

//     average = sum / size;
    
// }



//  using a regular way first.


int max(int arr[], int size);
int find_min(int arr[], int size);
int find_sum(int arr[], int size);
float find_average(int arr[], int size);



int main(void)
{
    int arr[] = {10,2,3,4,5,10};
    int size = sizeof(arr) / sizeof(arr[0]);

    
    // found
    int max_result = max(arr,size);
    int min_result = find_min(arr,size);
    int sum_result = find_sum(arr,size);
    float average_result = find_average(arr,size);
    printf("the max is %d\n", max_result);
    printf("the min is %d\n", min_result);
    printf("the sum is %d\n", sum_result);
    printf("the average is %.2f\n", average_result);

    
    return 0;

}


int find_min(int arr[], int size)
{
   int min = arr[0];
    for(int i = 1; i < size; i++)
        if(arr[i] < min)
            min = arr[i];
    
    return min;
}
 
int max(int arr[], int size)
{
    int max = arr[0];
    for(int i = 1; i < size; i++)
        if(arr[i] > max)
            max = arr[i];
    
    return max;
}

int find_sum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        /* code */
        sum += arr[i];
    }

    return sum;
    
}

float find_average(int arr[], int size)
{
    int  average = find_sum(arr, size);
    return (float) average / size;  // type casting, to convert average to int cause when the data type of sum is int. 

}