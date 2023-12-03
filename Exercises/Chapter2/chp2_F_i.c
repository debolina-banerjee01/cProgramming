/*
A university has the following rules for a student to qualify for a degree with A as the main subject and B as the subsidiary subject:
(a) He should get 55 percent or more in A and 45 percent or more in B.
(b) If he gets less than 55 percent in A he should get 55 percent or more in B. However, he should get at least 45 percent in A.
(c) If he gets less than 45 percent in B and 65 percent or more in A he is allowed to reappear in an examination in B to qualify.
(d) In all other cases he is declared to have failed.
Write a program to receive marks in A and B and Output whether the student has passed, failed or is allowed to reappear in B.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{

    float marks_A, marks_B;
    printf("\nEnter percentage of marks in subject A: ");
    scanf("%f", &marks_A);

    printf("\nEnter percentage of marks in subject B: ");
    scanf("%f", &marks_B);

    if
     (
      (marks_A >= 55 && marks_B >= 45) ||
      (marks_A >= 45 && marks_A <= 55 && marks_B >= 55)
    )
    {
        printf("\nThe student has qualified");
    }
    else if (marks_A >= 65 && marks_B <= 45)
    {
        printf ("\nThe student is allowed to reappear in an examination in B to qualify");
    }
    else
    {
        printf("\nThe student is declared to have failed");
    }
    return 0;

}
