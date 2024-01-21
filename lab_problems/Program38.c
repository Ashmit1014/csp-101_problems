/*An Insurance company follows following rules to calculate premium.
(1) If a person’s health is excellent and the person is between 25 and 35 years of age and lives in a city and is a male then the premium is Rs. 4 per thousand and his policy amount cannot exceed Rs. 2 lakhs.
(2) If a person satisfies all the above conditions except that the sex is female then the premium is Rs. 3 per thousand and her policy amount cannot exceed Rs. 1 lakh.
(3) If a person’s health is poor and the person is between 25 and 35 years of age and lives in a village and is a male then the premium is Rs. 6 per thousand and his policy cannot exceed Rs. 10,000.
(4) In all other cases the person is not insured.


Write a program to output whether the person should be insured or not, his/her premium rate and maximum amount for which he/she can be insured.*/
#include <stdio.h>
int main()
{
    char health, gender, place;
    int age;
    int premium,policy_amount;
    printf("Enter the Health condition (e = exellent, p = poor): ");
    scanf("%c", &health);

    printf("Enter the Gender (m = male, f = female): ");
    scanf("%c", &gender);

    getchar();
    printf("Enter the Age: ");
    scanf("%d", &age);

    getchar();
    printf("Enter from which place you are from (City or Village (c or v)): ");
    scanf("%c", &place);

    if ( health == 'e' && 25 <= age && age <= 35 && gender == 'm' && place == 'c')
    {
       premium=4;
       policy_amount=2;
       printf("The Premium is Rs. %d per thousand.",premium);
       printf("The Policy amount cannot exceed Rs. %d lakhs",policy_amount);
    }
    else if ( health == 'e' && 25 <= age && age <= 35 && gender == 'f' && place == 'c')
    {
        premium=3;
        policy_amount=1;
        printf("The Premium is Rs. %d per thousand.",premium);
       printf("The Policy amount cannot exceed Rs. %d lakhs",policy_amount);
    }
    else if ( health == 'p' && 25 <= age && age <= 35 && gender == 'm' && place == 'v')
    {
       premium=6;
       policy_amount=10000;
       printf("The Premium is Rs. %d per thousand.",premium);
       printf("The Policy amount cannot exceed Rs. %d",policy_amount);
    }
    else
    {
        printf("Cannot be insured.");
    }
    printf("\n");
}