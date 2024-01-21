// A cashier has currency notes of denominations 10, 50 and 100. If the amount to be withdrawn is input through the 
// keyboard in hundreds, find the total number of currency notes of each denomination the cashier will have to give to
// the withdrawer.

#include <stdio.h>

int main()
{
    int amount;
    printf("Enter the amount to be withdrawn: ");
    scanf("%d", &amount);

int denomination_100;
    int denomination_50;
    int denomination_10;

    denomination_100 = amount / 100;
    amount = amount - denomination_100 * 100;

    denomination_50 = amount / 50;
    amount = amount - denomination_50 * 50;

    denomination_10 = amount / 10;
    amount = amount - denomination_10 * 10;

    printf("100 note : %d\n50 note: %d\n10 note: %d\n", denomination_100, denomination_50, denomination_10);
}