/*
If a five-digit number is input through the keyboard, write a program to print a new number by adding one to each of its digits. For example if 
the number that is input is 12391 then the output should be displayed as 23402.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inp_num, new_num, dgt_unit, rm_thsnd, dgt_tens, rm_hundrd, dgt_hundrd, rm_tens, dgt_thsnd, rm_unit, chng_new_num ;
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


    //new_num = (rm_unit + 1)*10000 + (dgt_thsnd + 1)*1000 + (dgt_hundrd + 1)*100 + (dgt_tens + 1)*10 + (dgt_unit +1);
    //printf ("\nNew number is %d", new_num);

    dgt_unit = (dgt_unit+1) % 10;
    dgt_tens = (dgt_tens+1) % 10;
    dgt_hundrd = (dgt_hundrd+1) %10;
    dgt_thsnd = (dgt_thsnd+1) % 10;
    rm_unit = (rm_unit+1) % 10;

    chng_new_num = rm_unit *10000 + dgt_thsnd *1000 + dgt_hundrd *100 + dgt_tens *10 + dgt_unit;
    printf ("\nChanged new number is %d", chng_new_num);



    return 0;
}
