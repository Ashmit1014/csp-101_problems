/*Without using any string.h library functions Write a programm to converts a string to lowercase.*/
#include<stdio.h>
int main()
{
    char s[100];
    printf("Enter the string:\n");
    fgets(s,100,stdin);

    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]>=65&&s[i]<=90)
        {
            s[i]=s[i]+32;
        }
    }

    printf("The new string:\n");
    printf("%s",s);
}