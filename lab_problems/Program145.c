/*Write a program to reverse the strings stored in the following array of pointers to strings:

char *s[ ] = {
"To err is human...",
"But to really mess things up...",
"One needs to know C!!"
} ;
*/
#include<stdio.h>
#include<stdlib.h>
void reverse(char *p,int size);
int main()
{
    char *s[ ] = {"To err is human...","But to really mess things up...","One needs to know C!!"} ;

    printf("The Original strings:\n");
    for(int i=0;i<3;i++)
    {
        printf("%s\n",*(s+i));
    }
    printf("\n");
    
    int length[3];
     printf("The Reversed strings:\n");
    for(int i=0;i<3;i++)
    {
        char *q=*(s+i);
        length[i]=0;
        for(int j=0;q[j]!='\0';j++)
        length[i]++;

        char *ptr=*(s+i);
        reverse(ptr,length[i]);
        printf("\n");
    }

    
}

void reverse(char *p,int size)
{
    char *r=(char *)malloc(100*sizeof(char));
    for(int i=0;i<size;i++)
    {
        *(r+i)=*(p+size-i-1);
    }

    for(int i=0;i<size;i++)
    {
      printf("%c",*(r+i));
    }
    
    free(r);
}