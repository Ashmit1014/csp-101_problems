/* Write a program to sort all the elements of a 4 x 4 matrix.*/
#include<stdio.h>
int main()
{
    int arr[4][4],arr1[4*4];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    int c=0;
    printf("Entered Array:\n");
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d\t",arr[i][j]);
            arr1[c]=arr[i][j];
            c++;
        }
        printf("\n");
    }

    for(int i=0;i<(4*4);i++)
    {
        for(int j=0;j<(4*4)-1;j++)
        {
            if(arr1[j]>arr1[j+1])
            {
                int temp=arr1[j];
                arr1[j]=arr1[j+1];
                arr1[j+1]=temp;
            }
        }
    }

    c=0;
    printf("Sorted Array:\n");
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            arr[i][j]=arr1[c];
            c++;
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}