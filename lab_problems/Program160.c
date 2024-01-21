/* A substitution cipher: In this each character read from the source file is substituted by a corresponding predetermined character and this character is written to the target file.For example, if character ‘A’ is read from the source file, and if we have decided that every ‘A’ is to be substituted by ‘!’, then a ‘!’ would be written to the target file in place of every ‘A’ Similarly, every ‘B’ would be 
substituted by ‘5’ and so on.*/
#include<stdio.h>
int main()
{
    FILE *sourceFile,*targetFile;
    sourceFile=fopen("Program160_source.txt","r");
    targetFile=fopen("Program160_target.txt","w");

    if(sourceFile==NULL)
    {
        printf("Source file doesn't exist\n");
        return 0;
    }
    char ch;
    while ((ch = fgetc(sourceFile)) != EOF) {
        // Implement substitution cipher
        if (ch >= 'A' && ch <= 'Z') {
            // Substituting uppercase letters
            char subChar = '!' + (ch - 'A');
            fputc(subChar, targetFile);
        } else if (ch >= 'a' && ch <= 'z') {
            // Substituting lowercase letters
            char subChar = '@' + (ch - 'a');
            fputc(subChar, targetFile);
        } else {
            // If not a letter, just copy the character as is
            fputc(ch, targetFile);
        }
    }

    fclose(sourceFile);
    fclose(targetFile);

    printf("Substitution cipher completed.\n");

}