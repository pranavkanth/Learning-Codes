#include<stdio.h>

long factorial(int x);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factorial of %d = %ld\n", n, factorial(n));
    return 0;
}
long factorial(int x)
{
    long m = 1;
    for(int i = 1; i <= x; i++)
    {
        m *= i;
    }
    return m;
}