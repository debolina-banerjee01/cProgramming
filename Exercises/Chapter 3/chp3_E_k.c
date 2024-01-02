/*
A machine is purchased which will produce earning of Rs. 1000 per year while it lasts. The machine costs Rs. 6000 and will have a salvage of Rs. 2000 when
it is condemned. If 12 percent per annum can be earned on alternate investments what would be the minimum life of the machine to make it a more attractive
investment compared to alternative investment?
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int earning =1000, cost_p= 6000, sell_p= 2000, sunk_cost;
    int cum_mchn_rate =0, cum_alt_invest_rt =0, num_of_yr =0;

    sunk_cost= cost_p - sell_p;
    do
    {
        cum_mchn_rate = cum_mchn_rate + earning;
        cum_alt_invest_rt= cum_alt_invest_rt + 0.12 * cost_p;
        num_of_yr = num_of_yr + 1;
    }while (cum_mchn_rate - sunk_cost < cum_alt_invest_rt);

    printf("\nThe minimum life of the machine to make a more attractive investment compared to alternative investment is %d years", num_of_yr);


    return 0;
}
