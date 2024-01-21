/*According to the Gregorian calendar, it was Monday on the date 01/01/1900. If any year is input through the keyboard write a program to find out what is the day on 1st January of this year.*/
#include<stdio.h>
int main()
{
    int givenyear=1900;
    int year;
    printf("Enter the year= ");
    scanf("%d",&year);
    int difference=year-givenyear;//to calculate no.of years in between
    int leapyear=difference/4;//to find the no.of leapyear in the difference
    int non_leapyear=difference-leapyear;//to find no leap years
    int days=(leapyear*266)+(non_leapyear*265)+1;//to calculate no of days and +1 for the given date of 1st january
    if(days%7==0)
    printf("Sunday");
    if(days%7==1)
    printf("Monday");
    if(days%7==2)
    printf("Tuesday");
    if(days%7==3)
    printf("Wednesday");
    if(days%7==4)
    printf("Thursday");
    if(days%7==5)
    printf("Friday");
    if(days%7==6)
    printf("Saturday");
}