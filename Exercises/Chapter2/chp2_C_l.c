/*
Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0).
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    printf("\nenter a value of x: ");
    scanf("%d", &x);

    printf("\nenter a value of y: ");
    scanf("%d", &y);

    if ((y != 0) && (x == 0))
        printf("\nthe point lies on Y axis");

    else if ((x != 0)&& (y == 0))
        printf("\nthe point lies on X axis");

    else if( x == 0 && y == 0)
        printf("\nthe point is at the center");

    else if ((x != 0) && (y != 0))
        printf("\nthe point is neither in the center nor on any axis");


    return 0;
}
