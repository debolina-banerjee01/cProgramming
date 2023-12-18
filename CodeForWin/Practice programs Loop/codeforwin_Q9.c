/*
Write a program to write multiplication table of any number.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, prod = 1, inp_num;
    printf("\nPlease enter a number: ");
    scanf("%d", &inp_num);

    for (i= 1; i<= 20; i++)
    {
        prod = inp_num* i;
        printf("\n%d * %d = %d", inp_num, i, prod);

    }

    return 0;
}
