// If a 5-digit number is input through the keyboard,
// WAP to find sum of its digit

#include<stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int sum = 0; 
    for (int i = num; i; i /= 10) sum += i % 10;

    printf("Sum of digits of %d = %d\n", num, sum);
    
    return 0;
}