#include <stdio.h>
#include "main.h"
#include <string.h>

// #define SIZE 50

int main(void)
{
    /*QUESTION 1*/
    int *p;
    reset_to_98(p); // FUNCTION CALL (1);

    /*QUESTION 2*/
    int num1 = 10;
    int num2 = 20;
    int *ptr = &num1;
    int *btr = &num2;
   
    swap_int(ptr, btr); // FUNCTION CALL (2);
    printf(" main num1 = %d\n main num2 = %d\n", num1, num2);


    /*QUESTION 3*/
    char str[] = {"kelly is good boy"};
    int strlength = _strlen(str);

    printf("string length = %d\n", strlength);

    /*QUESTION 4*/

    char str2[] = "kelly ayo";
    _puts(str2);

    /*QUESTION 4*/
    // char str4[] = "kelly";

    // print_rev(str4);

     /*QUESTION 6*/

    char kel[] = "0123456789";
    puts2(kel);

    char strings[] = {"kelly okoye is a good boy"};
    int stringslength = strlen(strings);

    int i;
    int midpoint = stringslength / 2;

    for (i = 0; i < midpoint; i++)
    {
        /* code */
        putchar(strings[i]);
    }
    putchar('\n');

    char book[] = "okoye kelvin is a good boy";

    int strilength = strlen(book);

    int length = strilength;

    // 20;

    for (i = length; i >= 0; i--)
    {
        /* code */

        putchar(book[i]);
    }

    putchar('\n');

    return (0);
}












// #include "main.h"
// /**
//  * print_rev - imprime en reversa
//  * @s: string
//  * return: 0
//  */
// void print_rev(char *s)
// {
// 	int longi = 0;
// 	int o;

// 	while (*s != '\0')
// 	{
// 		longi++;
// 		s++;
// 	}
// 	s--;
// 	for (o = longi; o > 0; o--)
// 	{
// 		_putchar(*s);
// 		s--;
// 	}

// 	_putchar('\n');
// }





// /**
//  * @brief 
//  * 
//  * 
//  */