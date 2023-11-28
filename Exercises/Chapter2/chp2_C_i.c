/*
Given the length and breadth of a rectangle, write a program to find whether the area of the rectangle is greater than its perimeter.
For example, the area of the rectangle with length = 5 and breadth = 4 is greater than its perimeter.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float rctngl_area, rctngl_prmtr, lnth, brth;
    printf ("\n Please enter the length of the rectangle : ");
    scanf ("%f",&lnth);

    printf("\n Please enter the breadth of the rectangle : ");
    scanf("%f", &brth);

    rctngl_area= lnth * brth;
    //printf ("\narea of rectangle is %f", rctngl_area);

    rctngl_prmtr = 2 * (lnth+brth);
    //printf("\nperimeter of rectangle is %f", rctngl_prmtr);

    if (rctngl_area > rctngl_prmtr)
        printf("\nrectangle ares is greater than the perimeter");
    else
        printf("\nrectangle area is less than its perimeter");
    return 0;
}
