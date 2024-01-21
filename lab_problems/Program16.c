// Write a program to round off an integer i to the next largest multiple of another integer j . 
// For example, 256 days when rounded off to the next largest multiple divisible by a week results into 259.

#include <stdio.h>

int main()
{
    int num;
    printf("Integer: ");
    scanf("%d", &num);

    int another_num;
    printf("Inetger whose multiple to round off to: ");
    scanf("%d", &another_num);

    float compare = (float) num / (float) another_num;
    int next= compare+1;
    printf("The next largest multiple of %d  = %d",another_num,next*another_num);
    printf("\n");
}