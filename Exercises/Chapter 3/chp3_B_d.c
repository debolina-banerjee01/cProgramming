/*
Write a program to print all the ASCII values and their equivalent characters using a while loop. The ASCII values vary from 0 to 255
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char letter;

    for (i = 0; i <= 255; i++)
    {
        letter = (char)i;
        printf("\nThe ASCII value is %d and its equivalent character is %c",i, letter);
    }

    return 0;
}
