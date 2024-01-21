/*86. Write a program to produce the following pattaran:

A B C D E F G F E D C B A
A B C D E F   F E D C B A
A B C D E       E D C B A
A B C D           D C B A
A B C               C B A
A B                   B A
A                       A
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of lines= ");
    scanf("%d",&n);
    for (int i = 1 ; i <= n ; i++)
    {
        for (int j = 1 ; j <= n - i ; j++)
        {
            printf("%c ", j + 64);
        }
        if (i != 0)
        {
            for (int k = 1 ; k <=(2*i-1); k++)
            {
                printf("  ");
            }
        }
        if (i == 0)
        {
            for (int l = n - 2 ; l >=  0 ; l--)
            {
                printf("%c ", l + 65);
            }
        }
        else
        {
            for (int m = n - i; m >= 0 ; m--)
            {
                printf("%c ", m + 64);
            }
        }
        printf("\n");
    }
}