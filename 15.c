// If the total selling price of 15 items and the profit earned through them
// is input through the keyboard, WAP to find the cost price of one item

#include<stdio.h>
int main()
{
    float sp, profit;
    printf("Enter total selling price of 15 items: ");
    scanf("%f", &sp);
    printf("Enter profit earned on 15 items: ");
    scanf("%f", &profit);

    float cp = (sp - profit) / 15;
    printf("Cost price of 1 item = %.2f\n", cp);

    return 0;
}