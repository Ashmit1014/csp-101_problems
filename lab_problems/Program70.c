/*70.

i.e. if input is 7
*
**
***
****
***
**
*
& if input is 8
*
**
***
****
****
***
**
*

*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of lines= ");
    scanf("%d",&n);
    if(n%2==0)
    {
        for(int i=1;i<=n/2;i++)
        {
            for(int j=1;j<=i;j++)
            {
                printf("*");
            }
            printf("\n");
        }
        for(int i=n/2;i>=1;i--)
        {
            for(int j=1;j<=i;j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    else{
        for(int i=1;i<=n/2+1;i++)
        {
            for(int j=1;j<=i;j++)
            {
                printf("*");
            }
            printf("\n");
        }
        for(int i=n/2;i>=1;i--)
        {
            for(int j=1;j<=i;j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
}