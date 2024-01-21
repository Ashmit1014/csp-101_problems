/*Using conditional operators determine:
(1) Whether the character entered through the keyboard is a lower case alphabet or not.
(2) Whether a character entered through the keyboard is a special symbol or not.*/
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character: ");
    scanf("%c",&ch);

    ('a' <= ch && ch <= 'z')?printf("%c is lowercase character\n",ch):printf("%c is not a lowercase character\n",ch);
    !('a' <= ch && ch <= 'z' || 'A' <= ch && ch <= 'Z' || '0' <= ch && ch <= '9')?printf("%c is special symbol\n",ch):printf("%c is not a special symbol\n",ch);
}