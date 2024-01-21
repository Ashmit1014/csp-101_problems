// Program determines if it is a leap year or not
#include <stdio.h>
int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%i", &year);

    if (year % 4 == 0)
    {
       if(year%100==0){
            if(year%400==0){
                printf("The year %d is a leap year",year);
            }
            else
             printf("The year %d is not a leap year",year);
        }
        else
         printf("The year %d is a leap year",year);
    }
    else
     printf("The year %d is not a leap year",year);

    printf("\n");
}
