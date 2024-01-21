/*A common problem in statistics is that of generating frequency distribution of the given data. Assuming that the data consists of 50 positive integers in the range 1 to 25, write a program that prints the number of times each integer occurs in the data.*/
#include<stdio.h>
int main()
{
    int arr[50];
    printf("Enter the elements of the array(range from 1 to 25):\n");
    for(int i=0;i<50;i++)
    scanf("%d",&arr[i]);

    for(int i=1;i<=25;i++)
    {
        int c=0;
        for(int j=0;j<50;j++)
        {
            if(arr[j]==i)
            c++;
        }
        printf("The frequency of %d is %d\n",i,c);
    }
}