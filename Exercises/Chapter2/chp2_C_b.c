/*
Any integer is input through the keyboard. Write a program to find out whether it is an odd number or even number
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inp_num;
    printf ("\nPlease enter a number : ");
    scanf("%d", &inp_num);

    if (inp_num % 2 == 0)
    {
        printf("\nthe number is even");
    }
    else
    {
        printf("\nthe number is odd");
    }
    return 0;
}
