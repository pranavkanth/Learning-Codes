#include<stdio.h>

int checkPrime(int num);

int main()
{
    printf("List of prime numbers between 1 and 1000:\n");
    for (int num = 1; num <= 1000; num++)
        if (checkPrime(num) == 0)
            printf("%d ", num);
    printf("\n");

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