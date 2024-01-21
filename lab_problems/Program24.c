/*Program to check if number is even or odd*/
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%i", &num);

    if (num % 2 == 0)
    {
        printf("%d is Even",num);
    }
    else
    {
        printf("%d is Odd",num);
    }
    printf("\n");
}