#include <stdio.h>
#include <stdarg.h>



/**Sure, here's a variadic function-related question to test your knowledge:

**Question**: Write a C function called `calculateAverage` that calculates the average of a variable number of integers. The function should take a variable number of arguments and return the average as a double. Make sure to handle the case where no arguments are passed.

Once you've written the function, provide an example of how you would use it in a `main` function to calculate the average of a set of integers.

Feel free to implement and test the function, and then share your solution when you're ready!*/



float calcAverage(int count, ...)

{
    double average;
    float sum;

    va_list arg;

    va_start(arg, count);

    if(count == 0)
    {
        fprintf(stderr, "please write into the function");
        return -1.0;
    }

    for (int i = 0; i < count; i++)
    {
        /* code */

      float value  = va_arg(arg, float);

      sum +=value;
    }

    average = sum / count;


    va_end(arg);
    
    return average;
}

int main(int argc, char** argv)
{

    float ave = calcAverage(4,4.3,4.5,6.7,4.6);


    printf("%f\n", ave);
}

