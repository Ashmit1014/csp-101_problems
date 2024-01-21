/* Write a program to fill the entire screen with a smiling face. The smiling face has an ASCII value 1.*/
#include <stdio.h>
int main()
{
    for (int i = 1; i <= 25; ++i)
    {
        for (int j = 1; j <= 168; ++j)
        {
            printf("\u263A");//unicode for smiling face is U+263A as using ASCII character is not displaying it
        }
        printf("\n");
    }
}