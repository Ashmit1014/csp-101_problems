/*Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0). */
#include <stdio.h>

int main()
{
    int x, y;
    printf("Input Point Coordinates: \n");
    printf("Enter x-coordinate= ");
    scanf("%d",&x);
    printf("Enter y-coordinate= ");
    scanf("%d",&y);

    if (x == 0 && y ==0)
    {
        printf("(%d,%d) lies at the Origin",x,y);
    }
    else if (x == 0)
    {
        printf("(%d,%d) lies on the Y-AXIS",x,y);
    }
    else if (y == 0)
    {
        printf("(%d,%d) lies on the X-AXIS",x,y);
    }
    else
    {
        printf("(%d,%d) neither lies on x-axis,y-axis or at origin",x,y);
    }
    printf("\n");
}