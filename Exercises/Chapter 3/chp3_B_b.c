/*
Write a program to find the factorial value of any number entered through the keyboard.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inp_num, i, prod= 1;
    printf("\nPlease enter a number: ");
    scanf("%d", &inp_num);

    for (i= 1; i<= inp_num; i++)
    {
        prod = prod * i;

    }
    printf("\nFactorial of the number %d is %d", inp_num, prod);
    return 0;
}
