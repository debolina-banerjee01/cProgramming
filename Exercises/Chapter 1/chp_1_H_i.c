/*
If a four-digit number is input through the keyboard, write a
program to obtain the sum of the first and last digit of this
number.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inp_num, dgt_unit, rm_hundrd, dgt_tens, rm_tens, dgt_hundrd, rm_thsnd, sum;
    printf ("\n Please enter four digit number : ");
    scanf("%d", &inp_num);

    dgt_unit = inp_num % 10;
    rm_hundrd = inp_num / 10;
    printf("\n left till hundred is %d", rm_hundrd);

    dgt_tens = rm_hundrd % 10;
    rm_tens = rm_hundrd / 10;
    printf("\n left till tens is %d", rm_tens);

    dgt_hundrd = rm_tens % 10;
    rm_thsnd = rm_tens / 10;
    printf("\n left till unit is %d", rm_thsnd);

    sum = dgt_unit + rm_thsnd;
    printf("\n sum of last and first digits is %d", sum);

    return 0;
}
