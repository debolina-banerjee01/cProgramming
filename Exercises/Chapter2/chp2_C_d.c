/*
According to the Gregorian calendar, it was Monday on the date 01/01/1900. If any year is input through the keyboard write a program to
find out what is the day on 1st January of this year.

How this problem has been solved
----------------------------------
We know 01 Jan 2023 was a Sunday. We will structure a solution for this.
Step 1: Accept input. This will be 2023.
Step 2: Find final year. This will be 2023-1 = 2022. As we are considering 1st of Jan, hence we are reducing by one. We will consider this additional
one day later.
Step 3: Find no of years from starting point. This will be 2022- 1900 = 122.
Step 4: Find no of leap years. This will be 122/4 = 30.
Step 5: Find no of days in 2023. Tis will be (122 * 365)+ 30 =44560.
Step 6: Find no of weeks in 2023. This will be 4450 % 7 = 5.
Step 7: Find the additional days by adding 1. This additional 1 day is being considered from Step 2. The additional days will be 5+ 1= 6.
Step 8: We are considering 0th day as Monday, 1st day as Tuesday, 2nd day as Wednesday, 3rd day as Thursday, 4th day as Friday, 5th day as Saturday.
As the value is 6, the day will be Sunday.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year, finl_years, leap_years, days_nmbr, week_nmbr, additnl_days, finl_day, no_of_years;
    printf ("\nPlease enter a year : ");
    scanf ("%d", &year);

    finl_years = year - 1;
    printf("\nfinal no of years is %d", finl_years);

    no_of_years = finl_years-1900;
    printf("\nNo of yers to consider : %d",no_of_years);

    leap_years = no_of_years / 4;
    printf("\nno of leap years is %d", leap_years);

    days_nmbr = no_of_years*365+ leap_years;
    printf("\nno of days is %d", days_nmbr);

    week_nmbr = days_nmbr % 7;
    printf("\nno of weeks is %d", week_nmbr);

    additnl_days = week_nmbr + 1;
    printf ("\nadditional days are %d", additnl_days);

    if (additnl_days > 7)
        printf("\nadditional days are more than seven");
    else
        printf("\nadditional days are less than seven");

    finl_day = additnl_days % 7;
    printf ("\nfinal day is %d", finl_day);

    if (finl_day == 0)
        printf ("\nthe day is Monday");
    else if (finl_day == 1)
        printf("\nthe day is Tuesday");
    else if (finl_day == 2)
        printf("\nthe day is Wednesday");
    else if (finl_day == 3)
        printf("\nthe day is Thursday");
    else if (finl_day == 4)
        printf("\nthe day is Friday");
    else if (finl_day == 5)
        printf("\nthe day is Saturday");
    else
        printf("\nthe day is Sunday");
    return 0;
}
