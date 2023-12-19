/*
A program to find sum of first and last digits of a number.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inp_num, last_digit, f_dgt, inp_num_copy, sum;
    printf("\nPlease enter a number: ");
    scanf("%d", &inp_num);

    last_digit = inp_num % 10;
    printf("\nLast digit of %d is %d", inp_num, last_digit);

    //copying the input number so as not to disturb the original data entered
    inp_num_copy = inp_num;

//    do
//    {
//        if(inp_num_copy/10 == 0 )
//        {
//            f_dgt = inp_num_copy % 10;
//            printf("\nThe first digit of %d is %d\n", inp_num, f_dgt);
//            break;
//        }
//        else
//        {
//            inp_num_copy = inp_num_copy/10;
//        }
//    }while (1==1);

    do
    {
        if(inp_num_copy/10 == 0)
        {
            f_dgt = inp_num_copy%10;
            printf("\nThe first digit of %d is %d\n", inp_num, f_dgt);
            break;
        }
        else
        {
            inp_num_copy = inp_num_copy/10;
        }
    }
    while(inp_num_copy > 0);

    sum = f_dgt + last_digit;
    printf("\nSum is %d", sum);

    return 0;
}
