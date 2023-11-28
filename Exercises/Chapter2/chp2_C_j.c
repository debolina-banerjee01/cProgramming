/*
Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three points fall on one straight line
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x1, y1, x2, y2, x3, y3;
    printf("\nenter a value for x1: ");
    scanf("%d", &x1);
    printf("\nenter a value for y1: ");
    scanf("%d", &y1);

    printf("\nenter a value for x2: ");
    scanf("%d", &x2);
    printf("\nenter a value for y2: ");
    scanf("%d", &y2);

    printf("\nenter a value for x3: ");
    scanf("%d", &x3);
    printf("\nenter a value for y3: ");
    scanf("%d", &y3);

    if (y1/x1 == y2/x2 && y2/x2 == y3/x3 && y3/x3 == y1/x1)
        printf ("\nthree points fall on one straight line");
    else
        printf ("\nthree points do not fall on one same line");

    return 0;
}
