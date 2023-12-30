/*
Write a program to find the octal equivalent of the entered number.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inp_num, rem, i =0, oct_value = 0;
    printf("\nPlease enter a number: ");
    scanf("%d", &inp_num);

    while (inp_num != 0)
    {
        rem = inp_num % 8;
        oct_value = oct_value + pow (10,i) * rem;
        inp_num = inp_num /8;
        i = i + 1;
    }
    printf("\nOctal equivalent of %d is %d", inp_num, oct_value);
    return 0;
}
