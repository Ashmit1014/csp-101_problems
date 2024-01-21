/*74.

i.e. if input is 5
  1
 234
56789
 012
  3

& if input is 6
  1
 234
56789
01234
 567
  8
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of lines= ");
    scanf("%d",&n);
    int a=1;
    if(n%2==0)
    {
        for(int i=1;i<=n/2;i++)
        {
            for(int s=n-i;s>=1;s--)
            {
                printf(" ");
            }
            for(int j=1;j<=i;j++)
            {
                printf("%d",a%10);
                a++;
            }
            for(int k=i-1;k>0;k--)
            {
                printf("%d",a%10);
                a++;
            }
            printf("\n");
        }
        for(int i=n/2;i>=1;i--)
        {
            for(int s=n-i;s>=1;s--)
            {
                printf(" ");
            }
            for(int j=1;j<=i;j++)
            {
                printf("%d",a%10);
                a++;
            }
            for(int k=i-1;k>0;k--)
            {
                printf("%d",a%10);
                a++;
            }
            printf("\n");
        }
    }
    else
    {
        for(int i=1;i<=n/2+1;i++)
        {
            for(int s=n-i;s>=1;s--)
            {
                printf(" ");
            }
            for(int j=1;j<=i;j++)
            {
                printf("%d",a%10);
                a++;
            }
            for(int k=i-1;k>0;k--)
            {
                printf("%d",a%10);
                a++;
            }
            printf("\n");
        }
        for(int i=n/2;i>=1;i--)
        {
            for(int s=n-i;s>=1;s--)
            {
                printf(" ");
            }
            for(int j=1;j<=i;j++)
            {
                printf("%d",a%10);
                a++;
            }
            for(int k=i-1;k>0;k--)
            {
                printf("%d",a%10);
                a++;
            }
            printf("\n");
        }
    }
}