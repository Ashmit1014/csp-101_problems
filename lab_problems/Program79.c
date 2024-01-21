/*79.

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
    int i=1;
    while(i<=n)
    {
        int s=i;
        while (s>=1)
        {
           printf(" ");
           s--;
        }
        int j=i;
        while (j<=n)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
}