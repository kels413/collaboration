/*
Question 2:
Given an array of integers, write a C program to find the maximum and minimum elements in the array.
*/

#include <stdio.h>
#define size 100

int main(void){

int  arr[size] = {3,4,6,4,6, 54, 9,15,10};
int maxNumber = arr[0];
int minNumber = arr[0];

for(int i = 0; i < size; i++){
	if(arr[i] > maxNumber){
		maxNumber = arr[i];
	}

	 if(arr[i] < minNumber){
		minNumber = arr[i];
	}
}
printf("The max number is %d\n",maxNumber);
printf("The min number number is %d\n",minNumber);

return 0;
}



