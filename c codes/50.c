#include<stdio.h>
#include<math.h>

int checkPrime(int);
int checkArmstrong(int);
long factorial(int);

int main()
{
    int op = 0;
    while (1)
    {
        printf("Choose functionality:\n");
        printf("\t1) Check if a number is prime\n");
        printf("\t2) Check if a number is Armstrong\n");
        printf("\t3) Find factorial of a number\n");
        printf("\t4) Exit\n");
        scanf("%d", &op);

        if (op == 4)
        {
            printf("Goodbye!\n");
            break;
        }
        {
        if (!(op >= 1 && op <= 4))
        {
            printf("Invalid operation!\n");
            continue;
        }

        int num;
        printf("Enter number: ");
        scanf("%d", &num);
        switch (op)
        {
        case 1:
            if (checkPrime(num) == 0)
                printf("%d is prime!\n", num);
            else
                printf("%d is NOT prime.\n", num);
            break;
        case 2:
            if (checkArmstrong(num) == 0)
                printf("%d is an Armstrong number!\n", num);
            else
                printf("%d is NOT an Armstrong number.\n", num);
            break;
        case 3:
            printf("Factorial of %d = %ld\n", num, factorial(num));
            break;
        }
    };

    return 0;
}

int checkPrime(int num)
{
    for (int i = 2; i <= num / 2; i++)
    {
        if (i == num / 2)
            return 0;
        if (num % i == 0)
            return -1;
    }
}

int checkArmstrong(int num)
{
    int length = 0;
    for (int j = num; j; j /= 10) length++;

    int sum = 0;
    for (int k = num; k; k /= 10) sum += pow(k % 10, length);

    if (num == sum) return 0;

    return -1;
}

long factorial(int x)
{
    long result = 1;
    for (int i = 1; i <= x; i++) result *= i;
    return result;
}