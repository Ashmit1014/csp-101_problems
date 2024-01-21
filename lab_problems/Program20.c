/*The information about colors is to be stored in bits of a char variable called color. The bit number 0 to 6, each represent 7 colors of a rainbow, i.e. bit 0 represents violet, 1 represents indigo, and so on as given below. Write a program that asks the user to enter a number and based on this number it reports which colors in the rainbow does the number represents.*/
#include<stdio.h>
int main()
{
    char color;
    printf("Enter the information about colors= ");
    scanf("%c",&color);
    int num=(int)color,k,andmask;
    for(int i=6;i>=0;i--)
    {
        andmask=1<<i;
        k=num&andmask;
       if(k==0)
        printf("0\t");
        else
        printf("1\t");
    }
    printf("\n");
    for(int i=6;i>=0;i--)
    {
        andmask=1<<i;
        k=num&andmask;
        if (i==0)
        {
            if (k!=0)
            {
             printf("Violet\t");  
            }
            else
            printf("\t");
        }
        if (i==1)
        {
            if (k!=0)
            {
             printf("Indigo\t");  
            }
            else
            printf("\t");
        }
        if (i==2)
        {
            if (k!=0)
            {
             printf("Blue\t");  
            }
            else
            printf("\t");
        }
        if (i==3)
        {
            if (k!=0)
            {
             printf("Green\t");  
            }
            else
            printf("\t");
        }
        if (i==4)
        {
            if (k!=0)
            {
             printf("Yellow\t");  
            }
            else
            printf("\t");
        }
        if (i==5)
        {
            if (k!=0)
            {
             printf("Orange\t");  
            }
            else
            printf("\t");
        }
        if (i==6)
        {
            if (k!=0)
            {
             printf("Red\t");  
            }
            else
            printf("\t");
        }
    }

}