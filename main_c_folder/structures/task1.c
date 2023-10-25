#include <stdio.h>
#include <stdlib.h>

/**
 * Question 1: Create a structure named Book with the following members: title, author, price, and publishedYear. Then, write a program that declares an array of 3 Book structures, initializes them with sample data, and prints the details of each book.
 */

    // struct  Book
    // {
    //     /* data */

    //     char title[100];
    //     char author[100];
    //     int price;
    //     int publishedYear;
    // };

        // int i;
        // struct Book books[3] = {

        //     {"kelly goes to school", "kelly", 1000, 2004},

        //     {"okoye goes to school", "okoye", 300, 2005},

        //     {"ifeanyi goes to school", "ifeanyi", 100, 2007},

        // };

        // for ( i = 0; i < 3 ; i++)
        // {
        //     /* code */
        //     printf("%d\n", i + 1 );
        //     printf("%s\n", books[i].title);
        //      printf("%s\n", books[i].author);
        //       printf("%d\n", books[i].price);
        //        printf("%d\n", books[i].publishedYear);
        // }


// void var(int* x);
// //  DRIVERS CODE.
// int main(int argc, char** argv)
// {

//         int num = 10;
//         var(&num);
//         printf("%d\n",num);
// }

// void var(int* x)
// {
//         *x = 19;
// }

#include <stdio.h>
#include <stdarg.h>

int sumIntegers(int count, ...)

ellipses










//  {
//     va_list args;
//     va_start(args, count);

//     int sum = 0;
//     for (int i = 0; i < count; i++) {
//         int value = va_arg(args, int);
//         sum += value;
//     }

//     va_end(args);
//     return sum;
// }

// int main() {
//     int result = sumIntegers(10, 10, 20, 3.0, 40, 50,10,3,4,5,6);
//     printf("Sum: %d\n", result);
//     return 0;
// }
