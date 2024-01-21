/* Write a program that takes a set of names of individuals and abbreviates the first, middle and other names except the last name by their first letter.*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void abbreviateNames(char *fullName) {
    char abbre[100],nstr[100];
    int i=0,j=0,k=0,c=0;
    nstr[j++]=' ';
    for(int i=0;fullName[i]!='\0';i++)
    {
       nstr[j++]=fullName[i];
    }
    nstr[j]='\0';
    for(int i=0;nstr[i]!='\0';i++)
    {
        if(nstr[i]==' '&&nstr[i+1]!=' ')
        {
            abbre[k++]=nstr[i+1];
            abbre[k++]='.';
            c=i;
        }
    }
    k--;
    for(int i=c+2;nstr[i]!='\0';i++)
    {
        abbre[k++]=nstr[i];
    }
    abbre[k]='\0';
   printf("%s",abbre);
}

int main() {
    int n;
    printf("Enter the number of names: ");
    scanf("%d", &n);

    // Consume the newline character left in the buffer
    getchar();

    for (int i = 0; i < n; i++) {
        char fullName[100];
        printf("Enter full name %d: ", i + 1);
        fgets(fullName, sizeof(fullName), stdin);

        for(int i=0;fullName[i]!='\0';i++)
        {
            if(fullName[i]=='\n')
            {
                fullName[i]='\0';
            }
        }
        printf("Abbreviated Name %d:\n", i + 1);
        abbreviateNames(fullName);
        printf("\n");
    }

    return 0;
}