/*Without using any string.h library functions Write a programm to reverses a string.*/
#include<stdio.h>
int main()
{
    char str[100],rev[100];
    printf("Enter the string:\n");
    gets(str);

    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }

     int length=0;
    for(int i=0;str[i]!='\0';i++)
    {
        length++;
    }

    for(int i=0;i<length;i++)
    {
        rev[i]=str[length-i-1];
    }
    printf("The reverse string:\n");
    printf("%s",rev);
}