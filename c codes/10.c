// Length and breadth of a rectangle and radius of a circle are input through the keyboard.
// WAP to calculate the area and perimeter of the rectangle and circle

#include <stdio.h>
#include<math.h>

int main()
{
    float l, b, r;
    printf("Enter length: ");
    scanf("%f", &l);
    printf("Enter breadth: ");
    scanf("%f", &b);
    printf("Enter radius of circle: ");
    scanf("%f", &r);

    float areaRect = l * b;
    float periRect = 2 * (l + b);
    float areaCirc = M_PI * pow(r, 2);
    float periCirc = 2 * M_PI * r;

    printf("Area of rectangle = %.2f\n", areaRect);
    printf("Perimeter of the rectangle = %.2f\n", periRect);
    printf("Area of circle = %.2f\n", areaCirc);
    printf("Circumference of the circle = %.2f\n", periCirc);

    return 0;
}