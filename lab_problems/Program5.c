// If the marks obtained by a student in five different subjects are input through the keyboard, 
// find out the aggregate marks and percentage marks obtained by the student. Assume that the maximum 
// marks that can be obtained by a student in each subject is 100.

#include <stdio.h>

int main()
{
    float marks1,marks2,marks3,marks4,marks5,aggregate;
    printf("Enter the marks in first subject= ");
    scanf("%f",&marks1);
    printf("Enter the marks in second subject= ");
    scanf("%f",&marks2);
    printf("Enter the marks in third subject= ");
    scanf("%f",&marks3);
    printf("Enter the marks in fourth subject= ");
    scanf("%f",&marks4);
    printf("Enter the marks in fifth subject= ");
    scanf("%f",&marks5);
    aggregate=(marks1+marks2+marks3+marks4+marks5);
    float percent = (aggregate*100)/500;

    printf("Aggregate marks: %f\n", aggregate);
    printf("Percentage: %f%%\n", percent);
}

