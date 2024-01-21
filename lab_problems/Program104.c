/* Twenty-five numbers are entered from the keyboard into an array. The number to be searched is entered through the keyboard by the user. Write a program to find if the number to be searched is present in the array and if it is present, display the number of times it appears in the array.
*/
#include<stdio.h>
int main()
{
    int arr[25];
    printf("Enter the elements of array:\n");
    for(int i=0;i<25;i++)
    {
        scanf("%d",&arr[i]);
    }
    int num,c=0;
    printf("Enter the number to be searched= ");
    scanf("%d",&num);
    for(int i=0;i<25;i++)
    {
        if(arr[i]==num)
        c++;
    }
    printf("%d repeats in the given array %d times\n",num,c);
}