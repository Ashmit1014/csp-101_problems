/*Write a program to produce the following pattaran where number of line entered by keyboard:(Q66-Q75) using for loop

pattern best viewed at in notepad with Font:Lucida console, Font style:Regular and Size:10

66. 

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

    for (int i = 1 ; i <= n ; i++ )
    {
        for (int j = 1 ; j <= i ; j++ )
        {
            printf("*");
        }
        printf("\n");
    }
}