/* Write a program to find the greatest of the three numbers entered through the keyboard using conditional operators.*/
#include<stdio.h>
int main()
{
    int a,b,c,greatest=0;
    printf("Enter the first number= ");
    scanf("%d",&a);
    printf("Enter the second number= ");
    scanf("%d",&b);
    printf("Enter the third number= ");
    scanf("%d",&c);

    greatest=((a>=b)&&(a>=c))?a:(((b>=a)&&(b>=c))?b:(((c>=b)&&(c>=a))?c:0));
    if(greatest==0)
    {
        printf("Invalid input");
    }
    else
    printf("The greatest number= %d",greatest);
}