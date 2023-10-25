#ifndef CIRCLE_H
#define CIRCLE_H
#include <math.h>

//  circumference == 2*pi *radius;

float circle_circumferenc(int radius)
{
    float circum = 2 * M_PI * radius;

    return circum;
}


#endif
