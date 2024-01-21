// If the total selling price of 15 items and the total profit earned on them is input through the keyboard, 
// write a program to find the cost price of one item.

#include <stdio.h>

int main()
{
    float sellp;
    printf("Enter selling price (15 items): ");
    scanf("%f", &sellp);
    
    float profit;
    printf("Enter profit (15 items): ");
    scanf("%f", &profit);
    float costp=sellp-profit;
    float single_cost = costp/15;

    printf("Cost price of single item: %f\n", single_cost);
}