/*3. Ramesh’s basic salary is input through the keyboard. His dearness allowance is 40% of basic salary, and house rent allowance is 20% of basic salary. Write a program to calculate his gross salary.*/
#include<stdio.h>
int main()
{
    float b_salary,da,hra,g_salary;
    printf("Enter the basic salary= ");
    scanf("%f",&b_salary);
    da=(40*b_salary)/100;
    hra=(20*b_salary)/100;
    g_salary=b_salary+da+hra;
    printf("The gross salary= Rs.%f",g_salary);
}