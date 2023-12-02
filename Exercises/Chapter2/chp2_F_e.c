/*
A library charges a fine for every book returned late. For first 5 days the fine is 50 paise, for 6-10 days fine is one rupee and above 10 days fine is
5 rupees. If you return the book after 30 days your membership will be cancelled. Write a program to accept the number of days the member is late to return
the book and display the fine or the appropriate message
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int late_days;
    printf("\nEnter days of being late to return book: ");
    scanf("%d", &late_days);

    if (late_days >= 1 && late_days <= 5)
    {
        printf("\nThe amount of fine is 50 paise");
    }
    else if (late_days >= 6 && late_days <= 10)
    {
        printf("\nThe amount of fine is one rupee");
    }
    else if (late_days > 10 && late_days < 30)
    {
        printf("\nThe amount of fine is 5 rupees");
    }
    else if (late_days >= 30)
    {
        printf("\nThe membership will be cancelled");
    }

    return 0;
}
