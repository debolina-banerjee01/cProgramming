/*
In a town, the percentage of men is 52. The percentage of total literacy is 48.
If total percentage of literate men is 35 of the total population, write a program to find the total number of illiterate men and women if the
population of the town is 80,000.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float lit_prcntg, totl_popltn, totl_illt;
    totl_popltn = 80,000;
    lit_prcntg = 0.48;
    totl_illt = (1 - 0.48) * 80000;
    printf("total illiterate peole %f", totl_illt);
    return 0;
}
