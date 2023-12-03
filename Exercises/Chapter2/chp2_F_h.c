/*
In a company, worker efficiency is determined on the basis of the time required for a worker to complete a particular job. If the time taken by the worker
is between 2 – 3 hours, then the worker is said to be highly efficient. If the time required by the worker is between 3 – 4 hours, then the worker is ordered
to improve speed. If the time taken is between 4 – 5 hours, the worker is given training to improve his speed, and if the time taken by the worker is more
than 5 hours, then the worker has to leave the company. If the time taken by the worker is input through the keyboard, find the efficiency of the worker.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float time_taken;
    printf("\nEnter time in hours: ");
    scanf("%f", &time_taken);

    if (time_taken >= 2 && time_taken < 3)
    {
        printf("\nThe worker is highly efficient");
    }
    else if (time_taken >= 3 && time_taken < 4)
    {
        printf("\nThe worker is ordered to improve speed");
    }
    else if (time_taken >= 4 && time_taken <= 5)
    {
        printf("\nThe worker is given training to improve speed");
    }
    else if (time_taken > 5)
    {
        printf ("\nThe worker has to leave the company");
    }
    return 0;
}
