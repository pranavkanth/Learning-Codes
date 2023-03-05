#include<stdio.h>

int main()
{
    int size = 7;
    printf("Enter size: ");
    scanf("%d", &size);

    for (int i = size; i; i--)
    {
        for (int j = 0; j < i; j++)
            printf("%c ", 'A' + j);

        for (int j = 0; j < size * 4 - 2 - i * 4; j++)
            printf(" ");

        if (i == size)
            for (int j = i - 2; j >= 0; j--)
                printf("%c ", 'A' + j);
        else
            for (int j = i - 1; j >= 0; j--)
                printf("%c ", 'A' + j);

        printf("\n");
    }

    return 0;
}