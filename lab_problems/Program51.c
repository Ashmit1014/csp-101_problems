/*Write a program to calculate overtime pay of 10 employees. Overtime is paid at the rate of Rs. 12.00 per hour for every hour worked above 40 hours. Assume that employees do not work for fractional part of an hour.*/
#include<stdio.h>
int main()
{
    int hours,overtime_pay;
    for(int i=1;i<=10;i++)
    {
        printf("Enter the hours worked by employee %d: ",i);
        scanf("%d",&hours);
        int overtime_hours=hours-40;
        if(overtime_hours>0)
        {
            overtime_pay=overtime_hours*12;
        }
        else{
            overtime_pay=0;
        }
        printf("The overtime pay of employee %d is Rs. %d\n",i,overtime_pay);
    }
}