/*
A cashier has currency notes of denominations 10, 50 and 100. If the amount to be withdrawn is input through the keyboard in hundreds, find the total
number of currency notes of each denomination the cashier will have to give to the withdrawer.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int amnt_wthdrw, hndrd_note, fifty_note, ten_note;
    printf ("\nPlease enter amount withdrawn in hundred : ");
    scanf("%d", &amnt_wthdrw);

    hndrd_note = amnt_wthdrw/100;
    printf("\nNo of hundred note is %d", hndrd_note);
    amnt_wthdrw = amnt_wthdrw % 100;
    //printf("\nRemainder note is %d", amnt_wthdrw);

    fifty_note = amnt_wthdrw/50;
    printf("\nNo of fifty note is %d", fifty_note);
    amnt_wthdrw = amnt_wthdrw % 50;
    //printf("\nRemainder note is %d", amnt_wthdrw);

    ten_note = amnt_wthdrw/10;
    printf("\nNo of ten note is %d", ten_note);
    amnt_wthdrw = amnt_wthdrw % 10;
    //printf("\nRemainder note is %d", amnt_wthdrw);
    return 0;
}
