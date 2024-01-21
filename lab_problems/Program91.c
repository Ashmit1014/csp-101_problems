/*91. Write a program to produce the following output where number of line entered by keyboard:

    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of lines= ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++) 
    {
        for (int s = 1; s <=n - i - 1; s++) //to print spaces
        {
            printf(" ");
        }
        int coeff = 1;
        for (int k = 0; k <= i; k++) //to print the coeffecients
        {
            printf("%d ", coeff);
            coeff = coeff * (i - k) / (k + 1);
        }

        printf("\n");
    }
}