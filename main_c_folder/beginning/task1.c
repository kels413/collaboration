#include <stdio.h>
#include "header.h"
#include "stringCount.h"
#include "circle.h";
// #define size 5


int main(void)
{

    
    int sum = add_two_number(10, 10);
    printf("the sum is %d\n",sum);

    #ifndef size
    printf("GOD IS GOOD");
    #endif

    char  str[]  = {"kelly is a good boy"};

    int  result = lencount(str);

    printf("%d",result); 




    return 0;
}