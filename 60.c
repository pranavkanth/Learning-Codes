#include<stdio.h>

float add(float x, float y);

int main()
{
    float a, b;
    printf("Enter 1st number: ");
    scanf("%f", &a);
    printf("Enter 2nd number: ");
    scanf("%f", &b);
    printf("%0.2f + %.2f = %.2f\n", a, b, add(a, b));    
    return 0;
}
float add(float x, float y)
{
    float m = x + y;
    return m;
}