/* Write a program to delete all vowels from a sentence. Assume that the sentence is not more than 80 characters long.*/
#include<stdio.h>
int main()
{
    char str[80];
    printf("Enter the string:\n");
    fgets(str,80,stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }

    char newstr[80];
    int c=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            continue;
        }
        else
        {
        newstr[c++]=str[i];
        }
    }
    newstr[c]='\0';

    printf("The new string:\n");
    printf("%s",newstr);

}