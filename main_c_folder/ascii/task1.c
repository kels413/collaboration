/**Character to ASCII Value:*/

/*Write a program that takes a character as input and prints its corresponding ASCII value.*/

#include <stdio.h>
#include <ctype.h>

int main (void)
{
    char character;
    printf("please input a character ");
    character = getchar();


    /* code */
    if(isalpha(character))
      printf("the ascii value of the character %c  is  %d\n", character , character);

    else
        printf("please input a character\n");
}