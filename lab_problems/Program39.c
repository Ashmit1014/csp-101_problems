/*A certain grade of steel is graded according to the following conditions:
(i) Hardness must be greater than 50
(ii) Carbon content must be less than 0.7
(iii) Tensile strength must be greater than 5600

The grades are as follows:
Grade is 10 if all three conditions are met
Grade is 9 if conditions (i) and (ii) are met
Grade is 8 if conditions (ii) and (iii) are met
Grade is 7 if conditions (i) and (iii) are met
Grade is 6 if only one condition is met
Grade is 5 if none of the conditions are met

Write a program, which will require the user to give values of hardness, carbon content and tensile strength of the steel
under consideration and output the grade of the steel.*/
#include <stdio.h>
#include <stdbool.h>
int main()
{
    float hardness, carbon, tensile;
    printf("Enter the Hardness: ");
    scanf("%f", &hardness);
    printf("Enter the carbon content: ");
    scanf("%f", &carbon);
    printf("Enter the tensile strength: ");
    scanf("%f", &tensile);

    if(hardness>50&&carbon<0.7&&tensile>5600)
    printf("Steel is Grade 10");
    else if(hardness>50&&carbon<0.7)
    printf("Steel is Grade 9");
    else if(carbon<0.7&&tensile>5600)
    printf("Steel is Grade 8");
    else if(hardness>50&&tensile>5600)
    printf("Steel is Grade 7");
    else if(hardness>50)
    printf("Steel is Grade 6");
    else if(carbon<0.7)
    printf("Steel is Grade 6");
    else if(tensile>5600)
    printf("Steel is Grade 6");
    else
    printf("Steel is Grade 5");
}