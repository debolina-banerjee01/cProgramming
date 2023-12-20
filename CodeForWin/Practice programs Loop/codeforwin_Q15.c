/*
A program to calculate product of digits of a number.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inp_num, inp_num_copy, prod = 1, dgt;
    printf("\nPlease enter a number: ");
    scanf("%d", &inp_num);

    inp_num_copy = inp_num;
    do
    {
        dgt = inp_num_copy % 10;
        prod = prod * dgt;
        inp_num_copy = inp_num_copy / 10;
    }while(inp_num_copy >0);

    printf("\nProduct of the digits of %d is %d", inp_num, prod);
    return 0;
}
