/*If an array arr contains n elements, then write a program to check if arr[0] = arr[n-1], arr[1] = arr[n-2] and so on.*/
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

    printf("Entered array :\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    int f=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[n-i-1])
        f=1;
    }

    if(f==1)
    printf("The entered array does not follow the pattern of arr[0] = arr[n-1], arr[1] = arr[n-2] and so on.\n");
    else
    printf("The entered array follows the pattern of arr[0] = arr[n-1], arr[1] = arr[n-2] and so on.\n");
}