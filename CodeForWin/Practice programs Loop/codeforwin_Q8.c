/*
Write a program to find sum of all  numbers from 1 to n.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum = 0, i, end_num;
    printf("\nEnter a number for end value: ");
    scanf("\n%d", &end_num);

    i = 1;
    for (;i <= end_num; i = i + 2)
    {
        sum = sum + i;
    }
    printf("\nSum of odd numbers from 1 to %d is %d", end_num, sum);
    return 0;
}
