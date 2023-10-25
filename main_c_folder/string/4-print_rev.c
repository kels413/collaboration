/*Write a function that prints a string, in reverse, followed by a new line.*/

#include  <stdio.h>
#include "main.h"
#include <string.h>

void print_rev(char *s)
{
    int length = strlen(s);

    int start = 0;

    int end = length - 1;


    while (start < end)
    {
        /* code */

        char temp = s[start];

        s[start] = s[end];

        s[end] = temp;

        start++;
        end--;
    }

    puts(s);

}