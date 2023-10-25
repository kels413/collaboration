#include <stdio.h>
//  what will this code result.

void f(int *p, int m)
{
    m = m + 5;
    *p = *p + m;
}
int main()
{
    int i = 5, j = 10;
   

    f(&i,j); // called function.

    printf("%d\n", i + j);

    return 0;
}