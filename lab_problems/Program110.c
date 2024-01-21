/*Write a programm to implement mearging of two sorted array.*/
#include<stdio.h>
int main()
{
    int n1;
    printf("Enter the size of array 1= ");
    scanf("%d",&n1);
    int arr1[n1];
    printf("Enter the elements of Array 1:\n");
    for(int i=0;i<n1;i++)
    scanf("%d",&arr1[i]);
    
    int n2;
    printf("Enter the size of array 2= ");
    scanf("%d",&n2);
    int arr2[n2];
    printf("Enter the elements of Array 2:\n");
    for(int i=0;i<n2;i++)
    scanf("%d",&arr2[i]);

    printf("Array 1:\n");
    for(int i=0;i<n1;i++)
    printf("%d\t",arr1[i]);
    printf("\n");
    
    printf("Array 2:\n");
    for(int i=0;i<n2;i++)
    printf("%d\t",arr2[i]);
     printf("\n");

    int arr3[n1+n2];
    for(int i=0;i<n1;i++)
    {
        arr3[i]=arr1[i];
    }
    for(int i=0;i<n2;i++)
    {
        arr3[n1+i]=arr2[i];
    }
    
    for(int i=0;i<(n1+n2);i++)
    {
        for(int j=0;j<(n1+n2-1);j++)
        {
            if(arr3[j]>arr3[j+1])
            {
                int temp=arr3[j];
                arr3[j]=arr3[j+1];
                arr3[j+1]=temp;
            }
        }
    }
    
    printf("The Merged Array:\n");
    for(int i=0;i<n1+n2;i++)
    {
        printf("%d\t",arr3[i]);
    }
    printf("\n");
}