/*
Write a program to print all even numbers between 1 to 100. (use while loop)
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    i = 2;
    while (i <= 100)
    {
        printf("\nEven numbers from 1 to 100 are %d", i);
        i = i + 2;
    }
    return 0;
}
