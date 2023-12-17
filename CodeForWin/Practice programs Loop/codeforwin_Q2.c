/*
Write a program to print all natural numbers in reverse (from n to 1).
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, start;
    printf("\nEnter a starting value: ");
    scanf("%d", &start);

    for (i = start; i >=1; i-- )
    {
        printf("\n%d", i);
    }
    return 0;
}
