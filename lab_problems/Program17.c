// Two variables a and b contain values 10 and 20. Write a program to interchange the ontents of a and b
// without using a third variable.

#include <stdio.h>
int main()
{
    int a = 10;
    int b = 20;
    printf("Numbers before interchange\n");
    printf("a= %d\n",a);
    printf("b= %d\n",b);
    
    a = a + b; 
    b = a - b;    
    a = a - b; 
    printf("\nNumbers after interchange\n");
    printf("a= %d\n",a);
    printf("b= %d\n",b);  
}