/*
Write a program to calculate overtime pay of 10 employees.
Overtime is paid at the rate of Rs. 12.00 per hour for every hour worked above 40 hours.
Assume that employees do not work for fractional part of an hour
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count, hourly_amount, time, total_paid, total_overtime_pay=0;

    count = 1;
    while (count <= 10)
    {
        printf("\nPlease enter hourly amount for %d worker: ",count);
        scanf("%d", &hourly_amount);
        printf("\nPlease enter overtime hours: ");
        scanf("%d", &time);

        total_paid = hourly_amount * time;
        printf("\nOvertime payment is = Rs. %d", total_paid);
//
//        printf("\n---------------------------");
//        printf("\nTotal Overtime Pay before sum is %d",total_overtime_pay);
//        printf("\ntotal_overtime_pay = total_overtime_pay + total_paid => total_overtime_pay = %d + %d", total_overtime_pay, total_paid);
        total_overtime_pay = total_overtime_pay + total_paid;
        //printf("\nTotal Overtime Pay after sum is %d",total_overtime_pay);
        //printf("\n---------------------------\n");
        count = count+ 1;
    }
    printf("\nTotal Overtime Pay is Rs %d",total_overtime_pay);
    return 0;
}
