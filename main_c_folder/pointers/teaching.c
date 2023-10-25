#include <stdio.h>

//  what is pointer
//  how to declare a pointer and initialise a pointer
// accessing data through pointers

// segmentation error 11



// pointer arithemtic
// arrays and pointers
// pointers to pointers
// problems on pointers



// 	int david = 5;
// float miriram =4;
// 	// david = 7;
	//  int *p = &miriram;
// 	int value = *p;

// 	//  *p = 10;
	// printf("%p\n", value);

// 	// printf("%d\n",*p);
// 	// printf("%d", david);



	// int arr[5] = {4,3,2,1,1};

	// int *p = arr;
	// int *q = &arr[2];

	// printf("%p\n", p);
	// printf("%p\n", q);


// DIFFERENCE BETWEEN SEGMENTATION FAULT AND BUS ERROR.

// SEGMENTATION fault.
    // int *ptr = NULL;


//    int *ptr =  10;
   				// 09439083u4;
				 // Dereferencing a null pointer
// printf("value of ptr %d\n", *ptr);

	// printf("value of ptr %d\n", *ptr);

// BUS ERROR.
    // int *ptr;
    // *ptr = 10; // Dereferencing an uninitialized pointer

	// int num1 = 20;
	// 	int num2 = 5;
	// 	int *sum = &num2;
	// 	int *btr= &num2;
	// 	int *ptr = &num1;
	// 	*sum = *ptr + *btr;

	// printf("value of ptr %d\n", *sum);
	// printf("value of ptr %p\n", a);





    //  examples OF ERROR.

//  syntax error.
// abort trap error (6).
//  bus error.
// segmentation fault (segfault) (11).

// int num1 = 4;
// printf("%s",num1);

//  	  POINTER TO POINTER.

// int num1 = 5;
// // int num2 = 10;

// int *ptr = &num1;
// // int *btr = &num1;
// int **ctr = &ptr;
// int ***dtr = &ctr;
// int ****etr = &dtr;
// int *****ftr = &etr;




// // printf("The memory addressof num2 %p\n", btr);
// printf("\nThe memory address of num1 %p\n", &ptr);
// printf("The memory adress of num2 %p\n", &ctr);
// printf("The memory adress of num2 %p\n", &dtr);
// printf("The memory adress of num2 %p\n", &etr);
// printf("The memory adress of num2 %p\n",****ftr);


//   PROBLEM 1. swap two numbers using pointers, dont create a temporary variable, dont use a function.


					// SOLUTION.

int main(void)
{
int num1 = 1000;
int num2 = 2000;

// int temp;
// temp = num1;
// num1 = num2;
// num2 = temp;




int *ptr = &num1;
int *btr = &num2;
int *etr = ptr;

ptr = btr;
btr = etr;


// 1000 1000 + 2000 === 3000.
// *ptr = *ptr + *btr;
// //
// // 2000 3000 - 2000 === 3000.
// *btr = *ptr - *btr;
// *ptr = *ptr - *btr;



printf(" num2  ==%d\n", *ptr);
printf("num1 == %d\n", *btr);
return 0;


}