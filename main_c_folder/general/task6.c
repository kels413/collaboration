#include <stdio.h>
// write a program that checks if a year is a leap year
int main(void)
{
	int year;

	printf("please enter a year to check if it is a leep year or not: ");
	scanf("%d", &year);

	if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		printf("\n%d is a leap year", year);
	else
		printf("%d  is not a leep year", year);

	return 0;
}