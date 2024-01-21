/* Twenty-five numbers are entered from the keyboard into an array. Write a program to find out how many of them are positive, how many are negative, how many are even and how many odd.
*/
#include<stdio.h>
int main()
{
    int arr[25];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<25;i++)
    {
        scanf("%d",&arr[i]);
    }
    int pos=0,neg=0,even=0,odd=0;
    for(int i=0;i<25;i++)
    {
        if(arr[i]>0)
        pos++;
        if(arr[i]<0)
        neg++;
        if(arr[i]%2==0)
        even++;
        if(arr[i]%2!=0)
        odd++;
    }
    printf("The number of positives= %d\n",pos);
    printf("The number of negatives= %d\n",neg);
    printf("The number of even numbers= %d\n",even);
    printf("The number of odd numbers= %d\n",odd);
}