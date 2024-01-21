/* Write a program to print out all Armstrong numbers between 1 and 500. If sum of cubes of each digit of the number is equal to the number itself, then the number is called an Armstrong number. For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 )*/
#include<stdio.h>
int main()
{
    for(int i=1;i<=500;i++)
    {
        int d,cu,sum=0;
        for(int j=i;j>0;j=j/10)
        {
            d=j%10;
            cu=d*d*d;
            sum=sum+cu;
        }
        if(sum==i)
        {
            printf("%d is an Armstrong number\n",i);
        }
    }
}