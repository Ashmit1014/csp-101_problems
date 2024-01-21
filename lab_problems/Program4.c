// 4. The distance between two cities (in km.) is input through the keyboard. Write a program to convert 
// and print this distance in meters, feet, inches and centimeters.

#include <stdio.h>

int main()
{
    float distance;
    
    printf("Distance between cities(in km): ");
    scanf("%f", &distance);

    float meters = distance * 1000;
    float feet = distance * 3281;
    float inches = distance * 39370;
    float centimeters = distance * 1000 * 100;

    printf("Meters: %f\nCentimeters: %f\nFeet: %f\nInches: %f\n", meters, centimeters, feet, inches);
}