#include<stdio.h>

int main()
{
    char health, residance, sex;
    int age;
    printf("◇ Input:\n  - health condition ([E]xcellent/[P]oor),\n  - age,\n  - community type ([C]ity/[V]illage),\n  - sex ([M]ale/[F]emale):\n> ");
    scanf("%c %d %c %c", &health, &age, &residance, &sex);

    int check = 0;
    if (age >= 25 && age <= 35)
        if (residance == 'C' && health == 'E')
            check = printf("◆ Premium = ₹%d/thousand \n◆ Maximum policy amount = ₹%d lakhs", sex == 'M' ? 4 : 3, sex == 'M' ? 2 : 1);
        else if (residance == 'V' && health == 'P' && sex == 'M')
            check = printf("◆ Premium = ₹6/thousand \n◆ Maximum policy amount = ₹10,000");

    if (!check)
        printf("◆ Sorry, you are not eligible to be insured.");

    printf("\n");
    return 0;
}
