/*
Question 5:
Implement a basic calculator in C that can perform addition, subtraction, multiplication, and division. The program should take two numbers and an operator (+, -, *, or /) as input and display the result.
*/
#include <stdio.h>
int main(void){

double num1, num2, result;
char operator;



printf("Enter the operator to perform the desired  calcultion (+, -, *, / ) : ");
scanf("%c", &operator);

printf("please input first number : ");
scanf("%lf", &num1);

printf("please input second number : ");
scanf("%lf", &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error: Division by zero\n");
                return 1;
            }
            break;
        default:
            printf("Error: Invalid operator\n");
            return 1;


	}

	printf("Result: %.1lf\n", result);
}