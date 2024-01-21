/*85.

0
10
010
1010
 
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of lines= ");
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i)
        {
            if((i+j)%2==0)
            printf("0");
            else
            printf("1");
            
            j++;
        }
        printf("\n");
        i++;
    }

}