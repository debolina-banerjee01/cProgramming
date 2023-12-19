/*
Write a program to count digits of a number.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inp_num, num_dgt =0;
    printf("\nPlease enter a number: ");
    scanf("%d", &inp_num);

    do
    {
        num_dgt = num_dgt + 1;
        inp_num = inp_num / 10;
    }while(inp_num > 0);

    printf("\nTotal no of digits is %d", num_dgt);
    return 0;
}
