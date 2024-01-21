/* Without using any string.h library functions Write a programm to compares two strings charcter by charcter.*/
#include<stdio.h>
int main()
{
    char str1[100],str2[100];
    printf("Enter the first string:\n");
    gets(str1);
    printf("Enter the second string:\n");
    gets(str2);
    int length1=0,length2=0;
    for(int i=0;str1[i]!='\0';i++)
    {
        length1++;
    }
    for(int i=0;str2[i]!='\0';i++)
    {
        length2++;
    }
    if(length1==length2)
    {
    int cmp=0,f=0;
    for(int i=0;str1[i]!='\0'&&str2[i]!='\0';i++)
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
    else
    printf("The strings are not equal");
}