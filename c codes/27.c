#include<stdio.h>

int main()
{
    float cp, sp, diff;
    printf("Enter cost price (₹): ");
    scanf("%f", &cp);
    printf("Enter selling price (₹): ");
    scanf("%f", &sp);

    diff = cp - sp;

    diff < 0 ? printf("A profit of ₹%.2f has been made!\n", -1 * diff) : (diff > 0 ? printf("A loss of ₹%.2f has been incurred :(\n", diff) : printf("Neither a profit has been made nor a loss has been incurred.\n"));

    return 0;
}
