#include <stdio.h>

/**
                      STRUCTURES IN C.
  Define a C structure to represent a "Person" with the following information: name (a string of up to 50 characters), age (an integer), and height (a floating-point number). Write a program that reads data for three people, stores it in an array of "Person" structures, and then displays the information for the person with the highest age.

*/


struct Person
{
    /* data */

    char name[100];
    int age;
    float height;
};

// function to get the details of the user.

void getDetails(struct Person data[], int count)
{
    count = 3;
    printf("Please Enter the details of the person\n");
    for (int i = 0; i < count; i++)
    {
        /* code */
        printf("Enter the name ");
        scanf("%s", data[i].name);
        printf("Enter the age ");
        scanf("%d", &data[i].age);
        printf("Enter the height ");
        scanf("%f", &data[i].height);

    }


}

int main(int argc, char** argv)
{
    int count = 3;
    struct Person data[100];
    getDetails(data, count);

    int highestAge = data[0].age;
    int indexOfHighest = 0;

    for (int i = 0; i < count; i++)
    {

        /* code */
        if (data[i].age > highestAge )
        {
            /* code */
            highestAge = data[i].age;
            indexOfHighest = i;
            }
          
    }


            printf("Name: %s\n", data[indexOfHighest].name);
            printf("Age: %d\n", data[indexOfHighest].age);
            printf("Height:%f\n", data[indexOfHighest].height);

    return (0);
}

