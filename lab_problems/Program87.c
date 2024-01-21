/*87.Write a program to produce the following pattaran:

*******
 *****
  ***
   *
  ***
 *****
*******
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of lines= ");
    scanf("%d",&n);
    if(n%2==0)
    {
    for(int i=n/2;i>=1;i--)
        {
            for(int s=n-i;s>=1;s--)
            {
                printf(" ");
            }
           for(int j=1;j<=2*i-1;j++)
           {
            printf("*");
           }
            printf("\n");
        }
        for(int i=1;i<=n/2;i++)
        {
            for(int s=n-i;s>1;s--)
            {
                printf(" ");
            }
            for(int j=1;j<=2*i+1;j++)
           {
            printf("*");
           }
            printf("\n");
        }
    }
    else
    {
        for(int i=n/2+1;i>=1;i--)
        {
            for(int s=n-i;s>=1;s--)
            {
                printf(" ");
            }
           for(int j=1;j<=2*i-1;j++)
           {
            printf("*");
           }
            printf("\n");
        }
        for(int i=1;i<=n/2;i++)
        {
            for(int s=n-i;s>1;s--)
            {
                printf(" ");
            }
            for(int j=1;j<=2*i+1;j++)
           {
            printf("*");
           }
            printf("\n");
        }
    }
}