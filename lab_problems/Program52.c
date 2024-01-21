/*Write a program to find the factorial value of any number entered through the keyboard.*/
#include<stdio.h>
int main()
{
    int num;
    long f=1;
    printf("Enter the number= ");
    scanf("%d",&num);

    if(num>=0)
    {
        if(num==0)
        {
            f=1;
        }
        else{
            for(int i=num;i>=1;i--)
            {
                f=f*i;
            }
        }
        printf("The factorial of %d is %ld",num,f);
    }
    else
    {
        printf("Factorial of %d is not possible",num);
    }
}