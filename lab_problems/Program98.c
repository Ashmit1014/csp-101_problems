/* If a number 972 is entered through the keyboard, your program should print "Nine Seven Two". Write the program such that it does this for any positive integer.*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number= ");
    scanf("%d",&n);

    int d,rev=0;
    for(int i=n;i>0;i=i/10)
    {
        d=i%10;
        rev=(rev*10)+d;
    }
    
    for(int i=rev;i>0;i=i/10)
    {
        d=i%10;
        if(d==0)
        printf("Zero ");
        else if(d==1)
        printf("One ");
        else if(d==2)
        printf("Two ");
        else if(d==3)
        printf("Three ");
        else if(d==4)
        printf("Four ");
        else if(d==5)
        printf("Five ");
        else if(d==6)
        printf("Six ");
        else if(d==7)
        printf("Seven ");
        else if(d==8)
        printf("Eight ");
        else if(d==9)
        printf("Nine ");
    }
    printf("\n");
}