/*
If the three sides of a triangle are entered through the keyboard, write a program to check whether the triangle is isosceles, equilateral, scalene or
right angled triangle.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, c, additn, additn_1, additn_2;
    printf("\nEnter value of the first side a: ");
    scanf("%d", &a);

    printf("\nEnter value of the second side b: ");
    scanf("%d", &b);

    printf("\nEnter value of the third side c: ");
    scanf("%d", &c);

    if
    (
        (a > 0 && b > 0 && c  > 0) &&
        (a+b > c && b+c > a && c+a > b)
    )//triangle valid logic
    {
        if
        (
            ((a == b) && (a!= c)) ||
            ((b == c) && (b!= a)) ||
            ((c == a) && (c!=b))
        )
        {
            printf("\nThe triangle is isosceles");
        }
        else if (a == b && b == c && c == a )
        {
            printf("\nThe triangle is equilateral");
        }
        else
        {
            additn = pow (a,2) + pow (b,2);

            additn_1 = pow (b,2) + pow (c,2);

            additn_2 = pow (a,2) + pow (c,2);


            if (pow(c,2) == additn || pow(a,2) == additn_1 || pow(b,2) == additn_2)
            {
                printf("\nThe triangle is right angled triangle");
            }
            else
            {
                printf ("\nThe triangle is scalene");
            }

        }
    }
    else
    {
        printf("\nThe Triangle is invalid.");
    }

    return 0;
}
