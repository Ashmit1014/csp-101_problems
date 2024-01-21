/*A five-digit number is entered through the keyboard. Write a program to obtain the reversed number and to determine whether the original and reversed numbers are equal or not.*/
#include<stdio.h>
int main()
{
    int num,rev=0,d,c=0;
    printf("Enter a 5 number= ");
    scanf("%d",&num);
    for(int i=num;i>0;i=i/10)
    {
        c++;
        d=i%10;
        rev=(rev*10)+d;
    }
    if(c==5)
    {
        printf("Reverse number= %d\n",rev);
        if(rev==num)
        printf("The reverse and original are equal\n");
        else
        printf("The reverse and original are not equal\n");
    }
    else
    printf("The number is not 5 digit number\n");
}