/* Write a program that merges lines alternately from two files and writes the results to new file. If one file has less number of lines than the other, the remaining lines from the larger file should be simply copied into the target file.*/
#include<stdio.h>

int main() {
    FILE *ptr1, *ptr2, *result;
    ptr1 = fopen("Program158_File1.txt", "r");
    ptr2 = fopen("Program158_File2.txt", "r");
    result = fopen("Program158_result.txt", "w");

    if (ptr1 == NULL) {
        printf("The file 1 is empty\n");
    }
    if (ptr2 == NULL) {
        printf("The file 2 is empty\n");
    }

    char line1[190], line2[100];
    int i=0,j=0,c1=0,c2=0;
    while (fgets(line1, sizeof(line1), ptr1) || fgets(line2, sizeof(line2), ptr2)) {
        
        if (line1[i] != '\0') {
            fputs(line1, result);
        }
        if (line2[j] != '\0') {
            fputs(line2, result);
        }
    }
    printf("c1= %d\nc2= %d\n",c1,c2);
    printf("Merging completed successfully.\n");

    fclose(ptr1);
    fclose(ptr2);
    fclose(result);

}