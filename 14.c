// If a 4-digit number is input through the keyboard,
// WAP to find sum of first and last digits of the number

#include<stdio.h>
#include<math.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int length = 0;
    for (int i = num; i; i /= 10) length++;

    int sum = 0;
    sum += num % 10;
    sum += num / pow(10, length - 1);

    printf("Sum of first and last digits of %d = %d\n", num, sum);

    return 0;
}