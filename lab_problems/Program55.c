/*Write a program to print all the ASCII values and their equivalent characters using a for loop. The ASCII values vary from 0 to 255.*/
#include<stdio.h>
int main()
{
    for(int i=0;i<=255;i++)
    {
        printf("ASCII code of %c is %d\n",i,i);
    }
}