/*
If the three sides of a triangle are entered through the keyboard, write a program to check whether the triangle is valid or not. The triangle is valid if
the sum of two sides is greater than the largest of the three sides.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c;
    printf("\nEnter value of the first side a: ");
    scanf("%f", &a);

    printf("\nEnter value of the second side b: ");
    scanf("%f", &b);

    printf("\nEnter value of the third side c: ");
    scanf("%f", &c);

    if ((a + b > c) && (b + c > a) && (c + a > b))
    {
        printf("\nThe triangle is valid");
    }

    else
    {
        printf("\nThe triangle is invalid");
    }

    return 0;
}
