/*Write a program for a matchstick game being played between the computer and a user. Your program should ensure that the computer always wins. Rules for the game are as follows:
    - There are 21 matchsticks.
    - The computer asks the player to pick 1, 2, 3, or 4 matchsticks.
    - After the person picks, the computer does its picking.
    - Whoever is forced to pick up the last matchstick loses the game.*/
#include<stdio.h>
int main()
{
    int matchstick=21,num_pick,computer_pick;
    while(1)
    {
        printf("Number of matches left= %d\n",matchstick);
        printf("You can pick 1, 2, 3, or 4 matchsticks\nPick the number of matchsticks = ");
        scanf("%d",&num_pick);
        
        if(num_pick>4||num_pick<1)
        continue;

        matchstick=matchstick-num_pick;
        printf("Number of matches left= %d\n",matchstick);

        computer_pick=5-num_pick;
        printf("Out of which computer picked %d\n",computer_pick);

        matchstick=matchstick-computer_pick;
        if(matchstick==1)
        {
            printf("Number of matches left = %d\n",matchstick);
            printf("You lost the game\n");
            break;
        }
    }
}