/*Write a program to enter the numbers till the user wants and at the end it should display the count of positive, negative and zeros entered.*/
#include<stdio.h>
int main()
{
    char ch;
    int num,pos=0,neg=0,zero=0;
    printf("Do you want to enter the numbers (y/n) : ");
    scanf("%c",&ch);
    if(ch=='y'||ch=='Y')
    {
    while(ch=='Y'||ch=='y')
    {
        printf("Enter the number= ");
        scanf("%d",&num);

        if(num>0)
        pos++;
        else if(num<0)
        neg++;
        else
        zero++;
        getchar();
        printf("Do you want to enter more (y/n): ");
        scanf("%c",&ch);
    }
    }
    printf("The number of positive integers= %d\n",pos);
    printf("The number of negative integers= %d\n",neg);
    printf("The number of zeroes= %d\n",zero);

}