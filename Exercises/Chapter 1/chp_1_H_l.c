/*
If the total selling price of 15 items and the total profit earned on them is input through the keyboard, write a program to find the cost
price of one item
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float cost_p, sell_p, profit;
    printf ("\n Please enter selling price : ");
    scanf("%f", &sell_p);

    printf ("\n Please enter profit : ");
    scanf("%f", &profit);

    cost_p = (sell_p - profit) / 15;
    printf("\nCost price of one item is %f", cost_p);
    
    return 0;
}
