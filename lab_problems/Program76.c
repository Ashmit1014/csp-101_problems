/*Write a program to produce the following pattaran,where number of line entered by keyboard:(Q76-Q85) using while loop


76. 

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
    scanf("%d", &n);
    int i = 1;
    while (i <= n)
    {
       int j=1;
       while(j<=i)
       {
        printf("*");
        j++;;
       }
        printf("\n");
        i++;
    }
}