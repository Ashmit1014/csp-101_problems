/*Find the absolute value of a number entered through the keyboard.Like if value is -12.32 abs value is 12.32 and if value is -9 abs value is 9.*/
#include <stdio.h>
int main()
{
    float input;
    printf("Enter number: ");
    scanf("%f", &input);
    float absolute;
    if (input < 0)
    absolute = -input;
    else
    absolute=input;

    printf("Absolute of %f is %f\n", input,absolute);
}