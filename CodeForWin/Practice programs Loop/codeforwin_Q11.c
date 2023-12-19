/*
Write a program to find fist and last digit of a number.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inp_num, last_digit, f_dgt, inp_num_copy;
    printf("\nPlease enter a number: ");
    scanf("%d", &inp_num);

    last_digit = inp_num % 10;
    printf("\nLast digit of the number is %d", last_digit);

    //copying the input number so as not to disturb the original data entered
    inp_num_copy = inp_num;
    do
    {
        if(inp_num_copy/10 == 0 )
        {
            f_dgt = inp_num_copy%10;
            printf("\nThe first digit of %d is %d\n",inp_num,f_dgt);
            break;
        }
        else
        {
            inp_num_copy = inp_num_copy/10;
        }
    }while (1==1);

    return 0;
}
