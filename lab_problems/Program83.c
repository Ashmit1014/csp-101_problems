/*83.

12345
6789
012
34
5
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of lines= ");
    scanf("%d",&n);
    int a=1;
    int i=1;
    while (i<=n)
    {
        int j=i;
        while(j<=n)
        {
            printf("%d",a%10);
            a++;
            j++;
        }
        printf("\n");
        i++;
    }
    
}