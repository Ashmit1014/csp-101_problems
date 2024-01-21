/* Without using any string.h library functions Write a programm to finds first occurrence of a given character in a string.*/
#include<stdio.h>
int main()
{
     char str[100];
    printf("Enter the string:\n");
    fgets(str,100,stdin);

    char ch;
    printf("Enter the character to be searched= ");
    scanf("%c",&ch);

    int index=-1;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==ch)
        {
            index=i;
            break;
        }
    }
    if(index==-1)
    {
        printf("The character is not found\n");
    }
    else
    {
        printf("The character is first found at index position %d\n",index);
    }
}