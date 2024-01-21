/*Write a program to copy the contents of one array into another in the reverse order.*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array= ");
    scanf("%d",&n);

    int arr[n],rev[n];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Original Array:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\n");
    
    for(int i=0;i<n;i++)
    {
        rev[i]=arr[n-i-1];
    }

    printf("Reverse Array:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d  ",rev[i]);
    }
    printf("\n");

}