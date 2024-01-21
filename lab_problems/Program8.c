// Two numbers are input through the keyboard into two locations C and D. Write a program to interchange the contents of
// C and D.

#include <stdio.h>

int main()
{
    int C, D;
    
    printf("Enter the first number,C= ");
    scanf("%d", &C);
    
    printf("Enter the second number,D= ");
    scanf("%d", &D);

    int temp = C;
    C = D;
    D = temp;

    printf("C= %d\n", C);
    printf("D= %d\n", D);
}