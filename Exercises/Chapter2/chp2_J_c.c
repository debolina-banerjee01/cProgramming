/*
Write a program to find the greatest of the three numbers entered through the keyboard using conditional operators.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, greatest_int;
    printf("\nEnter an integer for a: ");
    scanf("%d", &a);

    printf("\nEnter an integer for b: ");
    scanf("%d", &b);

    printf("\nEnter an integer for c: ");
    scanf("%d", &c);

    greatest_int = (a>b && a>c ? a: (b>a && b>c ? b : c));

    printf("\nThe greatest integer is %d", greatest_int);
    return 0;
}
