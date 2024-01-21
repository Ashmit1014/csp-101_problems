/* In an inter-college competition, various sports and games are played between different colleges like cricket, basketball, football, hockey, lawn tennis, table tennis, carom and chess. The information regarding the games won by a particular college is stored in bit numbers 0, 1, 2, 3, 4, 5, 6, 7 respectively of an integer variable called game. The college that wins in 5 or more than 5 games is awarded the Champion of Champions trophy. If a number is entered through the keyboard, then write a program to find out whether the college won the Champion of the Champions trophy or not.*/
#include<stdio.h>
int main()
{
    int game,c=0;
    printf("Enter the information about the games won= ");
    scanf("%d",&game);
    for(int i=7;i>=0;i--)
    {
        int andmask=1<<i;
        int k=game&andmask;
        k==0?printf("0"):printf("1");
        if(k!=0)
        c++;
    }
    printf("\n");
    if(c>=5)
    printf("The college won the Champion of the Champions trophy");
    else
    printf("The college lost the Champion of the Champions trophy");

}