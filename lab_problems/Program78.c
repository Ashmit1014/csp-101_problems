/*78.
 
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
        int j=i;
        while(j<=n)
        {
            printf("*");
            j++;
        }
        i++;
        printf("\n");
    }
}