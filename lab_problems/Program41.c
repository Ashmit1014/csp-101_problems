/* If the three sides of a triangle are entered through the keyboard, write a program to check whether the triangle is valid or not. The triangle is valid if the sum of two sides is greater than the largest of the three sides. */
#include <stdio.h>
int main()
{
    int side1,side2,side3;
    printf("Input sides:\n");

    printf("Enter the first side : ");
    scanf("%d", &side1);
    printf("Enter the second side : ");
    scanf("%d", &side2);
    printf("Enter the third side : ");
    scanf("%d", &side3);
    int largest=0;
    if(side1>=side2&&side1>=side3)
    largest=side1;
    else if(side2>=side1&&side2>=side3)
    largest=side2;
    else if(side3>=side2&&side3>=side1)
    largest=side3;
    else
    printf("Input is not valid");

    if(largest==side1)
    {
        if(side2+side3>side1)
            printf("The triangle is a valid triangle");
        else
        printf("The triangle is not a valid triangle");
    }
    else if(largest==side2)
    {
        if(side1+side3>side2)
            printf("The triangle is a valid triangle");
        else
        printf("The triangle is not a valid triangle");
    }
    else if(largest==side3)
    {
        if(side1+side2>side3)
            printf("The triangle is a valid triangle");
        else
        printf("The triangle is not a valid triangle");
    }
    else
    printf("Input is not valid");
    printf("\n");
}