#include <stdio.h>

int main()
{
    float bs, da, hra, gs;

    printf("◇ Input basic salary (₹): ");
    scanf("%d", &bs);

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

    printf("◆ Gross salary (₹%d + %d%% DA + %d%% HRA) = ₹%.2f", bs, da, hra, gs);

    return 0;
}
