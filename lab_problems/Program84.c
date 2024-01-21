/*84.

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
            printf("%d",a%10);
            a++;
            j++;
        }
        int k=i-1;
        while(k>0)
        {
            printf("%d",a%10);
            a++;
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
            printf("%d",a%10);
            a++;
            j++;
        }
        int k=i-1;
        while(k>0)
        {
            printf("%d",a%10);
            a++;
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
            printf("%d",a%10);
            a++;
            j++;
        }
        int k=i-1;
        while(k>0)
        {
            printf("%d",a%10);
            a++;
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
            printf("%d",a%10);
            a++;
            j++;
        }
        int k=i-1;
        while(k>0)
        {
            printf("%d",a%10);
            a++;
            k--;
        }
        printf("\n");
        i--;
    }
    }
}