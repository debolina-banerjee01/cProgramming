/*
Any year is entered through the keyboard, write a program to determine whether the year is leap or not. Use the logical
operators && and ||
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inp_yr;
    printf ("\nPlease enter a year : ");
    scanf("%d", &inp_yr);

    if ((inp_yr % 100 != 0 && inp_yr % 4 ==0) || (inp_yr % 400 == 0))
        printf("the year is a leap year");
    else
        printf("the year is not a leap year");

    return 0;
}
