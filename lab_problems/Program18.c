/* Write a program to find out how many days and how many weeks have passed between the dates 01/01/92 to 31/05/92. 
 Also find out how many days could not get evened out into weeks.*/
#include <stdio.h>
int main()
{
    int date1,date2,month1,month2,year;
    printf("Enter the date of 1st date= ");
    scanf("%d",&date1);
    printf("Enter the month of 1st date= ");
    scanf("%d",&month1);
    printf("Enter the date of 2nd date= ");
    scanf("%d",&date2);
    printf("Enter the month of 2nd date= ");
    scanf("%d",&month2);
    printf("Enter the year= ");
    scanf("%d",&year);
    printf("First date: %d / %d / %d \n",date1,month1,year);
    printf("Second date: %d / %d / %d \n",date2,month2,year);
    int f=1,daysum=0;
    if(year%4==0)
    {
        if(year%100==0)
        {
            if(year%400==0)
            {
                f=1;
            }
            else
                f=0;
        }
        else
        f=1;
    }
    else
    f=0;

    int day1=0;
    if(month1==2)
    {
        if(f==1)
         day1=29-date1;
        else
         day1=28-date1;
    }
    else
    {
        if(month1<8)
        {
            if(month1%2==0)
            day1=30-date1;
            else
            day1=31-date1;
        }
        else
        {
            if(month1%2==0)
            day1=31-date1;
            else
            day1=30-date1;
        }
    }
    daysum=daysum+day1;
    for(int i=month1+1;i<month2;i++)
    {
        if(i<8)
        {
            if(i==2)
            {
                if(f==1)
                daysum=daysum+29;
                else
                daysum=daysum+28;
            }
            if(i%2==0&&i!=2)
            {
                daysum=daysum+30;
            }
            else if (i%2!=0)
            {
                   daysum=daysum+31; /* code */
            }
        }
        else
        {
            if(i%2==0)
            daysum=daysum+31;
            else
            daysum=daysum+30;
        }
    }
    daysum=daysum+date2;
    int numweeks= daysum/7;
    int numdays= daysum%7;
    printf("Total days between the two dates= %d\n",daysum);
    printf("The number of weeks= %d\n",numweeks);
    printf("The number of days= %d\n",numdays);
}