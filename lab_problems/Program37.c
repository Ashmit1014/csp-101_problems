/* Any character is entered through the keyboard, write a program to determine whether the character entered is a capital letter, a small case letter, a digit or a special symbol.

The following table shows the range of ASCII values for various characters.

Characters ASCII Values
A – Z 65 – 90
a – z 97 – 122
0 – 9 48 – 57

special symbols
0 - 47, 58 - 64, 91 - 96, 123 - 127

you can also use ASCII chart in Let us c book.*/
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the character= ");
    scanf("%c", &ch);
    
    if (ch >= 65 && ch <= 90)
    {
        printf(" %c is a captial letter.",ch);
    }
    else if (ch >= 97 && ch <= 122)
    {
        printf("%c is a small letter.",ch);
    }
    else if (ch >= 48 && ch <= 57)
    {
        printf("%C is a digit.",ch);
    }
    else
    {
        printf("%c is a special symbol.",ch);
    }
    printf("\n");
}