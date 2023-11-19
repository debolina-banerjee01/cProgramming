/*
If a five-digit number is input through the keyboard, write a
program to calculate the sum of its digits.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inp_num, sum, dgt_unit, rm_thsnd, dgt_tens, rm_hundrd, dgt_hundrd, rm_tens, dgt_thsnd, rm_unit;
    printf ("\n Please enter five digit number : ");
    scanf("%d", &inp_num);

    dgt_unit = inp_num % 10;
    rm_thsnd = inp_num / 10;
    printf("\n remainder till thousand is %d", rm_thsnd);

    dgt_tens = rm_thsnd % 10;
    rm_hundrd = rm_thsnd / 10;
    printf("\n remainder till hundred is %d", rm_hundrd);

    dgt_hundrd = rm_hundrd % 10;
    rm_tens = rm_hundrd / 10;
    printf("\n remainder till tens is %d", rm_tens);

    dgt_thsnd = rm_tens % 10;
    rm_unit = rm_tens / 10;
    printf("\n remainder till unit is %d", rm_unit);

    sum = dgt_unit + dgt_tens + dgt_hundrd + dgt_thsnd + rm_unit;
    printf("\n sum of the digits is %d", sum);

    return 0;
}
