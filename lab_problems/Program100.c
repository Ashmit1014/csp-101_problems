/* A positive integer is entered through the keyboard. Alongwith it the base of the numbering system in which you want to convert this number is entered. Write a program to display the number entered, the base, and the converted number. (Hint: Number conversion)*/
#include <stdio.h>

int main() {
    int num, base, originalNum, convertedNum = 0, multiplier = 1;

    // Input the number and base from the user
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    printf("Enter the base (2, 8, 10, or 16): ");
    scanf("%d", &base);

    // Check if the number is positive and the base is valid
    if (num <= 0 || (base != 2 && base != 8 && base != 10)) {
        printf("Please enter a positive integer and a valid base.\n");
        return 1;
    }

    // Save the original number
    originalNum = num;

    // Convert the number to the desired base
    while (num > 0) {
        int digit = num % base;
        convertedNum += digit * multiplier;
        num /= base;
        multiplier *= 10;
    }

    // Display the entered number, base, and converted number
    printf("Entered Number: %d\n", originalNum);
    printf("Base: %d\n", base);
    printf("Converted Number: %X\n", convertedNum); // Use %X for hexadecimal

    return 0;
}