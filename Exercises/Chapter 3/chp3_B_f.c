/*
Write a program for a matchstick game being played between the computer and a user. Your program should ensure that the computer always wins.
Rules for the game are as follows:
− There are 21 matchsticks.
− The computer asks the player to pick 1, 2, 3, or 4 matchsticks.
− After the person picks, the computer does its picking.
− Whoever is forced to pick up the last matchstick loses the game.

Solution:
_____________________________________________________________________

Step 1: Total number of matchsticks is between 1 and 21.
Step 2: Total number User is going to choose either 1 or 2 or 3 or 4 from the given number of matchsticks.
Step 2: User can select only 1 or 2 or 3 or 4 to be the matchsticks number. If any number other than the mentioned one is chosen, the input will be
        considered incorrect and the loop will break. The game ends right there.
Step 3: No of rest of the matchsticks will be the number that is left after the user has selected matchsticks from the total no. of it. That number is
        denoted as remaining matchsticks after user chooses.
Step 4: Matchsticks chosen by computer will be subtraction of matchsticks no. by user from 5. Here is the explanation of choosing 5:-
        I) If 5 runs 4 cycles, it will be 5 * 4 = 20.
        II) Here the total number of matchsticks is 21, which is one matchsticks more than 20.
        III) If no. of matchsticks by user + no. of matchsticks by computer = 5 is considered and matchsticks by user is selected as 1 or 2 or 3 or 4,
        matchsticks by computer can be calculated from the prior equation.
        IV) Besides, the number 5 is not given in the list (1 or 2 or 3 or 4) of numbers of matchsticks in the question. Also, it will take 4 cycles
        for 5 to reach up to the value 20 (i.e., 5 * 4 = 20). After that, 1 needs to be added which will be picked by the user in the end and he will
        loose.
Step 5: Remaining matchstick after computer chooses = remaining total no of matchsticks (from step 3) - matchsticks picked by computer.
Step 6: Th last one matchstick will be picked by user and he loses the game (according to the question).

*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matchstick_num_user, matchstick_num_comp, tot_matchs= 21;

    while(tot_matchs >= 1)
    {
        printf("\nEnter number of matchstick to choose from 1 or 2 or 3 or 4 for user: ");
        scanf("%d", &matchstick_num_user);

        if (!(matchstick_num_user == 1 || matchstick_num_user ==2 || matchstick_num_user == 3 || matchstick_num_user== 4))
        {
            printf("\nIncorrect input. Exit the game");
            break;
        }


        tot_matchs = tot_matchs - matchstick_num_user;
        printf("\nRemaining matchstick after user chooses = %d", tot_matchs);

        matchstick_num_comp = 5- matchstick_num_user;
        printf("\nNumber of matchsticks computer has chosen = %d", matchstick_num_comp);
        tot_matchs = tot_matchs - matchstick_num_comp;
        printf("\nRemaining matchstick after computer chooses = %d\n\n", tot_matchs);

        if (tot_matchs == 1)
            {
                printf("\nUser chooses and user loses");
                break;
            }
    }

    return 0;
}
