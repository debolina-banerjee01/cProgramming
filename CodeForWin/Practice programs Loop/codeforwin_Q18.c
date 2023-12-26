/*
A program to find frequency of each digit in a given number.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inp_num, inp_num_copy_out, inp_num_copy_in, dgt_out, dgt_in, counter;
    printf("\nPlease enter a number: ");
    scanf("%d", &inp_num);

    inp_num_copy_out = inp_num;


    do
    {
       dgt_out = inp_num_copy_out % 10;
       printf("\nchecking for %d", dgt_out);

       counter = 0;
       inp_num_copy_in = inp_num;
       do
       {
            printf("\n\tinner loop: now number is %d", inp_num_copy_in);
            dgt_in = inp_num_copy_in %10;
            printf("\n\tinner loop: checking %d against %d", dgt_in, dgt_out);
            if ( dgt_out == dgt_in)
            {
                counter = counter + 1;
                printf("\n\t\tinner loop: matched. Increasing counter, counter value %d", counter);
            }

            inp_num_copy_in = inp_num_copy_in /10;

       }while(inp_num_copy_in >0 );
       printf("\n%d exits %d times", dgt_out, counter);

       inp_num_copy_out = inp_num_copy_out / 10;
    }while(inp_num_copy_out> 0);


    return 0;
}
