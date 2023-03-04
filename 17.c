#include <stdio.h>

int main()
{
    int basicSalary,
        da = 40,
        hra = 20;
    float grossSalary;

    printf("◇ Input basic salary (₹): ");
    scanf("%d", &basicSalary);

    grossSalary = basicSalary + (da * basicSalary / 100) + (hra * basicSalary / 100);

    printf("◆ Gross salary (₹%d + %d%% DA + %d%% HRA) = ₹%.2f", basicSalary, da, hra, grossSalary);
    return 0;
}
