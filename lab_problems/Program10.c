// If a five-digit number is input through the keyboard, write a program to reverse the number.

#include <stdio.h>
int main(void)
{    
    int num,rev=0,d,c=0;
     printf("Enter a number: ");
    scanf("%d", &num);
    for(int i=num;i>0;i=i/10)
    {
        d=i%10;
       rev=(rev*10)+d;
        c++;
    }
     if(c==5)
    printf("The Reverse number= %d",rev);
    else
    printf("The number is a not a 5 digit number");
}
