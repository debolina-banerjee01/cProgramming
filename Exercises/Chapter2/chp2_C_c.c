/*
Any year is input through the keyboard. Write a program to determine whether the year is a leap year or not.
(Hint: Use the % (modulus) operator)
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inp_yr;
    printf ("\nPlease enter a year : ");
    scanf("%d", &inp_yr);

    if (inp_yr % 400 == 0)

        printf("this is a century leap year");
    else
    {
        if (inp_yr % 4 == 0)
            printf ("the year is a leap year");
        else
        {
            printf("the year is not a leap year");
        }
    }
    return 0;
}
