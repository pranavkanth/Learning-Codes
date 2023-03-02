// While purchasing certain items, a discount of 10% is offered
// if the quantity purchased is more than 1000, if quantity and price
// per item is input through the keyboard, WAP to find out the total expenses.

#include<stdio.h>

int main()
{
    int quantity;
    printf("Enter total number of items: ");
    scanf("%d", &quantity);
    float cp;
    printf("Enter price per item: ");
    scanf("%f", &cp);

    float discount = 0.1;
    if (quantity > 1000)
        printf("Total expenses = %.2f\n", (1 - discount) * quantity * cp);
    else
        printf("Total expenses = %.2f\n", quantity * cp);

    return 0;
}