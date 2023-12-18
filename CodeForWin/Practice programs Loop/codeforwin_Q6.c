/*
Write a program to print sum of all natural numbers from 1 to n.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum = 0, end_num, i;
    printf("\nEnter a number for end limit: ");
    scanf("\n%d", &end_num);

    for (i = 1; i <= end_num; i++)
    {
        sum = sum + i;
    }
    printf("\nThe sum of all natural numbers from 1 to %d is : %d.\n",end_num, sum);
    return 0;
}
