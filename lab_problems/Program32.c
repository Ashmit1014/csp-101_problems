/*Given the length and breadth of a rectangle, write a program to find whether the area of the rectangle is greater than its perimeter. For example, the area of the rectangle with length = 5 and breadth = 4 is greater than its perimeter.*/
#include <stdio.h>
int main()
{
    float length, breadth;
    printf("Enter the length= ");
    scanf("%f", &length);
    
    printf("Enter the breadth= ");
    scanf("%f", &breadth);

    float perimeter = 2*(length + breadth);
    float  area = length * breadth;

    if (perimeter > area)
        printf("Perimeter is larger than Area.");
    else if (perimeter < area)
        printf("Area is larger than the Perimeter.");
    else
        printf("Both Area and Perimeter are equal");
    printf("\n");
}