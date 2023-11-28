/*
Find the absolute value of a number entered through the keyboard
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inp_num, abs_val;
    printf("\nPlease enter a number: ");
    scanf("%d", &inp_num);

    abs_val = inp_num * -1;
    if (inp_num < 0)
        printf("\nabsolute value is %d", abs_val);

    else
        printf ("\ninput number is the absolute value itself");
    return 0;
}
