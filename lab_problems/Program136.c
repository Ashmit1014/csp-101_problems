/* Without using any string.h library functions Write a programm to finds first occurrence of a given sub string in another string*/
#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter the string:\n");
    fgets(str,100,stdin);

     for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }

    char substr[100];
    printf("Enter the substring to be searched:\n");
    fgets(substr,100,stdin);

     for (int i = 0; substr[i] != '\0'; i++) {
        if (substr[i] == '\n') {
            substr[i] = '\0';
            break;
        }
    }


    int i, j,index=-1;

    for (i = 0; str[i] != '\0'; i++) {
        j = 0;

        while (substr[j] != '\0' && str[i + j] == substr[j]) {
            j++;
        }

        if (substr[j] == '\0') {
            index=i;
             break;
        }
    }
    if(index==-1)
    printf("Substring not found in the main string.\n");
    else
    printf("Substring found at position: %d\n", index);

}