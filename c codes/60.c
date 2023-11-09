#include<stdio.h>

long factorial(int n);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    float sum = 0;
    for (int i = 1; i <= n; i++)
        sum += (float) i / factorial(i);
    printf("Sum = %f\n", sum);
    
    return 0;
}

long factorial(int n)
{
    long fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}