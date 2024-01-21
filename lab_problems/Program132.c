/* Without using any string.h library functions Write a programm to compares first n characters of two strings.*/
#include<stdio.h>
int main()
{
    char str1[100],str2[100];
    printf("Enter the first string:\n");
    fgets(str1,100,stdin);
    printf("Enter the second string:\n");
    fgets(str2,100,stdin);
    int length1=0,length2=0;
     for(int i=0;str1[i]!='\0';i++)
    {
        length1++;
    }
    for(int i=0;str2[i]!='\0';i++)
    {
        length2++;
    }
    int n;
    printf("Enter the value of n= ");
    scanf("%d",&n);
    if(n>length1||n<length2)
    {
        printf("The string is too short");
    }
    else
    {
   int cmp=0,f=0;
    for(int i=0;i<n;i++)
    {
        cmp=(int)str1[i]-(int)str2[i];
        if(cmp!=0)
        {
            f=1;
            if(cmp>0)
            {
                printf("The first string is greater.\n");
                break;
            }
            else
             {
                printf("The second string is greater.\n");
                break;
            }
        }
   }
   if(f==0)
   {
    printf("The strings are equal.");
   }
    }
}