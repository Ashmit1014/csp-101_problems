/* Without using any string.h library functions Write a programm to finds length of a string.*/
#include<stdio.h>
int main()
{
    char s[100];
    printf("Enter the string:\n");
    gets(s);

    int length=0;
    for(int i=0;s[i]!='\0';i++)
    {
        length++;
    }
    printf("The length of entered string= %d\n",length);
}