// If a five-digit number is input through the keyboard, write a program to print a new number by adding one to each
// of its digits. For example if the number that is input is 12391 then the output should be displayed as 23402.
#include <stdio.h>
int main()
{
    int num,d,new_num=0;
    printf("Enter a 5 digit number: ");
    scanf("%d", &num);

    for(int i=num;i>0;i=i/10)
    {
        d=i%10;
        if(d==9)
        {
            d=0;
        }
        else{
            d=d+1;
        }
        new_num=(new_num*10)+d;
    }
    int result=0;
    for(int i=new_num;i>0;i=i/10)
    {
        d=i%10;
        result=(result*10)+d;
    }
    printf("The resultant number= %d",result);
}