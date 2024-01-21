/*Without using any string.h library functions Write a programm to appends first n characters of a string at the end of another*/
#include<stdio.h>
int main()
{
    char s1[100],s2[100],s3[200];
    printf("Enter the first string:\n");
    fgets(s1,100,stdin);
    printf("Enter the second string:\n");
    fgets(s2,100,stdin);

    int n;
    printf("Enter the value of n= ");
    scanf("%d",&n);

    int length1=0;
    for(int i=0;s1[i]!='\0';i++)
    {
        length1++;
    }
    int length2=0;
    for(int i=0;s2[i]!='\0';i++)
    {
        length2++;
    }
    length1--;
    length2--;

    for(int i=0;i<length2;i++)
    {
        s3[i]=s2[i];
    }
    for(int i=0;i<n;i++)
    {
        s3[length2+i]=s1[i];
    }

    printf("The new string:\n");
    printf("%s",s3);
}