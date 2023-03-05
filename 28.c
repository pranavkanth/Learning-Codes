#include<stdio.h>
#include<math.h>

int main()
{
    float xc, yc, r, xp, yp;
    printf("Enter x and y coordinates of center of circle [x y]): ");
    scanf("%f %f", &xc, &yc);
    printf("Enter radius of circle: ");
    scanf("%f", &r);
    printf("Enter x and y coordinates of point [x y]): ");
    scanf("%f %f", &xp, &yp);

    float d = sqrt(pow(xc - xp, 2) + pow(yc - yp, 2));
    if (d == r)
        printf("Point lies on the circle\n");
    else if (d > r)
        printf("Point lies outside the circle\n");
    else
        printf("Point lies inside the circle\n");

    return 0;
}