#include <stdio.h> //please make sure this is always at the file line of your c document
// #define size    //you have to also complete the define size macro statement
// Write a C program to find the factorial of a non-negative integer entered by the user. The factorial of a non-negative integer n is the product of all positive integers less than or equal to n.

/*
of a positive number.
 a factorial ===n!
 eg
 5! = (1*2)*3*4*5
*/

//however i dont even think it will be needed in this example

int main(void){
unsigned int num;
unsigned long int factorial = 1;

printf("Enter a number to determine its factorial : "); //(always remember your "\n" escape sequence)
scanf("%u",&num);


for(int i = num; i > 0; i--){
	factorial = factorial * i;
}
printf("factorials of %d is %lu\n", num, factorial);

return 0;
}

//from the above code i could basically tell that you are confused about certain basic concept
//i would advice that you visit some of the initial
//thank you ...review by David Jackson