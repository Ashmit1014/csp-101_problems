/*A square matrix, that is, one having the same number of rows and columns, is called a diagonal matrix if its only non-zero elements are on the diagonal from upper left to lower right. It is called upper triangular, if all elements below the diagonal are zeroes, and lower triangular, if all elements above the diagonal are zeroes. Write a program that reads a matrix and determines if it is one of these three special matrices.*/
#include<stdio.h>
int main()
{
    int row,column;
    printf("Enter the number of rows= ");
    scanf("%d",&row);
    printf("Enter the number of columns= ");
    scanf("%d",&column);
    int arr[row][column];
    printf("Enter the elements of the matrix:\n");
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<column;j++)
            {
                scanf("%d",&arr[i][j]);
            }
        }
        printf("The entered matrix:\n");
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<column;j++)
            {
                printf("%d ",arr[i][j]);
            }
            printf("\n");
        }

    if(row==column)
    {
        printf("The matrix is a square matrix.\n");
        
        int f=1;
        //check for diagonal matrix
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<column;j++)
            {
                if(i!=j)
                {
                    if(arr[i][j]==0)
                    f=0;
                }
            }
        }
        if(f==1)
        printf("The matrix is diagonal matrix.\n");

        //upper triangular
        int g=1;
          for(int i=0;i<row;i++)
          {
            for(int j=0;j<column;j++)
            {
               if(i>j)
               {
                if(arr[i][j]!=0)
                g=0;
               }
            }
            if(g==0)
            break;
        }
        if(g==1)
        printf("The matrix is upper triangular matrix.\n");

        //lower triangular
        int h=1;
          for(int i=0;i<row;i++)
          {
            for(int j=0;j<column;j++)
            {
               if(i<j)
               {
                if(arr[i][j]!=0)
                h=0;
               }
            }
            if(h==0)
            break;
        }
        if(h==1)
        printf("The matrix is lower triangular matrix.\n");
    }
    else
    printf("The matrix is not a square matrix.\n");
}