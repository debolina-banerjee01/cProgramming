/*
Write a program to enter the numbers till the user wants and at the end it should display the count of positive, negative and zeros entered.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int positv_count = 0, neg_count =0, zero_count =0, inp_num, another = 0;
    do
    {
      printf("\nPlease enter a positive number or negative number or zero: ");
      scanf("%d", &inp_num);

      if (inp_num == 0)
      {
          zero_count = zero_count +1;
      }
      else if (inp_num >0)
      {
          positv_count = positv_count +1;
      }
      else if (inp_num <0)
      {
          neg_count = neg_count +1;
      }

      printf("\nWant to enter another number? Type 0 for no or 1 for yes: ");
      scanf("%d", &another);

    }while (another == 1);

    printf("\nThe count of positive number is %d", positv_count);
    printf("\nThe count of negative number is %d", neg_count);
    printf("\nThe count of zero is %d", zero_count);

    return 0;
}
