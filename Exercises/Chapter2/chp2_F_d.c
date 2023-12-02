/*
A certain grade of steel is graded according to the following conditions:
(i) Hardness must be greater than 50
(ii) Carbon content must be less than 0.7
(iii) Tensile strength must be greater than 5600
The grades are as follows:
Grade is 10 if all three conditions are met
Grade is 9 if conditions (i) and (ii) are met
Grade is 8 if conditions (ii) and (iii) are met
Grade is 7 if conditions (i) and (iii) are met
Grade is 6 if only one condition is met
Grade is 5 if none of the conditions are met
Write a program, which will require the user to give values of hardness, carbon content and tensile strength of the steel under consideration and
output the grade of the steel.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hardness, t_strength, grade;
    float c_content;
    printf("\nEnter hardness of the steel: ");
    scanf("%d", &hardness);

    printf("\nEnter tensile strength of the steel: ");
    scanf("%d", &t_strength);

    printf("\nEnter carbon content of the steel: ");
    scanf("%f", &c_content);

    if (hardness > 50 && c_content < 0.7 && t_strength > 5600)
    {
        grade = 10;
    }
    else if (hardness > 50 && c_content < 0.7 && t_strength <= 5600)
    {
        grade = 9;
    }
    else if (hardness <= 50 && c_content < 0.7 && t_strength > 5600)
    {
        grade = 8;
    }
    else if (hardness > 50 && c_content >= 0.7 && t_strength > 5600)
    {
        grade = 7;

    }
    else if (hardness > 50 || c_content < 0.7 || t_strength > 5600)
    {
        grade = 6;
    }
    else if (!(hardness > 50 || c_content < 0.7 || t_strength > 5600))
    {
        grade = 5;
    }
    printf("\nGrade of the steel is %d",grade);
    return 0;
}
