#include<stdio.h>
float add(int x, float y);
int main()
{
    int a;
    float b;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%f", &b);
    printf("%d + %f = %f", a, b, add(a, b));
    return 0;
}
float add(int x, float y)
{
    float m = x + y;
    return m;
}