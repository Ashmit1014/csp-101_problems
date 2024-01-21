/*If cost price and selling price of an item is input through the keyboard, write a program to determine whether 
the seller has made profit or incurred loss. Also determine how much profit he made or loss he incurred.*/

#include <stdio.h>

int main()
{
    float sell_p,cost_p;
    printf("Enter selling price: ");
    scanf("%f", &sell_p);
    printf("Enter cost price: ");
    scanf("%f", &cost_p);

    if (sell_p>cost_p)
    {
        printf("A Profit has occurred\n");
        float profit= sell_p-cost_p;
        printf("Profit= %f\n", profit);
    }
    else
    {
         printf("A Loss has occurred\n");
        float loss=cost_p-sell_p;
        printf("Loss= %f\n",loss);
    }
}