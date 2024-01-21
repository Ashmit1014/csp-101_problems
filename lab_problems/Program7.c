// The length & breadth of a rectangle and radius of a circle are input through the keyboard. 
// Write a program to calculate the area & perimeter of the rectangle, and the area & circumference of the circle.

#include <stdio.h>
#define pi 3.141592
int main()
{
    float len, wid, radius;

    printf("Length of rectangle: ");
    scanf("%f", &len);

    printf("Width of rectangle : ");
    scanf("%f", &wid);

    printf("Radius of circle: ");
    scanf("%f", &radius);

    float ar_rect = len * wid;
    float peri_rect = 2 * (len + wid);
    float ar_circ = pi * radius * radius;
    float peri_circ = 2 * pi * radius;

    printf("Area of Rectangle: %f\n", ar_rect);
    printf("Perimeter of Rectangle: %f\n", peri_rect);
    printf("Area of Circle: %f\n", ar_circ);
    printf("Circumference of Circle: %f\n", peri_circ);
}