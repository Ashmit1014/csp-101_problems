/* Write a program to find the octal equivalent of the entered decimal number.*/
#include <stdio.h>
int main() {
    int decimalNumber, octalNumber = 0, exp = 1;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);
    int j=decimalNumber;
    while (j != 0) {
        octalNumber += (j % 8) * exp;
        j /= 8;
        exp *= 10;
    }

    printf("Octal equivalent of %d : %d\n",decimalNumber, octalNumber);
}