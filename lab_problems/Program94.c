/* let the equation x + y = r represents a circle with centre at origin and radius r. Write a program that reads r from the keyboard and prints the number of points with integer coordinates that lie within the circle.
*/
#include<stdio.h>
int main()
{
    int r,c=0;
    printf("Enter the radius of the circle= ");
    scanf("%d",&r);
    for(int x=-r;x<=r;x++)
    {
        for(int y=-r;y<=r;y++)
        {
            if((x*x+y*y)<r*r)
            {
                printf("(%d,%d) lies inside the circle.\n",x,y);
                c++;
            }
        }
    }
    printf("The number of points inside the circle= %d\n",c);
}