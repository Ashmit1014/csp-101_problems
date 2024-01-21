/*67.

   *
  **
 ***
*****/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of lines= ");
    scanf("%d", &n);

    for (int i = 1 ; i <= n ; i++)
    {
        for (int s = n - i; s >=1 ; s--)
        {
            printf(" ");
        }
        for (int j = 1 ; j <= i ; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}