/* Write a program to add first seven terms of the following series using a for loop:

1     2     3
-  +  -  +  - ......
1!    2!    3!
*/
#include<stdio.h>
int main()
{
   int terms=7;
   double sum=0.0;
    for(int i=1;i<=terms;i++)
    {
        long f=1;
        for(int j=i;j>=1;j--)
        {
            f=f*j;
        }
        sum=sum+(i/(double)f);
    }
    printf("The sum= %f",sum);
}