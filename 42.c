#include<stdio.h>

int checkPrime(int);

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (checkPrime(num) == 0)
        printf("%d is prime!\n", num);
    else
        printf("%d is not prime\n", num);

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