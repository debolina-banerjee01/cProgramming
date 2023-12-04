/*
The policy followed by a company to process customer orders is given by the following rules:
(a) If a customer order is less than or equal to that in stock and has credit is OK, supply has requirement.
(b) If has credit is not OK do not supply. Send him intimation.
(c) If has credit is Ok but the item in stock is less than has order, supply what is in stock. Intimate to him data the balance will be shipped.
Write a C program to implement the company policy.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cust_order, stock, has_credit;
    printf ("\nPlease enter customer order quantity: ");
    scanf ("%d", &cust_order);

    printf("\nPlease enter stock quantity: ");
    scanf("%d", &stock);

    printf("\nPlease enter has credit. If has credit is ok enter 0; if not, enter 1: ");
    scanf("%d", &has_credit);

    if (cust_order <= stock && has_credit == 0)
    {
        printf("\nSupply has requirement");
    }
    else if (has_credit == 1)
    {
        printf("\nDo not supply. Send him intimation");
    }
    else if (has_credit == 0 && stock < cust_order)
    {
        printf ("\nSupply what is in stock. Intimate to him data the balance will be shipped.");
    }
    return 0;
}
