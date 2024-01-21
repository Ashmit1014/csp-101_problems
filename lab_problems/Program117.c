/* Write a program to obtain transpose of a 4 x 4 matrix. The transpose of a matrix is obtained by exchanging the elements of each row with the elements of the corresponding column.*/
#include<stdio.h>
int main()
{
    int arr[4][4],transpose[4][4];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Original array:\n");
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            transpose[i][j]=arr[j][i];
        }
    }

    printf("Transpose:\n");
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d\t",transpose[i][j]);
        }
        printf("\n");
    }
}