/*
A program to find sum of the digits of a number.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inp_num, dgt, inp_num_copy, sum = 0;
    printf("\nPlease enter a number: ");
    scanf("%d", &inp_num);

    inp_num_copy = inp_num;

    do
    {
        dgt = inp_num_copy%10;
        sum = sum + dgt;
        inp_num_copy = inp_num_copy/10;
    }
    while(inp_num_copy > 0);


    printf("\nThe sum of the digits of number %d is : %d\n",inp_num, sum);
    return 0;
}
