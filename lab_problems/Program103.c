/*write a programm to multiply 2 3*3 matrics.*/
#include<stdio.h>
int main()
{
    int a1[3][3],a2[3][3],a3[3][3];
    printf("Enter the elements of array 1:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a1[i][j]);
        }
    }
    printf("Enter the elements of array 2:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a2[i][j]);
        }
    }

    printf("Array 1:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",a1[i][j]);
        }
        printf("\n");
    }
    printf("Array 2:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",a2[i][j]);
        }
        printf("\n");
    }

    printf("Array 3:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            a3[i][j]=0;
            for(int k=0;k<3;k++)
            {
                a3[i][j]+=a1[i][k]*a2[k][j];
            }
             printf("%d\t",a3[i][j]);
        }
        printf("\n");
    }

}