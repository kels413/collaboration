#include <stdio.h>
#include <stdlib.h>

/*Create a structure named "Rectangle" to represent a rectangle with the following members:

Length (a floating-point number)
Width (a floating-point number)
Write a C program that does the following:
a. Declares a pointer to a "Rectangle" structure.
b. Dynamically allocates memory for a "Rectangle" structure and assigns it to the pointer.
c. Takes user input for the length and width of the rectangle.
d. Calculates and prints the area and perimeter of the rectangle using the structure pointer.
e. Finally, deallocates the memory for the "Rectangle" structure.

*/

struct Rectangle
{
    /* data */

    float Length;
    float Width;
};


void rectangleDetails(struct Rectangle details[], int count)
{
    printf("How many rectangle you wanna calc? ");
    scanf("%d", &count);

    int *ptr = (int *)malloc(sizeof(int) * count), i;

    if(ptr == NULL)
        {
            printf("Oh no 😭 Memory allocation failed\n");
        }



    for (i = 0; i < count; i++)
    {
        /* code */

            printf("Enter the Rectangle Length: ");
            scanf("%f", &details[i].Length);

            printf("Enter the Rectangle Width ");
            scanf("%f", &details[i].Width);

            // break;
    }

    free (ptr);
}

int  areaRectangle(struct Rectangle details[], int count)
{

    int area = 0, i;
    for (i = 0; i < count; i++)
    {
        /* code */

            area = details[i].Length * details[i].Width;
    }

    return area;
}

int perimeterRectangle(struct Rectangle details[], int count)
{
    int perimeter = 0, i;
    
    for (i = 0; i < count; i++)
    {
        /* code */

            perimeter = 2 * (details[i].Length + details[i].Width);
    }

    return perimeter;
}

int main(int argc, char **argv)
{

    // int *ptr;
    // printf("%d", *ptr);

    int count = 0;

    struct Rectangle details[100];

    rectangleDetails(details,count);
    areaRectangle(details,count);
    perimeterRectangle(details,count);

    int i;
    for (i = 0; i < count; i++)
    {
            /* code */

            printf("the length is %f", details[i].Length);
            printf("the length is %f", details[i].Width);
    }

    return (0);
}
