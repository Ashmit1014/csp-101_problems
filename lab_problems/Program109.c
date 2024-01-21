/* Write a programm to implement Insertion sort.*/
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
    
    //insetion sort
    for(int i=1;i<n;i++)
    {
        int j=i-1;
        int temp=arr[i];
        while(j>=0&&arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }

    printf("Sorted array :\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}