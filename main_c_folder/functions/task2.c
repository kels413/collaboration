#include <stdio.h>
//  write a function that have no return type and no argument, and find the following (sum,difference, multiplication, average, max, min, of the number the user entered.  and when the user is done inputing the numbers ask the user if he/she wants to continue, if yes prompt the use to input a number and find the fibonacci of the number. N:B == each funtion for different problem.


int sum_num(int);
int difference(int);


int main (void)
{
    printf("please put an input to calculate the following(sum, difference, average, max and min)\n");
    int num;
   int get_sum = sum_num(num);
   int get_difference = difference(num);
   printf("\n\nthe sum is %d", get_sum);
   printf("\n\nthe difference is %d", get_difference);

}

int sum_num(int num)
{

    int sum = 0,i = 1;
    while (1)
    {   
        /* code */
        printf("ENTER num %d ", i++);
        int input = scanf("%d", &num);

        if(input != 1 || num < 0)
            break;

        sum += num;
    }


    return sum;

}

int difference(int num)
{
     int difference = 0,i = 1;
    while (1)
    {   
        /* code */
        printf("ENTER num %d ", i++);
        int input = scanf("%d", &num);

        if(input != 1 || num < 0)
            break;

        difference -= num;
    }


    return difference;

}


       

