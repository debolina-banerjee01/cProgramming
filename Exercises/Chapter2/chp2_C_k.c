/*
Given the coordinates (x, y) of a center of a circle and it’s radius, write a program which will determine whether a point lies inside
the circle, on the circle or outside the circle
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float additn, d, r, x, y, x1, y1;
    printf("\nenter a value of x: ");
    scanf("%f", &x);
    printf("\nenter a value of y: ");
    scanf("%f", &y);

    printf("\nenter a value of x1: ");
    scanf("%f", &x1);
    printf("\nenter a value of y1: ");
    scanf("%f", &y1);

    additn = pow((x1-x), 2) + pow((y1-y), 2);
    printf("\naddition is %f", additn);

    d = pow (additn, 0.5);
    printf("\ndistance is %f", d);

    printf ("\nenter a value of r: ");
    scanf("%f", &r);

    if (d == r)
        printf("\nthe point lies on the circle");
    else if(d < r)
        printf("\nthe point lies inside the circle");
    else
        printf("\nthe point lies outside the circle");

    return 0;
}
