#include <stdio.h>
#include <string.h>
int main(void)
{

	//  int a = 10, b = 1, c = 9, d = 5, e = 3, f = 5;
	//  int *ptr;
	//  int *btr;
	//  int *ctr;
	// int* dtr;
	// int* ftr;
	// int* etr;
	//  ptr = &a;
	//  btr = &b;
	//  ctr = &c;
	//  dtr = &d;
	//  etr = &e;
	//  ftr = &f;

	// //  *ctr = 7;


 	//  btr = btr - ptr;
	//  printf("%d\n", btr);
	//  printf("%p\n", &btr);
	//  printf("%p\n", &ctr);
	//  printf("%p\n", &dtr);
	//  printf("%p\n", &etr);
	//  printf("%p\n", &ftr);

	int arr[8] = {4,5,3,2,6, 7 , 9 , 9};

	int *arr_ptr =  arr;
	int arr_size = sizeof(arr) / sizeof(arr[0]);
	int *arr_btr =  arr[arr_size];
	int arr_sub =   arr_ptr - arr_btr;
	printf("%d\n", *arr_ptr);
	// printf("%d\n", *arr_btr);
	printf("%d\n", arr_sub);










 	// btr = ptr;
	//  *btr = *ptr + *ctr - *ctr + *ptr - *btr;
	//  ptr = ptr + 10;

	// int arr[5] = {4,3,43,34,5};

	//  int *ptr = arr + 5;
	 	// int *arr_ptr = arr + 3;
	// printf("%p\n\n\n", &arr_ptr);
	//  printf("%p\n", ptr);
	//  printf("%p\n", &arr[5]);



	//  printf("%d\n", *btr);
	//  printf("%d\n", *ctr);






	return 0;

}

// #include "main.h"
// /**
//  * swap two integer - a function that swaps the values of two integers
// *
//  * @n: input
//  * Return: *a = *b
//  */
// void swap_int(int *a, int *b);
// {
// 	*a = *b;
// }



