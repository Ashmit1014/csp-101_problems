/*68.
 
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
    scanf("%d", &n);

    for (int i = 0 ; i < n ; i++)
    {
        for (int j = n - i ; j >=1 ; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}