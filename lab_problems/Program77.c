/*77.

   *
  **
 ***
****
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of lines= ");
    scanf("%d",&n);
    int i=1;
    while(i<=n)
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
        printf("\n");
        i++;
    }
}