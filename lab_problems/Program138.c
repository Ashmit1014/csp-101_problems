/*Without using any string.h library functions Write a programm to sets first n characters of a string to a given character.*/
#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter the string:\n");
    gets(str,100,stdin);
    
    char ch;
    printf("Enter the character to replace all characters = ");
    scanf("%c",&ch);

    int n;
    printf("Enter the value of n= ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        str[i]=ch;
    }
    printf("The Modified string:\n");
    printf("%s",str);

}