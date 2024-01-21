/*Without using any string.h library functions Write a programm to copies a string into another*/
#include<stdio.h>
int main()
{
    char s[100],copy[100];
    printf("Enter the string:\n");
    gets(s);

    for(int i=0;s[i]!='\0';i++)
    {
        copy[i]=s[i];
    }
    printf("The copied string:\n");
    printf("%s",copy);
}