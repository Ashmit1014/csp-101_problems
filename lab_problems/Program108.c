/* Write a programm to implement Bubble Sort. */
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array= ");
    scanf("%d",&n);
    
    int arr[n];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);

     printf("Unsorted array :\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    
     printf("Sorted array :\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");

}