// If a five-digit number is input through the keyboard, write a program to calculate the sum of its digits.
// (Hint: Use the modulus operator ‘%’)
#include <stdio.h>
int main()
{
    int num,sum=0,d,c=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(int i=num;i>0;i=i/10)
    {
        d=i%10;
        sum=sum+d;
        c++;
    }
    if(c==5)
    printf("The Sum of digits= %d",sum);
    else
    printf("The number is a not a 5 digit number");
}
