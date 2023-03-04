// Write a recursive function to obtain the first 25 numbers of a Fibonacci
// sequence. In a Fibonacci sequence the sum of two successive terms gives
// the third term. Following are the first few terms of the Fibonacci
// sequence: 1 1 2 3 5 8 13 21 34 55 89... [Hint: Function with no arguments
// and no return type].

#include<stdio.h>
void fibonacci(int p, int c, int count);

int main()
{
    int limit;
    printf("Enter limit: ");
    scanf("%d", &limit);

    fibonacci(0, 1, limit);
    printf("\n");
    
    return 0;
}

void fibonacci(int p, int c, int count)
{
    printf("%d ", p + c);
    if (count) fibonacci(c, p + c, --count);
}