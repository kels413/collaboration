#include <stdio.h>
#include <stdarg.h>

int varSum(int count, ...)
{
    va_list arg;

    va_start(arg, count);

        int sum = 0;

        for (int i = 0; i  < count; i++)
        {
            /* code */
           

            int value = va_arg(arg, int);

            sum += value;

            

    }

    return sum;
}

int main(void)
{

  int result =   varSum(5,4.4,4,4,4,4);

  printf("sum === %d\n", result);
}