/*88. Write a program to fill the entire screen with diamond and heart alternatively. The ASCII value for heart is 3 and that of diamond is 4.*/
#include <stdio.h>
int main()
{
     for (int i = 1; i <= 25; ++i)
    {
        for (int j = 1; j <= 42; ++j)
        {
            printf("%s ","\u25C6");//unicode of diamond
            printf("%s ","\u2665");//unicode of heart
        }
        printf("\n");
    }
        
}