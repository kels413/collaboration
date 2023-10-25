#include <stdio.h>

// "Utilizing a function pointer, address this task: Allow the user to input their desired arithmetic operation choice, including addition, subtraction, multiplication, or division, and then perform the selected operation."


int calcAdd(int num1, int num2)
{
    return num1 + num2;
}



int calcSub(int num1, int num2)
{
    return num1 - num2;
}



int calcMultiply(int num1, int num2)
{
    return num1 * num2;
}



int calcDivide(int num1, int num2)
{
    return num1 / num2;
}


int main(int argc, char** argv)
{

    int num1, num2;
   char sign;
    int (*ptr[10])(int, int) = {calcAdd, calcSub, calcMultiply, calcDivide};

    printf("please enter a sign 0 to add or 1 to subtract or 2 to multiply or 3 to divide or 4 to multiply ");

    scanf("%c", &sign);

    printf("Enter the two numbers ");
    scanf("%d %d", &num1, &num2);


    if(sign == '+'  || sign  == '-' || sign == '*' || sign == '/' )
    {
        int result = ptr[sign](num1, num2);

        printf("%d\n", result);
    }

    return (0);
}

