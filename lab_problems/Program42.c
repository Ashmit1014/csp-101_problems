/*If the three sides of a triangle are entered through the keyboard, write a program to check whether the triangle is isosceles, equilateral, scalene or right angled triangle.*/
#include <stdio.h>

int main(void)
{
    int s1, s2, s3;
    printf("Input sides:\n");

    printf("Enter the first side: ");
    scanf("%d", &s1);
    printf("Enter the second side: ");
    scanf("%d", &s2);
    printf("Enter the third side: ");
    scanf("%d", &s3);

    int largest = 0;
    if (s1 >= s2 && s1 >= s3)
        largest = s1;
    else if (s2 >= s1 && s2 >= s3)
        largest = s2;
    else if (s3 >= s2 && s3 >= s1)
        largest = s3;
    else
        printf("Input is not valid");

    if (largest == s1)
    {
        if (s2 + s3 > s1)
        {
            if (s1 * s1 + s2 * s2 == s3 * s3 || s1 * s1 + s3 * s3 == s2 * s2 || s2 * s2 + s3 * s3 == s1 * s1)
            {
                printf("Triangle is a right angled");
                printf("\n");
            }

            if (s1 == s2 && s2 == s3)
            {
                printf("Triangle is an equilateral triangle.");
            }
            else if (s1 != s2 && s2 != s3 && s1 != s3)
            {
                printf("Triangle is a scalene triangle.");
            }
            else if (s1 == s2)
            {
                printf("Triangle is an isoseceles triangle.");
            }
            else if (s2 == s3)
            {
                printf("Triangle is an isoseceles triangle.");
            }
            else if (s1 == s3)
            {
                printf("Triangle is an isoseceles triangle.");
            }
            printf("\n");
        }
        else
            printf("The triangle is not a valid triangle");
    }
    else if (largest == s2)
    {
        if (s1 + s3 > s2)
        {
             if (s1 * s1 + s2 * s2 == s3 * s3 || s1 * s1 + s3 * s3 == s2 * s2 || s2 * s2 + s3 * s3 == s1 * s1)
            {
                printf("Triangle is a right angled");
                printf("\n");
            }

            if (s1 == s2 && s2 == s3)
            {
                printf("Triangle is an equilateral triangle.");
            }
            else if (s1 != s2 && s2 != s3 && s1 != s3)
            {
                printf("Triangle is a scalene triangle.");
            }
            else if (s1 == s2)
            {
                printf("Triangle is an isoseceles triangle.");
            }
            else if (s2 == s3)
            {
                printf("Triangle is an isoseceles triangle.");
            }
            else if (s1 == s3)
            {
                printf("Triangle is an isoseceles triangle.");
            }
            printf("\n");
        }
        else
            printf("The triangle is not a valid triangle");
    }
    else if (largest == s3)
    {
        if (s1 + s2 > s3)
        {
            if (s1 * s1 + s2 * s2 == s3 * s3 || s1 * s1 + s3 * s3 == s2 * s2 || s2 * s2 + s3 * s3 == s1 * s1)
            {
                printf("Triangle is a right angled");
                printf("\n");
            }

            if (s1 == s2 && s2 == s3)
            {
                printf("Triangle is an equilateral triangle.");
            }
            else if (s1 != s2 && s2 != s3 && s1 != s3)
            {
                printf("Triangle is a scalene triangle.");
            }
            else if (s1 == s2)
            {
                printf("Triangle is an isoseceles triangle.");
            }
            else if (s2 == s3)
            {
                printf("Triangle is an isoseceles triangle.");
            }
            else if (s1 == s3)
            {
                printf("Triangle is an isoseceles triangle.");
            }
            printf("\n");
        }
        else
            printf("The triangle is not a valid triangle");
    }
    else
        printf("Input is not valid");
}