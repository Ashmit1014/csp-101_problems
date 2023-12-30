/*2. Calculate simple interest*/
#include<stdio.h>
int main()
{
    float principal,rate;
    int time;
    printf("Enter the principal value= ");
    scanf("%f",&principal);
    printf("Enter the rate in percentage = ");
    scanf("%f",&rate);
    printf("Enter the time in years= ");
    scanf("%d",&time);
    float si=(principal*rate*time)/100;
    printf("The simple interest= %f",si);
}