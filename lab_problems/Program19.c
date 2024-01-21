/*Write a program to show bits of integer. ex. for input 2 output will be 0000000000000010 and for -1 1111111111111111.*/
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number= ");
    scanf("%d",&num);
    int k,andmask;
    for(int i=15;i>=0;i--)
    {
        andmask=1<<i;
        k=num&andmask;
        if(k==0)
        printf("0");
        else
        printf("1");
    }
}