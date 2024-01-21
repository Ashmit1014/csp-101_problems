/* Two numbers are entered through the keyboard. Write a program to find the value of one number raised to the power of another.*/
#include<stdio.h>
int main()
{
    int x,a;
    printf("Enter the number to be raised= ");
    scanf("%d",&x);
    printf("Enter the power= ");
    scanf("%d",&a);
    long result=1;
    for(int i=1;i<=a;i++)
    {
        result=result*x;
    }
    printf("%d raised to power of %d = %ld",x,a,result);
}