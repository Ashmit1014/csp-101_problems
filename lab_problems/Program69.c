/*69.

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
    for(int i=n;i>=1;i--)
    {
        for(int s=n-i;s>=1;s--)
        {
            printf(" ");
        }
        for(int j=i;j>=1;j--)
        {
            printf("*");
        }
        printf("\n");
    }
}