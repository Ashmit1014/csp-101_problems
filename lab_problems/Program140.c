/* Write a program to count noumber of words in a string.*/
#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter the string:\n");
    fgets(str,100,stdin);

    int count=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==' '||str[i]=='\0')
        count++;
    }
    printf("The number of words= %d",count);
}