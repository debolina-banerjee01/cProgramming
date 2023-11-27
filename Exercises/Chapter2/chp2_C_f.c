/*
If the ages of Ram, Shyam and Ajay are input through the keyboard, write a program to determine the youngest of the three.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Ram_age, Shym_age, Aj_age;
    printf("\nPlease enter Ram's age : ");
    scanf("%d", &Ram_age);
    printf("\nPlease enter Shyam's age : ");
    scanf("%d", &Shym_age);
    printf("\nPlease enter Ajay's age : ");
    scanf("%d", &Aj_age);

    if (Ram_age > Shym_age && Aj_age > Shym_age)
        printf("Shyam is the youngest");
    else
    {
        if (Shym_age > Ram_age && Aj_age > Ram_age)
            printf("Ram is the youngest");

        else
        {
            if (Ram_age > Aj_age && Shym_age > Aj_age)
                printf("Ajay is the youngest");
        }
    }
    return 0;
}
