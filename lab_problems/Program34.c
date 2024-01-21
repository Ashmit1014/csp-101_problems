/*Given the coordinates (x, y) of a center of a circle and it’s radius,write a program which will determine whether a point lies inside
the circle, on the circle or outside the circle. (Hint: Use sqrt( ) and pow( ) functions) */
#include <stdio.h>
#include <math.h>

int main()
{
    float xc,yc;
    float rad;
    float x1,y1;

    printf("Enter center of circle: \n");
    printf("Enter x-coordinate= ");
    scanf("%f",&xc);
    printf("Enter y-coordinate= ");
    scanf("%f",&yc);

    printf("Enter radius of circle: ");
    scanf("%f", &rad);

    printf("Enter the required point: \n");
    printf("Enter x-coordinate= ");
    scanf("%f",&x1);
    printf("Enter y-coordinate= ");
    scanf("%f",&y1);

    float dist = sqrt(pow(xc - x1, 2) + pow(yc - y1, 2));

    if (dist > rad)
    {
        printf("Point is OUTSIDE the circle.");
    }
    else if (dist < rad)
    {
        printf("Point is INSIDE the circle");
    }
    else
    {
        printf("Point is ON the circle.");
    }
    printf("\n");
}