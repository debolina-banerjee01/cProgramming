/*
Write a program to find sum of all even numbers from 1 to n.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int end_num, sum =0, i;
    printf("\nEnter a number for end value: ");
    scanf("\n%d", &end_num);

    i = 2;
    for (;i <= end_num; i = i + 2)
    {
        sum = sum + i;
    }
    printf("\nSum of even numbers from 2 to %d is %d", end_num, sum);
    return 0;
}
