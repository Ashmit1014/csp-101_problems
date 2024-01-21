/*Write a program that converts a string like "124" to an integer 124.*/
#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter the string in number format:\n");
    fgets(str,100,stdin);

     for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }

    long long int num=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>=48&&str[i]<=57){
            num=(num*10)+(str[i]-'0');
        }
    }
    printf("The number= %lld",num);
}