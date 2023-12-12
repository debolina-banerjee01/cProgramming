/*
Write a program to print out all Armstrong numbers between 1 and 500. If sum of cubes of each digit of the number is equal to the number itself, then
the number is called an Armstrong number. For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 )

How to solve the above problem:

__________________________________

Step 1: Initialize  the value of i from 1 and keep it within 500.
Step 2: copying the number from i, since do not want to disturb i. i should be a fresh number, every tie the while loop runs.
Step 3: Sum of the cube digits is considered 0 to avoid any residual value from the previous cycle.
Step 4: Copied number will never be 0. As i starts from 1 according to the question, so should be the copied number.
Step 5: Sum of cube digits is 0 when loop runs for the first time. To determine the quotient, copied number % 10 is written. Then cube f the quotient is
        required. Finally, sum of cube digits and cube of the quotient is added to assign the new value into sum of cube digits.
Step 6: Copied number /10 is done to reduce the number.
Step 7: If sum of the cube digits is equal to i, i is printed as an Armstrong number.

*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int inp_num, copied_num, sum_of_digits=0, sum_of_cube_digits=0,i=1;

    for(i =1; i<= 500; i++)
    {
        copied_num = i;
        sum_of_cube_digits = 0;
        while (copied_num !=0)
        {
          sum_of_cube_digits = sum_of_cube_digits + pow(copied_num % 10, 3);
          copied_num = copied_num / 10;
        }
        if(sum_of_cube_digits == i)
        {
           printf("\n%d is Armstrong number", i);
        }
    }
    return 0;
}
