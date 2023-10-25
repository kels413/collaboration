#include <stdio.h>

/**Question 2: Define a structure named Rectangle with two members: length and width. Write a function that takes a Rectangle structure as input and calculates its area. Then, use this function to calculate and print the area of three different rectangles.*/

    struct  RECTANGLE
    {
        /* data */

        int length;
        int width;
    };

    int calcRectangle(int, int);
    //  Drivers code
    int main(int argc, char **argv)
    {
        // int length;
        // int width;
        int i;
        struct RECTANGLE rectangles[3] = {
            {5, 6},
            {7, 5},
            {10, 2},
        };

        for (i = 0; i < 3; i++)
        {
            int area = calcRectangle(rectangles[i].length, rectangles[i].width);


            printf("%d\n",area);
        }



    }

    int calcRectangle(int length, int width)
    {
        

        int area = length * width;

        return area;
    }
