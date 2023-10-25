#include <stdio.h>


void miriam(int num1, int num2);


int main()
{
    //  function parameter passingg mechanism.
    int kelly = 10;
    int david = 10;

    printf("kelly : %p\n", &kelly);
    printf("david : %p\n", &david);

     miriam(kelly, david);

    printf("\nkelly : %d\n", kelly);
    printf("david : %d\n", david);




    //  call by value.
    //  call by reference.

    //  a calling is the function that calls other function or where we call our function, or where we consume our function.

        // a called function is a function we call and pass an argument to perform a specific task.

}

void miriam(int num1, int num2)
{
    //  call by value.
    
    num1 = 5, num2 = 3;

    printf("num 1 : %p\n", &num1);
    printf("num 2 : %p\n", &num2);



    printf("num1 is %d\n", num1);
    printf("num2 is %d" ,num2);



    // return num1;

}
