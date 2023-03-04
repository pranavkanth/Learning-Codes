#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    printf("Enter limit: ");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += pow(i, 2);

    printf("Sum of squares of first %d numbers = %d\n", n, sum);

    return 0;
}