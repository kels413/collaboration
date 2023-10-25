#include <stdio.h>
#include <stdlib.h>


int main(int argc, char * argv[])
{

   
    int i, sum = 0;
    for (i = 1; i < argc; i++)
    {
        /* code */

        // printf("%s\n %d\n", argv[i],i );


        sum = sum + atoi(argv[i]);



    }
        printf("%d\xA",sum);


}