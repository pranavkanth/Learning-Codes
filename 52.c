#include <stdio.h>

int main()
{
    int op = 0;
    do
    {
        printf("Choose functionality:\n");
        printf("\t1) Addition\n");
        printf("\t2) Subtraction\n");
        printf("\t3) Multiplication\n");
        printf("\t4) Division\n");
        printf("\t5) Exit\n");
        scanf("%d", &op);

        float num1, num2;
        switch (op)
        {
        case 1:
            printf("Enter number 1: ");
            scanf("%f", &num1);
            printf("Enter number 2: ");
            scanf("%f", &num2);

            printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
            break;
        case 2:
            printf("Enter number 1: ");
            scanf("%f", &num1);
            printf("Enter number 2: ");
            scanf("%f", &num2);

            printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
            break;
        case 3:
            printf("Enter number 1: ");
            scanf("%f", &num1);
            printf("Enter number 2: ");
            scanf("%f", &num2);

            printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
            break;
        case 4:
            printf("Enter number 1: ");
            scanf("%f", &num1);
            printf("Enter number 2: ");
            scanf("%f", &num2);

            printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
            break;
        case 5:
            printf("Goodbye!\n");
            break;
        default:
            printf("Invalid operation!\n");
            break;
        }
    } while (!(op >= 1 && op <= 5));

    return 0;
}