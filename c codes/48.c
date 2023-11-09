#include <stdio.h>

int main()
{
    int watts;
    printf("Enter electrical power of electrical appliance(in watts): ");
    scanf("%d", &watts);

    switch (watts)
    {
        case 25: printf("Life span = 2500"); break;
        case 40:
        case 60: printf("Life span = 5000"); break;
        case 75: printf("Life span = 700"); break;
        default: printf("Life span = 0"); break;
    }
    return 0;
}