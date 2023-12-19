/*
A program to swap first and last digits of a number.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int inp_num, last_digit, f_dgt, inp_num_copy, num_dgt = 0, swapped_num, counter, dgt;
    printf("\nPlease enter a number to swap first and last digit: ");
    scanf("%d", &inp_num);

    last_digit = inp_num % 10;

    //copying the input number so as not to disturb the original data entered
    inp_num_copy = inp_num;

    //getting the first digit...
    do
    {
        if(inp_num_copy/10 == 0)
        {
            f_dgt = inp_num_copy%10;
            break;
        }
        else
        {
            inp_num_copy = inp_num_copy/10;
        }
    }
    while(inp_num_copy > 0);

    //copying again, this time to swap the numbers...
    inp_num_copy = inp_num;

    //using a variable as a counter, to calculate the power of 10.

    //initializing the counter and new swapped number`
    counter = 0;
    swapped_num = 0;
    do
    {
        //extracting the digits from the number
        dgt = inp_num_copy%10;

        if(counter==0 && dgt==last_digit)
        {
            swapped_num = swapped_num + f_dgt*pow(10,counter);
        }
        else if (inp_num_copy/10 == 0 && dgt == f_dgt)
        {
            swapped_num = swapped_num + last_digit*pow(10,counter);
        }
        else
        {
            swapped_num = swapped_num + dgt*pow(10,counter);
        }

        //reduce the number
        inp_num_copy = inp_num_copy/10;
        counter = counter + 1;

    }while(inp_num_copy > 0);

    printf("\nFirst-Last digit swapped version of %d is %d\n", inp_num, swapped_num);

    return 0;
}
