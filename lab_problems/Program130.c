/* Without using any string.h library functions Write a programm to copies first n characters of one string into another*/
#include<stdio.h>
int main()
{
    char s[100],copy[100];
    printf("Enter the string:\n");
    gets(s);

    int n;
    printf("Enter the value of n= ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        copy[i]=s[i];
    }
    printf("The copied string:\n");
    printf("%s",copy);
}