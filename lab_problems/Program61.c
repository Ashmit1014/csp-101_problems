/*Write a program to print all prime numbers from 1 to 300. (Use nested loops, break and continue)*/
#include<stdio.h>
int main()
{
    for(int i=1;i<=300;i++)
    {
        int f=1;
        for(int j=2;j*j<=i;j++)
        {
            if(i%j==0)
            {
                f=0;
                break;
            }
        }
        if(f==1)
        {
            printf("%d is a prime number\n",i);
        }
        f=1;
    }
}