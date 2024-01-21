/*Write a program to generate all combinations of 1, 2 and 3 using for loop.

65. According to a study, the approximate level of intelligence of a person can be calculated using the following formula:

i = 2 + ( y + 0.5 x )

Write a program, which will produce a table of values of i, y and x, where y varies from 1 to 6, and, for each value of y, x varies from 5.5 to 12.5 in steps of 0.5.*/
#include<stdio.h>
int main()
{
    printf("y\tx\t\ti\n");
    for(int y=1;y<=6;y++)
    {
        for(float x=5.5;x<=12.5;x=x+0.5)
        {
            float i= 2+(y+0.5*x);
            printf("%d\t%f\t%f\n",y,x,i);
        }
    }
}