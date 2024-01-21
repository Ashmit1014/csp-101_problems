/*Write a programm to implement binary search.*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array= ");
    scanf("%d",&n);
    int arr[n];
    
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);

    int num;
    printf("Enter the number to be searched= ");
    scanf("%d",&num);
    
    int lowerbound=0;
    int upperbound=n-1;
    int f=0,index;
    while(lowerbound<upperbound)
    {
        int mid=(lowerbound+upperbound)/2;
        if(num>arr[mid])
        {
           lowerbound=mid+1; 
        }
        else if(num<arr[mid])
        {
            upperbound=mid-1;
        }
        else if(num==arr[mid])
        {
            f=1;
            printf("Entered number %d found at index position %d",num,mid);
            break;
        }
        else
           f=0; 
    }
    if(f==0)
    {
        printf("Entered element %d not found",num);
    }

}