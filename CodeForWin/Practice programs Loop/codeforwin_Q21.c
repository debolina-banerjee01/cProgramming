/*
Write a C program to find power of a number using for loop.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base, exp, i, value;
    printf("\nPlease enter a number for base: ");
    scanf("\n%d", &base);
    printf("\nPlease a number for exponent: ");
    scanf ("\n%d", &exp);
    value = 1;
    for(i = 1; i <= exp; i++)
    {
        value = value*base;
    }
    printf("\n%d ^ %d = %d\n", base, exp, value);
    return 0;
}
