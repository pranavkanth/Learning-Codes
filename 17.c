#include <stdio.h>

int main()
{
    float bs, da, hra, gs;

    printf("◇ Input basic salary (₹): ");
    scanf("%f", &bs);

    if (bs < 1500) 
    {
        da = 0.9 * bs;
        hra = 0.1 * bs;
    }
    else
    {
        da = 0.98 * bs;
        hra = 500;
    }

    gs = bs + da + hra;

    printf("◆ Gross salary (₹%.2f + %.2f DA + %.2f HRA) = ₹%.2f\n", bs, da, hra, gs);

    return 0;
}
