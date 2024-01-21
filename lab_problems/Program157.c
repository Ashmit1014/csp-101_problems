/*Write a program to copy one file to another. While doing so replace all lowercase characters to their equivalent uppercase characters.*/
#include<stdio.h>
int main()
{
    FILE *ptr1, *ptr2;
    ptr1 = fopen("Program157_original.txt", "r");
    ptr2 = fopen("Program157_copy.txt", "w");

    if (ptr1 == NULL) {
        printf("The file does not exist.");
        return 0;
    }

    char ch = fgetc(ptr1);
    while (ch != EOF) {
        if (ch >= 97 && ch <= 122) {
            ch = ch - 32;
        }
        fputc(ch, ptr2);
        ch = fgetc(ptr1);
    }

    fclose(ptr1);
    fclose(ptr2);


}