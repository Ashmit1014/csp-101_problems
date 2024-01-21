/* Write a program to find the greatest of the three numbers entered through the keyboard.*/
#include<stdio.h>
int main()
{
    int num1,num2,num3,highest=0;
    printf("Enter first number= ");
    scanf("%d",&num1);
    printf("Enter second number= ");
    scanf("%d",&num2);
    printf("Enter third number= ");
    scanf("%d",&num3);
    if(num1>=num2&&num1>=num3)
    highest=num1;
    else if(num2>=num1&&num2>=num3)
    highest=num2;
    else if(num3>=num2&&num3>=num1)
    highest=num3;

    printf("The highest number= %d",highest);
}