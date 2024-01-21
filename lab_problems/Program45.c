/* The policy followed by a company to process customer orders is given by the following rules:
(a) If a customer order is less than or equal to that in stock and has credit is OK, supply has requirement.
(b) If has credit is not OK do not supply. Send him intimation.
(c) If has credit is Ok but the item in stock is less than has order, supply what is in stock. Intimate to him data the balance will be shipped.

Write a C program to implement the company policy.*/
#include <stdio.h>
int main()
{
    char user_credit;
    int orders;
    int item_stock;

    printf("Enter the User credit (g = good i.e OK, b = bad i.e Not OK): ");
    scanf("%c", &user_credit);

    printf("Number of orders: ");
    scanf("%d", &orders);

    printf("Item Stock: ");
    scanf("%d", &item_stock);

    if(user_credit=='g'&&orders<=item_stock)
    {
        printf("The customer supply has requirement");
    }
    else if(user_credit=='g'&&orders>item_stock)
    {
        printf("The stock has less than supply requirement.");
        printf("%d items will be shipped for now.",item_stock);
        printf("%d items will be shipped later when stock has more items.",orders-item_stock);
    }
    else if(user_credit!='g')
    {
        printf("Intimation: User credit is not OK.\nSupply cannot be made.");
    }
    else
    {
        printf("Invalid info");
    }
    printf("\n");
}
