/* Write a program to check whether a triangle is valid or not, when the three angles of the triangle are entered through the keyboard. A triangle is valid if the sum of all the three angles is equal to 180 degrees.*/
#include<stdio.h>
int main()
{
    int angle1,angle2,angle3;
    printf("Input angles in degrees!!\n");
    
    printf("Enter first angle= ");
    scanf("%d", &angle1);
    printf("Enter second angle= ");
    scanf("%d", &angle2);
    printf("Enter third angle= ");
    scanf("%d", &angle3);

    if ((angle1+angle2+angle3)== 180)
    {
        printf("Triangle is valid.");
    }
    else
    {
        printf("Triangle is not valid.");
    }
    printf("\n");

}