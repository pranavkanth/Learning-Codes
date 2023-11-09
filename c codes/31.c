#include<stdio.h>

int main()
{
    int p, n, z;
    while (1)
    {
        int num;
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num > 0)
            p++;
        else if (num < 0)
            n++;
        else
            z++;

        char prompt;
        printf("Do you want to continue (y/N)? ");
        scanf(" %c", &prompt);
        if (prompt == 'n' || prompt == 'N')
            break;
    }

    printf("Number of:\n");
    printf("\t- +ve numbers entered = %d\n", p);
    printf("\t- -ve numbers entered = %d\n", n);
    printf("\t- zeros = %d\n", z);

    return 0;
}