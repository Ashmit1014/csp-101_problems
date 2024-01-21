/*write a program to find the range of a set of numbers. Range is the difference between the smallest and biggest number in the list.*/
#include<stdio.h>
int main()
{
    int highest=0,smallest=0,n,num;
    printf("Enter the size of set of numbers: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("Enter number %d: ",i);
        scanf("%d",&num);

        if(highest<num)
        highest=num;

        if(smallest>num)
        smallest=num;
    }
    printf("Highest value= %d\n",highest);
    printf("Smallest value= %d\n",smallest);
    int range=highest-smallest;
    printf("The range = %d\n",range);
}