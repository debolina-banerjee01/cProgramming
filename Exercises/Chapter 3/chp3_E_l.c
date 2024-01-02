/*
When interest compounds q times per year at an annual rate of r % for n years, the principle p compounds to an amount a as per the following formula
a = p ( 1 + r / q ) ^ nq
Write a program to read 10 sets of p, r, n & q and calculate the corresponding as.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i;
    float a, p, r, q, n;

    for(i =1; i<= 10; i++)
    {
        printf("\nSet no:%d",i);

        printf("\nPlease enter principle: ");
        scanf("%f", &p);
        printf("\nPlease enter number of years: ");
        scanf("%f", &n);
        printf("\nPlease  enter the time(in years): ");
        scanf("%f", &q);
        printf("\nPlease enter annual rate: ");
        scanf("%f", &r);

        a = p* (pow(( 1 + r / q ), n *q));
        printf("\nAmount is %f", a);
    }

    return 0;
}
