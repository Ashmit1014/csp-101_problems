/*90. Write a program to produce the following output where number of line entered by keyboard:

   1
  2 3
 4 5 6
7 8 9 10
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of lines= ");
    scanf("%d",&n);
    int c=1;
    for (int i = 1 ; i <= n ; i++)
    {
        for (int s = 0 ; s < n - i ; s++)
        {
            printf(" ");
        }
        
        for (int k = 0 ; k < i ; k++)
        {
        printf("%d ", c);
        c++;
        }
        printf("\n");
    }
}