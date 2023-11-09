#include<stdio.h>

int main()
{
    int x, y;
    printf("Enter 1st number: ");
    scanf("%d", &x);
    printf("Enter 2nd number: ");
    scanf("%d", &y);

    int hcf = 1;
    for (int i = 2; i <= x && i <= y; i++)
        if (x % i == 0 && y % i == 0)
            hcf = i;

    printf("HCF of %d and %d = %d\n", x, y, hcf);

    return 0;
}