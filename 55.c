#include<stdio.h>
#include<math.h>

float rad(float);

int main()
{
    printf("          ");
    printf("  x = 00° ");
    printf("  x = 30° ");
    printf("  x = 60° ");
    printf("  x = 90° ");
    printf("\n");

    printf("  sin(x)  ");
    printf("  % .2f   ", sin(rad(0)));
    printf("  % .2f   ", sin(rad(30)));
    printf("  % .2f   ", sin(rad(60)));
    printf("  % .2f   ", sin(rad(90)));
    printf("\n");
    

    printf("  cos(x)  ");
    printf("  % .2f   ", cos(rad(0)));
    printf("  % .2f   ", cos(rad(30)));
    printf("  % .2f   ", cos(rad(60)));
    printf("  % .2f   ", cos(rad(90)));
    printf("\n");
    
    printf("  tan(x)  ");
    printf("  % .2f   ", tan(rad(0)));
    printf("  % .2f   ", tan(rad(30)));
    printf("  % .2f   ", tan(rad(60)));
    printf("  % .2f   ", tan(rad(90)));
    printf("\n");

    return 0;
}

float rad(float deg)
{
    return deg * M_PI / 180;
}