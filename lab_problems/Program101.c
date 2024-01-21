/* Write a programm to store marks of 10 students in array, find average.*/
#include<stdio.h>
int main()
{
    int arr[10];
    printf("Enter the array elements: \n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int i=0;i<10;i++)
    {
        sum+=arr[i];
    }
    printf("The Sum= %d\n",sum);
    int avg=sum/10;
    printf("The Average= %d\n",avg);
}