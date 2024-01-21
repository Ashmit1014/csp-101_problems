/*Write a program that replaces two or more consecutive blanks in a string by a single blank. For example, if the input is 
Grim   return  to     the planet         of      apes!!
the output should be
Grim return to the planet of apes!!*/
#include<stdio.h>
int main()
{
    char str[100],newstr[100];
    printf("Enter the string:\n");
    fgets(str,100,stdin);

     for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }

    int i, j;
    int singleBlank = 0;

    for (i = 0, j = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            // Check for consecutive blanks
            if (!singleBlank) {
                str[j++] = ' ';  // Add a single blank
                singleBlank = 1;  // Set flag to indicate a single blank is added
            }
        } else {
            str[j++] = str[i];  // Copy non-blank characters
            singleBlank = 0;    // Reset flag for consecutive blanks
        }
    }

    // Null-terminate the modified string
    str[j] = '\0';

    printf("The new string:\n");
    printf("%s",str);
}