/*Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three points fall on one straight line. 
y = mx + C here m is slope and can be calculated (Change in Y) / (Change in X).*/
#include <stdio.h>
int main()
{
    float x1, y1, x2, y2, x3, y3;
    printf("Enter coordinates of first point:\n");
    printf("Enter the x-coordinate= ");
    scanf("%f",&x1);
    printf("Enter the y-coordinate= ");
    scanf("%f",&y1);
    printf("Enter coordinates of second point:\n");
    printf("Enter the x-coordinate= ");
    scanf("%f",&x2);
    printf("Enter the y-coordinate= ");
    scanf("%f",&y2);
    printf("Enter coordinates of third point:\n");
    printf("Enter the x-coordinate= ");
    scanf("%f",&x3);
    printf("Enter the y-coordinate= ");
    scanf("%f",&y3);
    float m1 = (y2 - y1) / (x2 - x1);
    float m2 = (y3 - y2) / (x3 - x2);
    float m3=  (y3-y1)/(x3-x1);
    if (m1 == m2&&m1==m3)
    {
        printf("Points (%f,%f) , (%f,%f) and (%f,%f) lie in a straight line",x1,y1,x2,y2,x3,y3);
    }
    else
    {
       printf("Points (%f,%f) , (%f,%f) and (%f,%f) do not lie in a straight line",x1,y1,x2,y2,x3,y3);
    }
    printf("\n");
}