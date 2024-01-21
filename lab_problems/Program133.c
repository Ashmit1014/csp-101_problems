/*Without using any string.h library functions Write a programm to Compares two strings without regard to case */
#include<stdio.h>
int main()
{
    char str1[100],str2[100];
    printf("Enter the first string:\n");
    fgets(str1,100,stdin);
    printf("Enter the second string:\n");
    fgets(str2,100,stdin);

     for(int i=0;str1[i]!='\0';i++)
    {
        if(str1[i]>=65&&str1[i]<=90)
        {
            str1[i]=str1[i]+32;
        }
    }
     for(int i=0;str2[i]!='\0';i++)
    {
        if(str2[i]>=65&&str2[i]<=90)
        {
            str2[i]=str2[i]+32;
        }
    }

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
    printf("The strings are not equal.");
}