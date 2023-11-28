/*
Write a program to check whether a triangle is valid or not, when the three angles of the triangle are entered through the keyboard. A triangle
is valid if the sum of all the three angles is equal to 180 degrees
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c;
    printf("\nPlease enter the value of first angle: ");
    scanf("%f", &a);

    printf("\nPlease enter the value of second angle: ");
    scanf("%f", &b);

    printf("\nPlease enter the value of third angle: ");
    scanf("%f", &c);


    if (a + b+ c== 180)
        printf ("\ntriangle is valid");
    else
        printf("\ntriangle is invalid");

    return 0;
}
