/*Temperature of a city in Fahrenheit degrees is input through the keyboard. Write a program to convert this temperature 
into Centigrade degrees.*/

#include <stdio.h>

int main()
{
    float f_temp;
    printf("Temperature (in Fahrenheit): ");
    scanf("%f", &f_temp);

    float c_temp = ((f_temp - 32)* 5)/9;

    printf("Temperature in Celcius: %f\n", c_temp);
}