// If a four-digit number is input through the keyboard, write a program to obtain the sum of the first and last
// digit of this number.

#include <stdio.h>
int main()
{
    int num;
    printf("Entera a 4 digit number: ");
    scanf("%d", &num);
    int lastdigit=num%10;
    int firstdigit=num/1000;
    int sum= lastdigit+firstdigit;
    printf("The sum= %d",sum);
}
