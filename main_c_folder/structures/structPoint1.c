#include <stdio.h>

/**Question 1:

Define a structure named "Student" with the following members:

Name (a string of maximum 50 characters)
Roll Number (an integer)
GPA (a floating-point number)
Now, write a C program that does the following:
a. Declares an array of 5 "Student" structures.
b. Initializes the data for each student in the array.
c. Uses a pointer to a "Student" structure to find and print the details of the student with the highest GPA.*/

struct Student
{
    /* data */

    char Name[50];
    int Roll;
    float GPA;
};


//  function to initialise the array of structures.

void studendDetail(struct Student detail[])
{
    int count = 2, i;

    for ( i = 0; i < count; i++)
    {
        /* code */

        printf("Enter Student Name ");
        scanf("%s", detail[i].Name);
        printf("Enter Student Roll ");
        scanf("%d", &detail[i].Roll);
        printf("Enter student GPA ");
        scanf("%f", &detail[i].GPA);
    }
}

int main(int argc, char **argv)
{


    int count = 2, i;

    struct Student detail[count];
    studendDetail(detail);

    struct Student *ptr = detail;
    float highestGPA = ptr->GPA;

    for (i = 1; i < count; i++)
    {
        /* code */
        ptr++;
        if (ptr->GPA > highestGPA)
        {
            highestGPA = ptr->GPA;
        }
    }

    printf(" the Name of the student is %s\n", ptr->Name);
    printf(" the Roll  of the student is %d\n", ptr->Roll);
    printf(" the GPA of the student is %.2f\n", highestGPA);
}

