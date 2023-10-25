#include <stdio.h>

float sumOfTwoNumbers(int num1, int num2)
{
    return num1 + num2;
}

int main(int argc, char** argv)
{
   float sum  = sumOfTwoNumbers(10, 10);

   printf("%f\n", sum);

   return 0;
}

