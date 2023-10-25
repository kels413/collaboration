#include <stdio.h>
#include  <stdarg.h>

void print(int count, ...);

int main(int argc, char** argv)
{
    print(5, 2, 3, 4, 5, 56);
}

// va_list va_start va_arg va_end va_copy

void print(int num_arg, ...)
{

   va_list arg;

    va_start(arg, num_arg);

    int *ptr;

    for (int i = 0; i < num_arg; i++)
    {
        /* code */

        float result = va_arg(arg, float);

        if(arg == 'd')
        {

        printf("the numbers are %d\n", result);
        }


    }

    va_end(arg);
}
