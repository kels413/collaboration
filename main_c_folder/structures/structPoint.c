#include <stdio.h>

struct book
{
    char novel[100];
    int year;
}var = {"kelly", 2000};

int main(int argc, char **argv)
{

    struct book *ptr = &var;
    printf("please enter the name of the book: ");
    scanf("%s", ptr->novel);
    printf("please Enter the year of the book: ");
    scanf("%d", &ptr->year);

    printf("the name of the book is %s\n", ptr->novel);
    printf("the year of the book is %d\n", ptr->year);

    return (0);
}