/*If the ages of Ram, Shyam and Ajay are input through the keyboard, write a program to determine the youngest of the three.*/
#include<stdio.h>
#include <stdio.h>

int main(void)
{
    int ram_age;
    int shyam_age;
    int ajay_age;

    printf("Enter Ram's age= ");
    scanf("%d", &ram_age);

    printf("Enter Shyam's age= ");
    scanf("%d", &shyam_age);

    printf("Enter Ajay's age= ");
    scanf("%d", &ajay_age);

    // Determines smallest age
    int smallest = ram_age;
    if (smallest > shyam_age)
    {
        smallest = shyam_age;
    }
    if (smallest > ajay_age)
    {
        smallest = ajay_age;
    }
    
    // Determines who the age belongs to
    if (smallest == ram_age && smallest == shyam_age && smallest == ajay_age)
    {
        printf("All are of equal ages");
    }
    else if(smallest == ram_age && smallest == shyam_age)
    {
        printf("Ram and Shyam are the youngest");
    }
    else if(smallest == ram_age && smallest == ajay_age)
    {
        printf("Ram and Ajay are the youngest");
    }
    else if(smallest == ajay_age && smallest == shyam_age)
    {
        printf("Ajay and Shyam are the youngest");
    }
    else if (smallest == ram_age)
    {
        printf("Ram is youngest");
    }
    else if (smallest == shyam_age)
    {
        printf("Shyam is youngest");
    }
    else 
    {
        printf("Ajay is youngest");
    }
    printf("\n");
}