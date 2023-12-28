/*
Write a C program to calculate factorial of a number.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inp_num, i, prod;
    printf("\nPlease enter a number: ");
    scanf("%d", &inp_num);

    prod = 1;
    for(i = 1; i <= inp_num; i++)
    {
        prod = prod * i;
    }
    printf("\nFactorial of the number %d is %d", inp_num, prod);
    return 0;
}
