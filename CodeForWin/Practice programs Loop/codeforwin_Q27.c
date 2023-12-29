/*
A program to print all the prime numbers from 1 to n.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int end_value, i, j;
    printf("\nPlease enter a number for end value:");
    scanf("\n%d", &end_value);

    for(i = 2; i <= end_value; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                //printf("\nNot a prime number");
                break;
            }
        }
        if (i == j)
        {
            printf("\nPrime numbers from 2 to %d are %d", end_value, i);
        }
    }
    return 0;
}
