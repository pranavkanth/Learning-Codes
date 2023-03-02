// If the ages of Ram, Shyam and Ajay are input through the keyboard,
// WAP to determine the youngest of three.

#include<stdio.h>

int main()
{
    int r, s, a;
    printf("Enter age of Ram: ");
    scanf("%d", &r);
    printf("Enter age of Shyam: ");
    scanf("%d", &s);
    printf("Enter age of Ajay: ");
    scanf("%d", &a);

    if (r < s && r < a)
        printf("Ram is the youngest\n");
    else if (s < r && s < a)
        printf("Shyam is the youngest\n");
    else
        printf("Ajay is the youngest\n");

    return 0;
}