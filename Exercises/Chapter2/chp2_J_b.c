/*
Write a program using conditional operators to determine whether a year entered through the keyboard is a leap year or not.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inp_yr;
    printf ("\nPlease enter a year : ");
    scanf("%d", &inp_yr);

    (inp_yr % 400 == 0 ? printf("\nIt is a century leap year") : printf("\nIt is not a century leap year"));
    (inp_yr % 4 == 0 ? printf("\nIt is a leap year") : printf("\nIt is not a leap year"));

    return 0;
}
