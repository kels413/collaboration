#include <stdio.h>
//  what will this function result. Gate question.

int jumble(int x, int y)
{
    x = 2 * x + y;
    return x;
}

void exampleFunction() {
   static int count = 0;
    count++;
    printf("Count: %d\n", count);
}

//////////////////// READ ABOUT STATIC VARIABLES

int main(void)
{

    exampleFunction();
    exampleFunction();
    exampleFunction();
    exampleFunction();
    
//     int x = 2;
//     int y = 5;

//     y = jumble(y, x);
//     x = jumble(y, x);
    
//     printf("%d\n", x);

    return 0;

}