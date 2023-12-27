/*
Write a C program to find all factors of a number.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inp_num, i;
    printf("\nPlease enter a number:" );
    scanf("%d", &inp_num);

    for (i = 1; i <= inp_num/2 ; i++)
    {
        if(inp_num % i == 0)
        {
            printf("\nFactors of %d is %d",inp_num, i);
        }
    }

    return 0;
}
