/* Without using any string.h library functions Write a programm to sets all characters of string to a given character*/
#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter the string:\n");
    gets(str,100,stdin);
    
    char ch;
    printf("Enter the character to replace all characters = ");
    scanf("%c",&ch);

    for(int i=0;str[i]!='\0';i++)
    {
        str[i]=ch;
    }
    printf("The Modified string:\n");
    printf("%s",str);

}