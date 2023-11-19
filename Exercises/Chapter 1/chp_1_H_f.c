/*
Two numbers are input through the keyboard into two
locations C and D. Write a program to interchange the
contents of C and D.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int C, D, E;
    printf ("\n Before change please enter the value of C:");
    scanf("%d", &C);
    printf ("\n Before change please enter the value of D: ");
    scanf("%d", &D);

    E = D;
    D = C;
    C = E;
    printf("\n after change please enter the value of C: ");
    scanf("%d", &C);
    printf ("\n after change please enter the value of D: ");
    scanf("%d", &D);



    return 0;
}
