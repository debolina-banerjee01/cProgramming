/*
A program to enter a number and print its reverse number.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int inp_num, num_of_dgt =0, inp_num_copy, dgt, counter, rev_num;
    printf("\nPlease enter a number: ");
    scanf("%d", &inp_num);

    inp_num_copy = inp_num;
    do
    {
        num_of_dgt = num_of_dgt + 1;
        //dgt = inp_num_copy % 10;
        inp_num_copy = inp_num_copy / 10;
    }while(inp_num_copy > 0);

    printf("\nNumber of digits is %d\n", num_of_dgt);

    counter = 0;
    inp_num_copy = inp_num;
    rev_num = 0;
    for(counter = num_of_dgt - 1; counter >= 0 && inp_num_copy > 0; counter --)
    {
        printf("\n-----------------------------------");
        printf("\n--------------Before----------------");
        printf("\n-----------------------------------");
        printf("\ncounter : %d",counter);
        printf("\ninput number copy : %d", inp_num_copy);
        printf("\nverse number : %d", rev_num);
        printf("\n-----------------------------------\n");
        dgt = inp_num_copy % 10;
        rev_num = rev_num + pow(10, counter) * dgt;
        inp_num_copy = inp_num_copy /10;


        printf("\n-----------------------------------");
        printf("\n--------------After----------------");
        printf("\n-----------------------------------");
        printf("\nDigit : %d",dgt);
        printf("\ninput number copy : %d", inp_num_copy);
        printf("\nverse number : %d", rev_num);
        printf("\n-----------------------------------\n");
    }
    printf("\nThe reverse of %d is %d", inp_num, rev_num);
    return 0;
}
