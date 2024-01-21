/*Write a program to count the number of occurrences of any two vowels in succession in a line of text. For example, in the sentence
“Pleases read this application and give me gratuity”
such occurrences are ea, ea, ui.
*/
#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter the string:\n");
    fgets(str,100,stdin);

    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]=='\n');
        {
            str[i]='\0';
            break;
        }
    }

    int count=0;
    for(int i=1;str[i]!='\0';i++)
    {
        char ch=str[i-1];
        char ch1=str[i];

        if((ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')&&(ch1=='A'||ch1=='E'||ch1=='I'||ch1=='O'||ch1=='U'||ch1=='a'||ch1=='e'||ch1=='i'||ch1=='o'||ch1=='u'))
        {
            count++;
            i++;
        }
    }
    printf("The number of occurrences of any two vowels in succession = %d",count);
}