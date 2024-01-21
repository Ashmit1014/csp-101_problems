/*Write a program to pick up the largest number from any 5 row by 5 column matrix.*/
#include<stdio.h>
int main()
{
    int arr[5][5];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    printf("The Array:\n");
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }

    int largest=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(largest<arr[i][j])
            largest=arr[i][j];
        }
    }
    printf("%d is the largest number.\n",largest);
}