// Two numbers are entered through the keyboard at memory locations c & d,
// WAP to interchange the contents of c & d

#include<stdio.h>

int main()
{
    int c, d;
    printf("Enter 1st number: ");
    scanf("%d", &c);
    printf("Enter second number: ");
    scanf("%d", &d);

    int temp = c;
    c = d;
    d = temp;

    printf("After interchanging %d  %d", c, d);

    return 0;
}