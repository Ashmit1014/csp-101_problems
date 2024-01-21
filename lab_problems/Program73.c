/*73.

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
    for(int i=1;i<=n;i++)
    {
       for(int j=i;j<=n;j++)
       {
            printf("%d",a%10);
            a++;
        }
        printf("\n");
    }
}