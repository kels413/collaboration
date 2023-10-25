#include <stdio.h>
#include <string.h>
/**
**Question:**

Create a C program to manage a library catalog. Define a structure named `Book` with the following members:

- `title` (a string to store the book's title)
- `author` (a string to store the book's author)
- `year` (an integer to store the publication year)
- `ISBN` (a string to store the ISBN number)

Write the following functions:

1. `void addBook(struct Book catalog[], int *count)`:
   - This function should take an array of `Book` structures named `catalog` and a pointer to an integer `count` as parameters.
   - It should prompt the user to input details for a new book and add it to the catalog array.
   - Increment the `count` to reflect the new book's addition.

2. `void displayCatalog(const struct Book catalog[], int count)`:
   - This function should take the `catalog` array and the `count` as parameters.
   - It should display the details of all the books in the catalog.

In the `main` function, create an array of `Book` structures and allow the user to add books to the catalog and display the catalog's contents.

Ensure that you handle memory allocation and prevent buffer overflows when taking user input for book titles, authors, and ISBN numbers.*/


/**STRUCTURE DEFINITION*/

struct  Book
{
    /* data */
    char title[100];
    char author[20];
    int year;
    int ISBN;
};

void addBook(struct Book catalog[], int *count)
{
    printf("\nHow many books do you wanna store in the catalog? : ");
    scanf("%d", count);//it is a pointer so no need for the ampersand (&);

    int i;

    for (i = 0; i < *count; i++)
    {
        /* code */

        printf("\nEnter the Title: ");
        scanf("%99s", catalog[i].title);

        printf("Enter the Author: ");
        scanf("%s", catalog[i].author);

        printf("Enter the Year: ");
        scanf("%d", &catalog[i].year);

        printf("Enter the ISBN: ");
        scanf("%d", &catalog[i].ISBN);

        printf("\n");
    }
}


void displayCatalog(const struct Book catalog[], int count)
{
    int i;
    for (i = 0; i < count; i++)
    {
        /* code */
        printf("[Catalog] %d\n\n", i + 1);
        printf("[Title] %s\n", catalog[i].title);
        printf("[Author] %s\n", catalog[i].author);
        printf("[Year of publication]  %d\n", catalog[i].year);
        printf("[ISBN] %d\n\n", catalog[i].ISBN);
    }

};

int main(int argc, char ** argv)
{
    struct Book catalog[100];

    int count = 0;

    addBook(catalog, &count);
    displayCatalog(catalog, count);

    return 0;


}
