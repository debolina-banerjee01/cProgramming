/*
A five-digit number is entered through the keyboard. Write a program to obtain the reversed number and to determine whether the original and
reversed numbers are equal or not.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inp_num, rev_num, dgt_unit, rm_thsnd, dgt_tens, rm_hundrd, dgt_hundrd, rm_tens, dgt_thsnd, rm_unit  ;
    printf ("\n Please enter five digit number : ");
    scanf("%d", &inp_num);

    dgt_unit = inp_num % 10;
    rm_thsnd = inp_num / 10;
    //printf("\n left till thousand is %d", rm_thsnd);

    dgt_tens = rm_thsnd % 10;
    rm_hundrd = rm_thsnd / 10;
    //printf("\n left till hundred is %d", rm_hundrd);

    dgt_hundrd = rm_hundrd % 10;
    rm_tens = rm_hundrd / 10;
    //printf("\n left till tens is %d", rm_tens);

    dgt_thsnd = rm_tens % 10;
    rm_unit = rm_tens / 10;
    //printf("\n left till unit is %d", rm_unit);

    rev_num = rm_unit *1 + dgt_thsnd *10 + dgt_hundrd *100 +dgt_tens *1000 + dgt_unit *10000;
    printf ("\nreverse number is %d", rev_num);

    if (rev_num = inp_num)
    {
        printf("\nboth are equal");
    }
    else
    {
        printf("\nnot equal");
    }
    return 0;
}
