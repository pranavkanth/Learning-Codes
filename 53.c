#include <stdio.h>
#include <math.h>
int main()
{
    int op = 1;
    do
    {
        printf("Geometrical Shapes: \n");
        printf("\t1) Square\n");
        printf("\t2) Rectangle\n");
        printf("\t3) Triangle\n");
        printf("\t4) Circle\n");

        scanf("%d", &op);

        switch (op)
        {
        case 1:
        {
            float l;
            printf("Enter length: ");
            scanf("%f", &l);
            printf("Area of square = %f\n", l * l);
            break;
        }
        case 2:
        {
            float l, b;
            printf("Enter length: ");
            scanf("%f", &l);
            printf("Enter breadth: ");
            scanf("%f", &b);
            printf("Area of rectangle = %f\n", l * b);
            break;
        }
        case 3:
        {
            float a, b, c, s;
            printf("Enter length of 1st side: ");
            scanf("%f", &a);
            printf("Enter length of 2nd side: ");
            scanf("%f", &b);
            printf("Enter length of 3rd side: ");
            scanf("%f", &c);
            s = (a + b + c) / 2;
            printf("Area of triangle = %f\n", sqrt(s * (s - a) * (s - b) * (s - c)));
            break;
        }
        case 4:
        {
            float r;
            printf("Enter radius of the circle: ");
            scanf("%f", &r);
            printf("Area of the circle = %f\n", M_PI * r * r);
            break;
        }
        default:
            printf("Invalid choooooooooice!\n");
        }
    } while (!(op >= 1 && op <= 4));

    return 0;
}