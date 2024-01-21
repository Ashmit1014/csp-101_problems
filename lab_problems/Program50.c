/* A number is entered through the keyboard. The number may contain 1,2,3,4, or 5 digits. Write a program to find the number of digits in the number.*/
#include<stdio.h>
int main()
{
    int num,c=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(int i=num;i>0;i=i/10)
    c++;

    printf("The number of digits in %d is %d\n",num,c);
}