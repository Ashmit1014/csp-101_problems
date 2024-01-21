/* A library charges a fine for every book returned late. For first 5 days the fine is 50 paise per day, for 6-10 days fine is one rupee per day and
above 10 days fine is 5 rupees per day. If you return the book after 30 days your membership will be cancelled. Write a program to accept the number of days the member is late to return the book and display the fine or the appropriate message.*/
#include<stdio.h>
int main()
{
    int days_late;
    printf("Enter the number of days late: ");
    scanf("%d",&days_late);
    float fine=0.0;
    if(days_late<=5)
    {
    fine=0.5*days_late;
    printf("Fine= Rs. %f\n",fine);
    }
    else if(days_late>=6&&days_late<=10)
    {
    fine=5*0.5+(days_late-5)*1;
     printf("Fine= Rs. %f\n",fine);
    }
    else if(days_late>10)
    {
    fine=5*0.5+5*1+(days_late-10)*5;
     printf("Fine= Rs. %f\n",fine);
    }
    else if(days_late>=30)
    printf("Menbership is cancelled\n");
    else
    printf("Not is a vaild input\n");

   
}