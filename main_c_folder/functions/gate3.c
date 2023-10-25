#include <stdio.h>
//  what will this function print.

int r()
{
    static int num = 7;
    return num--;
}

int main()
{
    for (r(); r(); r())
    {
        /* code */
        printf("%d", r());
    }
    
}
