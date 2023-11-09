#include<stdio.h>
#include<math.h>

int main()
{
    float a, b, c;
    printf("Enter length of 1st side: ");
    scanf("%f", &a);
    printf("Enter length of 2nd side: ");
    scanf("%f", &b);
    printf("Enter length of 3rd side: ");
    scanf("%f", &c);
    
    float s = (a + b + c) / 2;
    printf("Area of triangle = %f\n", sqrt(s * (s - a) * (s - b) * (s - c)));

    return 0;
}