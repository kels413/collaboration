#include <stdio.h>

// SIMPLE STRUCTURE.

 struct pharmacy
    {
        /* data */

        char name[100];
        char companyName[100];
        int date;
    }company = {"kelly", "three brothers", 1992};

int main(int argc, char ** argv)
{
    //  ANOTHER WAY TO DO IT.
        // struct pharmacy company = {"kelly", "three brothers", 1992}; 
        printf("%s\n", company.name);
        printf("%s\n", company.companyName);
        printf("%d\n", company.date);

        return (0);


}