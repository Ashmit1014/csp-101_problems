/*82.
 
i.e. if input is 7
 
   *
  ***
 *****
*******
 *****
  ***
   *
& if input is 8
 
   *
  ***
 *****
*******
*******
 *****
  ***
   *
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the nmuber of lines= ");
    scanf("%d",&n);
    if(n%2==0)
    {
        int i=1;
        while (i<=n/2)
        {
            int s=n-i;
            while(s>=1)
            {
                printf(" ");
                s--;
            }
            int j=1;
            while(j<=i)
            {
                printf("*");
                j++;
            }
            int k=i-1;
            while(k>0)
            {
                printf("*");
                k--;
            }
            printf("\n");
            i++;
        }
        i=n/2;
        while (i>=1)
        {
            int s=n-i;
            while(s>=1)
            {
                printf(" ");
                s--;
            }
            int j=1;
            while(j<=i)
            {
                printf("*");
                j++;
            }
            int k=i-1;
            while(k>0)
            {
                printf("*");
                k--;
            }
            printf("\n");
            i--;
        }
    }
    else
    {
        int i=1;
        while (i<=n/2+1)
        {
            int s=n-i;
            while(s>=1)
            {
                printf(" ");
                s--;
            }
            int j=1;
            while(j<=i)
            {
                printf("*");
                j++;
            }
            int k=i-1;
            while(k>0)
            {
                printf("*");
                k--;
            }
            printf("\n");
            i++;
        }
        i=n/2;
        while (i>=1)
        {
            int s=n-i;
            while(s>=1)
            {
                printf(" ");
                s--;
            }
            int j=1;
            while(j<=i)
            {
                printf("*");
                j++;
            }
            int k=i-1;
            while(k>0)
            {
                printf("*");
                k--;
            }
            printf("\n");
            i--;
        }
    }
}