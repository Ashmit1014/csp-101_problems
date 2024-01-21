/* The X and Y coordinates of 10 different points are entered through the keyboard. Write a program to find the distance of last point from the first point (sum of distance between consecutive points).*/
#include<stdio.h>
#include<math.h>
int main()
{
    int X[10],Y[10];
    printf("Enter the coordinates of the points:\n");
    for(int i=0;i<10;i++)
    {
        printf("Enter the X-coordinate of point %d= ",i+1);
        scanf("%d",&X[i]);
        printf("Enter the Y-coordinate of point %d= ",i+1);
        scanf("%d",&Y[i]);
    }
        double sum_dist=0.0,dist=0.0;
        for(int i=0;i<10;i++)
        {
            if(i==0)
            dist=0.0;
            else
           dist=sqrt((X[i-1]-X[i])*(X[i-1]-X[i])+(Y[i-1]-Y[i])*(Y[i-1]-Y[i]));
           
           sum_dist+=dist;
        }
     printf("The Distance of last point from first point= %lf\n",sum_dist);
}