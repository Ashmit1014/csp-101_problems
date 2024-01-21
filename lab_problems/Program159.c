/*An offset cipher: In an offset cipher each character from the source file is offset with a fixed value and then written to the target file. For example, if character read from the source file is ‘A’, then convert this into a new character by offsetting ‘A’ by a fixed value, say 128, and then writing the new character to the target file.
*/
#include <stdio.h>

int main() {
    FILE *sourceFile, *targetFile;
    int offset;
    printf("Enter the offset value= ");
   scanf("%d",&offset); // You can change the offset value as needed

    sourceFile = fopen("Program159_source.txt", "r");
    targetFile = fopen("Program159_target.txt", "w");

    if (sourceFile == NULL || targetFile == NULL) {
        printf("Error opening files.\n");
        return 1;
    }

    char ch;
    while ((ch = fgetc(sourceFile)) != EOF) {
        // Offset the character and write to the target file
        char encodedChar = ch + offset;
        fputc(encodedChar, targetFile);
    }

    fclose(sourceFile);
    fclose(targetFile);

    printf("Encoding completed.\n");

    return 0;
}