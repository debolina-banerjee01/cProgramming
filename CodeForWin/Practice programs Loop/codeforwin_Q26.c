/*
Write a C program to check whether a number is Prime number or not.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inp_num, i, rem = 0;
    printf("\nPlease enter a number: ");
    scanf("%d", &inp_num);

    i = 2;
    while(i <= inp_num - 1)
    {
        printf("\nIn while loop value of i is %d", i);
        rem = inp_num % i;
        printf("\n\trem = %d", rem);
        if (inp_num % i == 0)
        {
            printf("\n%d is not a prime number", inp_num);

            break;
        }
        i = i +1;
    }
    if (inp_num == i)
    {
        printf("\n%d is a prime number", inp_num);
    }
    return 0;
}
