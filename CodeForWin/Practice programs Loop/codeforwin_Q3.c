/*
Write a program to print all alphabets from a to z. (use while loop)
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    i = 65;
    while (i <= 91)
    {
        printf("\nAlphabets %c", (char)i);
        i= i + 1;
    }
    return 0;
}
