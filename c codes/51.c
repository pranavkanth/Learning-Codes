#include <stdio.h>

int main()
{
    int op = 0;
    while (1)
    {
        printf("Choose functionality:\n");
        printf("\t1) Addition\n");
        printf("\t2) Subtraction\n");
        printf("\t3) Multiplication\n");
        printf("\t4) Division\n");
        printf("\t5) Exit\n");
        scanf("%d", &op);

        if (op == 5)
        {
            printf("Goodbye!\n");
            break;
        }
        if (!(op >= 1 && op <= 5))
        {
            printf("Invalid operation!\n");
            break;
        }

        float num1, num2;
        printf("Enter number 1: ");
        scanf("%f", &num1);
        printf("Enter number 2: ");
        scanf("%f", &num2);

        switch (op)
        {
        case 1:
            printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
            break;
        case 2:
            printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
            break;        {
            printf("Goodbye!\n");
            break;
        }
        case 3:
            printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
            break;
        case 4:
            printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
            break;
        }
    };

    return 0;
}