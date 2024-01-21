/* Write a program to sort a set of names stored in an array in alphabetical order.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 100

void sortNames(char *names[], int numNames)
{
    int i, j;
    char *temp;

    for (i = 0; i < numNames - 1; i++)
    {
        for (j = i + 1; j < numNames; j++)
        {
            if (strcmp(names[i], names[j]) > 0)
            {
                temp = names[i];
                names[i] = names[j];
                names[j] = temp;
            }
        }
    }
}

int main()
{
    int i, numNames;

    printf("Enter the number of names: ");
    scanf("%d", &numNames);
    getchar();

    char *names[numNames];

    // Input names
    printf("Enter %d names, one per line:\n", numNames);
    for (i = 0; i < numNames; i++)
    {
        names[i] = (char *)malloc(MAX_NAME_LENGTH * sizeof(char));
        fgets(names[i], sizeof(names), stdin);

        for (int j = 0; *(*(names + i) + j) != '\0'; j++)
        {
            if (*(*(names + i) + j) == '\n')
            {
                *(*(names + i) + j) = '\0';
            }
        }
    }
    sortNames(names, numNames);

    printf("\nSorted Names:\n");
    for (i = 0; i < numNames; i++)
    {
        printf("%s\n", names[i]);
        free(names[i]);
    }

    return 0;
}