#include <stdio.h>
#include  <stdlib.h>
// #include "main.h"


int main(void)
{

    int arr[5] = {2,3,4,5,6};
    int calcsize = arr[2];

    int size = sizeof(arr);


    printf("%d\n", calcsize);
    printf("%d\n",size);
    return 0;

}