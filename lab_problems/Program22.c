/*The time field in the directory entry is 2 bytes long. Distribution of different bits which account for hours, minutes and seconds is given below. Write a program which would receive the two-byte time entry in form of number and print the hours, minutes and seconds.
          H H H H H M M M M M M S S S S S*/
#include<stdio.h>
int main()
{
    int h,s,m;
    printf("ENTER THE HOURS= ");
    scanf("%d",&h);
    printf("ENTER THE MINUTES= ");
    scanf("%d",&m);
    printf("ENTER THE SECONDS= ");
    scanf("%d",&s);
    int i,andmask,k;
    for(i=4;i>=0;i--)
    {
        andmask=1<<i;
        k=h&andmask;
        k==0?printf("0 "):printf("1 ");
    }
    printf(" ");
    for(i=5;i>=0;i--)
    {
        andmask=1<<i;
        k=m&andmask;
        k==0?printf("0 "):printf("1 ");
    }
    printf(" ");
    for(i=4;i>=0;i--)
    {
        andmask=1<<i;
        k=s&andmask;
        k==0?printf("0 "):printf("1 ");
    }

}