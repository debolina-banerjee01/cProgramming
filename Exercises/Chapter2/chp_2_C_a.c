/*
If cost price and selling price of an item is input through the keyboard, write a program to determine whether the seller has made profit or
incurred loss. Also determine how much profit he made or loss he incurred.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float cost_p, sell_p, profit, loss;
    printf ("\n Please enter selling price : ");
    scanf("%f", &sell_p);

    printf("\nPlease enter cost price : ");
    scanf("%f", &cost_p);

    if (cost_p > sell_p)
    {
        printf("\nIt is loss");
        loss = cost_p - sell_p;
        printf("\nLoss is %f", loss);
    }
    else
    {
        printf("\nIt is profit");
        profit = sell_p - cost_p;
        printf("\nProfit is %f", profit);
    }


    return 0;
}
