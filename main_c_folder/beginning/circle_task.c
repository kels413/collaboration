#include <stdio.h>
#include "circle.h"

//  Certainly! Here's a question related to the circumference of a circle:

// **Question:** The radius of a circular garden is 8 meters. Calculate the circumference of the garden. Use the formula \(C = 2 \pi r\) to find the answer.

// To solve this question, you can plug in the given value for the radius (\(r = 8\)) into the formula for the circumference (\(C = 2 \pi r\)) and calculate the result.


int main(void)
{
    int radius = 8;

    float circ = circle_circumferenc(radius);

    int circInt = (int) circ;  // type casting, converting float value to int.


    printf("%d", circInt);


}