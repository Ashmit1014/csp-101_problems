/* If a number 972 is entered through the keyboard, your program should print "Nine hundrad Seventy Two". Write the program such that it does this for any positive integer.*/
#include <stdio.h>

char* name[] = { /*Useless*/"Zero" , "One" , "Two" , "Three" , "Four" , "Five" , "Six" , "Seven" , "Eight" , "Nine" };
char* tenToNineteen[] = { "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen" };
char* twentyToNinety[] = { /*Useless*/"Zero" , /*Useless*/"Ten", "Twenty" , "Thirty" , "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

void print3digit(int a);
void printNum(int num);

int main()
{
    int num;
    printf("Enter number (limited to integer data type): ");
    scanf("%d", &num);

    printNum(num);
    printf("\n");
}

// To convert 3 digits to "five hundred twenty six" format
void print3digit(int a)
{
    // Stores digits of the 3 digit number
    int digit[3];
    int ph = a;  
    for (int i = 0 ; i < 3 ; i++)
    {
        digit[i] = ph % 10;
        ph = ph / 10;
    }

    // Printing 3 digit format
    for (int place = 2 ; place >= 0 ; place--)
    {
        // Hundreth place
        if (place == 2)
        {
            if (digit[place] == 0)
            {
                // No Output
            }
            else
            {
                // Prints the number name from name[] array
                for (int x = 1 ; x < 10 ; x++)
                {
                    if (digit[place] == x)
                    {
                        printf("%s ", name[x]);
                        printf("Hundred ");
                    }
                }
            }
        }
        // Tenth Place
        if (place == 1)
        {
            if (digit[place] == 0)
            {
                // No Output
            }
            else if (digit[place] == 1)
            {
                // Prints the number name from tenToNineteen[] array
                for (int x = 1 ; x < 10 ; x++)
                {
                    if (digit[0] == x)
                    {
                        printf("%s ", tenToNineteen[x]);
                    }
                }
                // As we dont need to see other condition
                break;
            }
            else
            {
                // Prints the number name from twentyToNinety[] array
                for (int x = 2 ; x < 10 ; x++)
                {
                    if (digit[place] == x)
                    {
                        printf("%s ", twentyToNinety[x]);
                    }
                }
            }
        }
        // Oneth Place
        if (place == 0)
        {
            if (digit[place] == 0)
            {
                // No Output
            }
            else
            {
                // Prints the number name from name[] array
                for (int x = 1 ; x < 10 ; x++)
                {
                    if (digit[place] == x)
                    {
                        printf("%s ", name[x]);
                    }
                }
            }
        }
    }
}

// To print the whole answer
void printNum(int num)
{
    // Will tell us how big the array should be, we dividing numbers into sets with 3 number each 
    int length = 0;
    int ph = num;
    while (ph != 0)
    {
        ph = ph / 1000;
        length++;
    }
    // We get our sets of 3 digits each
    int set3[length];
    ph = num;
    for (int i = 0 ; i < length ; i++)
    {
        set3[i] = ph % 1000;
        ph = ph / 1000;
    }

    // Prints 3 digit format + the place (i.e. like Billion, Million, etc)
    for (int place = length - 1 ; place >= 0 ; place--)
    {
        if (place == 3)
        {
            print3digit(set3[place]);
            printf("Billion, ");
        }
        else if (place == 2)
        {
            print3digit(set3[place]);
            printf("Million, ");
        }
        else if (place == 1)
        {
            print3digit(set3[place]);
            printf("Thousand, ");
        }
        else
        {
            print3digit(set3[place]);
        }
    }
}