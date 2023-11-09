// WAP to calculate the salary as per the following table:
// Gender | Years of service | Qualification | Salary
// -------|------------------|---------------|-------
// Male   | >= 10            | Post-graduate | 15k
//        | >= 10            | Graduate      | 10k
//        | <  10            | Post-graduate | 10k
//        | <  10            | Graduate      |  7k
// -------|------------------|---------------|-------
// Female | >= 10            | Post-graduate | 12k
//        | >= 10            | Graduate      |  9k
//        | <  10            | Post-graduate | 10k
//        | <  10            | Graduate      |  6k

#include<stdio.h>

int main()
{
    char gender;
    while (1)
    {
        printf("Enter gender ([M]ale/[F]emale): ");
        scanf(" %c", &gender);

        if (gender != 'f' && gender != 'F' && gender != 'm' && gender != 'M')
            printf("Invalid gender!\n");
        else
            break;
    }

    int qual;
    while (1)
    {
        printf("Qualification:\n  1) Post-graduate\n  2) Graduate\n");
        scanf("%d", &qual);

        if (qual != 1 && qual != 2)
            printf("Invalid qualification!\n");
        else
            break;
    }
    
    int year;
    while (1)
    {
        printf("Enter years of services: ");
        scanf("%d", &year);

        if (year < 0)
            printf("Invalid experience!\n");
        else
            break;
    }

    int sal = 0;

    if (gender == 'm' || gender == 'M')
    {
        if (year >= 10 && qual == 1)
            sal = 15000;
        else if (year >= 10 && qual == 2)
            sal = 10000;
        else if (year < 10 && qual == 1)
            sal = 10000;
        else if (year < 10 && qual == 2)
            sal = 7000;
    }
    else
    {
        if (year >= 10 && qual == 1)
            sal = 12000;
        else if (year >= 10 && qual == 2)
            sal = 9000;
        else if (year < 10 && qual == 1)
            sal = 10000;
        else if (year < 10 && qual == 2)
            sal = 6000;  
    }

    printf("Salary = %d\n", sal);

    return 0;
}