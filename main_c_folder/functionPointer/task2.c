#include <stdio.h>

/**
 * sum - prints sum of two numbers
 * 
 * @num1: - parameter 1.
 * @num2: - parameter 2. 
 * @return: sum.
 */
int sum(int num1, int num2)
{
    int sum = num1 + num2;
    return sum;
    // printf("%d\n", num1 + num2);
}
/**
 * sub - prints sub of two numbers
 * 
 * @num1: - parameter 1.
 * @num2: - parameter 2. 
 * @return: sub.
 */
int sub(int num1, int num2)
{
    int sub = num1 - num2;
    return sub;

    // printf("%d\n", num1 - num2);
}

/**
 * sum - prints sum of two numbers
 * 
 * @num1: - parameter 1.
 * @num2: - parameter 2. 
 * @return: sum.
 */
int total(int (*ptr)  (int, int))
{
    int num1 = 10, num2 = 7;
    int total = ptr(num1, num2);

    return total;
}

int main(int argc, char** argv)
{
    int sumTotal = total(sum);
    int subTotal = total(sub);

    printf("%d\xA", sumTotal);
    printf("%d\xA", subTotal);
}
