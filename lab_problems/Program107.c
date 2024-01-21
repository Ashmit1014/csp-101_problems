/* Write a programm to implement Selection Sort.*/
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

    int min_index;
    for(int i=0;i<n;i++)
    {
        min_index=i;//assume smallest to be arr[i]
        for(int j=i+1;j<n;j++)
        {
            if(arr[min_index]>arr[j])
            {
                min_index=j;//if not then replace minindex by the index of next smaller element
            }
        }
        int temp=arr[i];/*swap the elemnts,if min_index is same then no change will occur if not the same then it will actually swap*/
        arr[i]=arr[min_index];
        arr[min_index]=temp;
    }

    printf("Sorted array :\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}