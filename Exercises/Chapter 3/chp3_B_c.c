/*
Two numbers are entered through the keyboard. Write a program to find the value of one number raised to the power of another.
*/
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int base_num, power_num, final_value = 1, i = 1;

    printf("\nPlease enter a number for base: ");
    scanf("%d", &base_num);
    printf("\nPlease enter a number for power: ");
    scanf("%d", &power_num);

    for(i=1 ; i<=power_num ; i++)
    {
        final_value = final_value * base_num;
    }

    printf("\nThe value of %d raised to the power of %d is %d\n\n", base_num, power_num, final_value);

    return 0;
}
