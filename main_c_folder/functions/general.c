// #include <stdio.h>

// int sum();

// int main()
// {

// 	int result = sum();
// 	printf("sum === %d", result);

// 	return (0);
// }

// int sum()
// {
// 	int num, sum = 0;
// 	int i = 1, input;
// 	printf("please input two numbers to get the sum,Negative number/ non interger to stop calculation\n\n");

// 	while (1)
// 	{
// 		/* code */
// 		printf("Enter number %d: ", i++);
// 		input = scanf("%d", &num); // store the scanf in a variable so i can use to check if the user inputed a string or a number.

// 		if (input != 1 || num < 0)
// 			break;

// 		sum += num;

// 		//  the code runs infintely cause we are not modifying the value of i;
// 	}

// 	return sum;
// }

//   WAYS OF USING FUNCTION.

// #include <stdio.h>
// // Function declaration
// int calculateSum(int array[], int size);

// int main()
// {
// 	int numbers[] = {3, 7, 1, 9, 2};
// 	int size = sizeof(numbers) / sizeof(numbers[0]);
// 	int sum = calculateSum(numbers, size);
// 	printf("Sum of array elements: %d\n", sum);
// 	return 0;
// }

// // Function definition
// int calculateSum(int array[], int size)
// {

// 	int sum = 0;
// 	for (int i = 0; i < size; i++)
// 	{
// 		sum += array[i];
// 	}
// 	return sum;
// }

// #include <stdio.h>
// void modifyValues(int *a, int *b);
// int main()
// {
// 	int num1 = 2, num2 = 3;
// 	printf("num1:%d num2:%d\n", num1, num2);

// 	 modifyValues(&num1, &num2);
// 	printf("num1:%d num2:%d", num1, num2);
// 	return 0;
// } 
// void modifyValues(int *a, int *b)
// {

// 	*a = *a * 2;
// 	*b = *b + 5;
// }


//     PASS BY reference.
//  a function that prints two numbers.

// #include <stdio.h>
// 	// int num1 = 0;
// 	// int num2 = 2;
// 	// printf("num1 is : %d\n num2 is %d\n", num1, num2);

// void numbers(int*, int*);
// int main(void)
// {
// 	int num1 = 2, num2 = 5;
// 	printf("num1 is : %d\n num2 is %d\n", num1, num2);

// 	printf("\n");
// 	numbers(&num1, &num2);
// 	printf("\n");
// 	// printf("num1 is : %d\n num2 is %d\n", *num1, *num2);

// 	return 0;


// }

// void numbers(int *num1, int *num2)
// {
// 	*num1 = 10;
// 	*num2 = 20;

// 	printf("num1 is : %d\n num2 is %d\n", *num1, *num2);
// }


// #include <stdio.h>

// void sumN(int, int, int);

// int main(void)
// {
// 	int num1 = 4;
// 	int num2 = 5;

// 	int sum;
// 	sumN(num1,num2, sum);

// 	printf("%d \t%d\n ", num1 , num2);
	
// }

// void sumN(int num1, int num2, int sum)
// {
// 	num1 = 10 ; 
// 	 num2 = 10;

// 	sum = num1 + num2;
// 	printf("%d \t%d\n sum : %d\n", num1 , num2, sum);
// }

//  converting to a function that needs to return a value.


// void sumN(int, int);

// int main(void)
// {
// 	int num1;
// 	int num2;
// 	// int sum;
// 	 sumN(num1,num2);
// 	// printf("%d",value);

	
// }

// void sumN(int num1, int num2)
// {
// 	num1 = 10 ; 
// 	 num2 = 5;

// 	printf("%d %d",num1,num2);
// 	// sum = num1 + num2;
// 	// return sum;
// }

//  PASSING BY REFERENCE.

#include <stdio.h>
void sum(int*, int*);

int main(void)
{
	int num1 = 20;
	int num2 = 0;
	// printf("%d \t%d\n", num1, num2);

	sum(&num1, &num2);

	printf("%d \t%d\n", num1, num2);

	return 0;
}

void sum(int *num1, int *num2)
{
	*num1 = 1;
	*num2 = 10;
	int **ptr = &num1; 

	int result = *num1 + *num2;
	printf("%d \t%d\n", *num1 , *num2);
	printf("num1: %p\n num2 :%p\n", num1, &num2);
	printf("the address of ptr is %p\n",*ptr);

	printf("Sum: %d\n", result);
}

