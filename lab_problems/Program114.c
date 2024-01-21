/* Find the smallest number in an array using pointers.*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter the size of the array= ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
   
    int *ptr = arr;

    int smallest =0;

    for (int i = 1; i < n; i++) {
        if (*(ptr + i) < smallest) {
            smallest = *(ptr + i);
        }
    }

    printf("The smallest number in the array is: %d\n", smallest);

}