/* Write a program that extracts part of the given string from the specified position. For example, if the sting is "Working with strings is fun", then if from position 4, 4 characters are to be extracted then the program should return string as "king". Moreover, if the position from where the string is to be extracted is given and the number of characters to be extracted is 0 then the program should extract entire string from the specified position. */
#include<stdio.h>
int main()
{
    char str[100],substr[100];
    printf("Enter the string:\n");
    fgets(str,100,stdin);

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

    int index,no_char;
    printf("Enter the index position from string has to be extracted= ");
    scanf("%d",&index);
    printf("Enter the number of characters to be extracted= ");
    scanf("%d",&no_char);

    int up_limit;
    for(int i=0;str[i]!='\0';i++)
    {
        if(index==i)
        {
            if(no_char==0)
            {
                up_limit=length-index;
            }
            else
            up_limit=no_char-1;

            for(int j=0;j<=up_limit;j++)
            {
                substr[j]=str[index-1+j];
            }
        }
    }
    printf("The extracted string:\n");
    printf("%s",substr);
}