/*
An Insurance company follows following rules to calculate premium.

(1) If a person’s health is excellent and the person is between 25 and 35 years of age and lives in a city and is a male then the premium is Rs. 4  per
thousand and his policy amount cannot exceed Rs. 2 lakhs.
(2) If a person satisfies all the above conditions except that the sex is female then the premium is Rs. 3 per thousand and her policy amount cannot
exceed Rs. 1 lakh.
(3) If a person’s health is poor and the person is between  25 and 35 years of age and lives in a village and is a male then the premium is Rs. 6 per
thousand and his policy cannot exceed Rs. 10,000.
(4) In all other cases the person is not insured.

Write a program to output whether the person should be insured or not, his/her premium rate and maximum amount for which he/she can be insured
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hlth, age, live, g;

    printf("\nEnter health status : 0 -> Excellent, 1 -> Poor: ");
    scanf("%d",&hlth);
    printf("\nEnter Age: ");
    scanf("%d",&age);
    printf("\nEnter 0 if the person lives in a City, else 1 for Village : ");
    scanf("%d",&live);
    printf("\nEnter 0 if the person is Male, else 1 for Female : ");
    scanf("%d",&g);

/*     printf("\n-------------------------------");
 *     printf("\nEntered Data...");
 *     printf("\nHealth : %d",hlth);
 *     printf("\nAge : %d",age);
 *     printf("\nLives in a City? :%d",live);
 *     printf("\nGender: %d",g);
 *     printf("\n-------------------------------");
 */

    if (hlth == 0 && (age >= 25  && age <= 35) && live == 0 && g == 0)
    {
        printf("\nthe premium is Rs. 4 per thousand and his policy amount cannot exceed Rs. 2 lakhs");
    }
    else if (hlth == 0 && (age >= 25  && age <= 35) && live == 0 && g == 1)
    {
        printf("\nthe premium is Rs. 3 per thousand and her policy amount cannot exceed Rs. 1 lakh");
    }
    else if (hlth == 1 && (age >= 25  && age <= 35) && live == 1 && g== 0 )
    {
        printf("\nthe premium is Rs. 6 per thousand and his policy cannot exceed Rs. 10000");
    }
    else
    {
        printf("\nthe person is not insured");
    }

    return 0;
}
