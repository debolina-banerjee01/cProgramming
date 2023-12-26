/*
A program to check whether a number is palindrome or not.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inp_num, num_of_dgt =0, inp_num_copy, counter, rev_num, dgt;
    printf("\nPlease enter a number: ");
    scanf("%d", &inp_num);

    inp_num_copy = inp_num;
    do
    {
        num_of_dgt = num_of_dgt+ 1;
        inp_num_copy = inp_num_copy / 10;

    }while (inp_num_copy > 0);

    inp_num_copy = inp_num;
    counter = 0;
    rev_num = 0;
    for(counter = num_of_dgt - 1; counter >= 0 && inp_num_copy > 0; counter --)
    {
        dgt = inp_num_copy % 10;
        rev_num = rev_num + pow(10, counter) * dgt;
        inp_num_copy = inp_num_copy /10;
    }

    if(inp_num == rev_num)
    {
        printf("\nThe number %d is palindromic", inp_num);
    }
    else
    {
        printf("\nThe number %d is not palindromic.", inp_num);
    }
    return 0;
}
